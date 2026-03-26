/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 15:01:50 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/26 15:14:07 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	rostring(char *str)
{
	int	i = 0;
	int	check = 0;

	while (str[i] && ft_isspace(str[i]))
		i++;
	while (str[i] && !ft_isspace(str[i]))
		i++;
	while (str[i])
	{
		check = 0;
		while (str[i] && !ft_isspace(str[i]))
		{
			write(1, &str[i], 1);
			i++;
			check = 1;
		}
		if (check == 1)
			write(1, " ", 1);
		if (str[i] && ft_isspace(str[i]))
			i++;
	}
	i = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	while (str[i] && !ft_isspace(str[i]))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (write(1, "\n", 1), 0);
	rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
