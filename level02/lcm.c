/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:22:02 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/25 16:35:21 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	res;
	unsigned int	tmp_a = a;
	unsigned int	tmp_b = b;

	if (!a || !b)
		return (0);
	while (a != b)
	{
		if (a < b)
			a = a + tmp_a;
		if (b < a)
			b = b + tmp_b;
	}
	res = b;
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("LCM: %d\n", lcm(25, 20));
	printf("LCM: %d\n", lcm(7, 16));
	printf("LCM: %d\n", lcm(13, 9));
	printf("LCM: %d\n", lcm(15, 10));
	printf("LCM: %d\n", lcm(3, 0));
	printf("LCM: %d\n", lcm(3, 9));
	return (0);
}*/
