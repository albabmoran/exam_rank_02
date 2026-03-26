/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 22:08:50 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/24 16:20:32 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	unsigned int	i = 0;
	int		nbr = 0;

	if (len == 0)
		return (0);
	nbr = tab[i];
	while (i < len)
	{
		if (nbr < tab[i])
			nbr = tab[i];
		i++;
	}
	return (nbr);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nbr[] = {};

	printf("max: %d", max(nbr, 0));
	return (0);
}*/
