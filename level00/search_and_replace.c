/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:20:58 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/17 17:32:38 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

void	search_and_replace(char *s1, char *s2, char *s3)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[0])
			s1[i] = s3[0];
		write(1, &s1[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		write (1, "\n", 1);
	else if (ft_strlen(argv[2]) > 1)
		write(1, "\n", 1);
	else if (ft_strlen(argv[3]) > 1)
		write(1, "\n", 1);
	else
		search_and_replace(argv[1], argv[2], argv[3]);
}
