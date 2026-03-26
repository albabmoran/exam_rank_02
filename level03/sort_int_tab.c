/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 15:15:15 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/26 15:26:17 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	int		tmp;

	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {3, 3, 1, 6};
	int	i = 0;

	printf("tab before: ");
	while (i < 4)
	{
		printf("{%d}", tab[i]);
		i++;
	}
	sort_int_tab(tab, 4);
	printf("\ntab after: ");
	i = 0;
	while (i < 4)
	{
		printf("{%d}", tab[i]);
		i++;
	}
	return (0);
}
