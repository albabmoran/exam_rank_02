/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:41:47 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/25 16:48:12 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	hcd;

	if (argc != 3)
		return (printf("\n"), 0);
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	if (a < b)
		hcd = a;
	else
		hcd = b;
	while (hcd != 0)
	{
		if (a % hcd == 0 && b % hcd == 0)
			return (printf("%d\n", hcd), 0);
		hcd--;
	}
	printf("1\n");
	return (0);
}
