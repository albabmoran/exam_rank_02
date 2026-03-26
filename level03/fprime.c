/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 12:56:14 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/26 13:19:05 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	isprime(int nb)
{
	int	i = 1;
	int	count = 0;

	while (i <= nb)
	{
		if (nb % i == 0)
			count++;
		i++;
	}
	if (count == 2)
		return (1);
	return (0);
}

void	fprime(int nb)
{
	int	f = 2;

	while (f <= nb)
	{
		if (nb % f == 0 && isprime(f))
		{
			printf("%d", f);
			nb = nb / f;
			if (nb != 1)
				printf("*");
			f--;
		}
		f++;
	}
}

int	main(int argc, char **argv)
{
	int	nb;

	if (argc != 2)
		return (printf("\n"), 0);
	nb = atoi(argv[1]);
	if (nb < 0)
		return (printf("\n"), 0);
	if (nb == 1)
		return (printf("1\n"), 0);
	fprime(nb);
	printf("\n");
	return (0);
}
