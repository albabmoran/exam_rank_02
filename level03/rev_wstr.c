/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 14:42:51 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/26 15:00:37 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	rev_wstr(char *str)
{
	int	i = 0;
	int	len = 0;

	while (str[len])
		len++;
	len--;
	while (len >= 0)
	{
		while (len >= 0 && ft_isspace(str[len]))
			len--;
		while(len >= 0 && !ft_isspace(str[len]))
		{
			i = len;
			len--;
		}
		while (str[i] && !ft_isspace(str[i]))
		{
			write(1, &str[i], 1);
			i++;
		}
		if (len > 0)
			write(1, " ", 1);
		len--;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "\n", 1), 0);
	rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
