/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 14:29:49 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/25 14:41:00 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i = 0;
	int	*range;

	if (start <= end)
	{
		range = malloc(sizeof(int) * (end - start + 1));
		if (!range)
			return (NULL);
		while (end >= start)
		{
			range[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		range = malloc(sizeof(int) * (start - end + 1));
		if (!range)
			return (NULL);
		while (end <= start)
		{
			range[i] = end;
			end++;
			i++;
		}
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i = 0;
	int	*range;

	range = ft_rrange(0, -3);
	while (i < 4)
	{
		printf("{%d}", range[i]);
		i++;
	}
	free(range);
	return (0);
}*/
