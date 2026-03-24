/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 16:48:22 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/24 17:14:00 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	int	i = 0;
	int	k = 0;
	int	j = 0;
	int	check = 0;
	char	str[256];

	while (s1[i])
	{
		k = 0;
		while (str[k] && check == 0)
		{
			if (str[k] == s1[i])
				check = 1;
			k++;
		}
		if (check == 0)
		{
			write(1, &s1[i], 1);
			str[j] = s1[i];
			j++;
		}
		i++;
		check = 0;
	}
	i = 0;
	while (s2[i])
	{
		k = 0;
		while (str[k] && check == 0)
		{
			if (str[k] == s2[i])
				check = 1;
			k++;
		}
		if (check == 0)
		{
			write(1, &s2[i], 1);
			str[j] = s2[i];
			j++;
		}
		i++;
		check = 0;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (write(1, "\n", 1));
	else
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
