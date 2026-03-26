/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 16:27:02 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/17 16:51:36 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alphabet(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
			j = str[i] - 'a' + 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			j = str[i] - 'A' + 1;
		else
			write(1, &str[i], 1);
		while (j > 0)
		{
			write(1, &str[i], 1);
			j--;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		repeat_alphabet(argv[1]);
	return (0);
}
