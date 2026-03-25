/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 13:08:44 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/25 13:17:38 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *str)
{
	int	i = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] && (str[i + 1] != ' ' && str[i + 1] != '\t'))
			write(1, &str[i], 1);
		if (str[i] != ' ' && str[i] != '\t')
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "\n", 1), 0);
	epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
