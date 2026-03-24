/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 21:02:36 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/23 22:08:01 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int	i = 0;

	while (str[i + 1])
		i++;
	while (i >= 0 && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i--;
	while (i >= 0 && !(str[i] >= 9 && str[i] <= 13) && str[i] != ' ')
		i--;
	i++;
	while (str[i] && str[i] != ' ' && !(str[i] >= 9 && str[i] <= 13))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "\n", 1));
	else
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
