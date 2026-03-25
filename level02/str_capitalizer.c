/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 18:47:31 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/25 18:50:41 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_cap(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t')
				str[i] = str[i] - 32;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i = 1;

	if (argc == 1)
		return (write(1, "\n", 1), 0);
	while(argv[i])
	{
		str_cap(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
