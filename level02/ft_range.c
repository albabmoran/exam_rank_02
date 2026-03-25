/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 14:12:19 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/25 14:29:26 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	*range;
	int	i = 0;

	if (start >= end)
	{
		range = malloc(sizeof(int) * (start - end + 1));
		if (!range)
			return (NULL);
		while(start >= end)
		{
			range[i] = start;
			i++;
			start--;
		}
	}
	else
	{
		range = malloc(sizeof(int) * (end - start + 1));
		if (!range)
			return (NULL);
		while (start <= end)
		{
			range[i] = start;
			i++;
			start++;
		}
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	i = 0;

	range = ft_range(0, -3);
	while (i < 4)
	{
		printf("{%d}", range[i]);
		i++;
	}
	free(range);
	return (0);
}*/
