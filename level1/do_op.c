/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 19:28:33 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/23 19:37:03 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	do_op(int x, int y, char *str)
{
	int	res = 0;

	if (str[0] == '+')
		res = x + y;
	else if (str[0] == '-')
		res = x - y;
	else if (str[0] == '*')
		res = x * y;
	else if (str[0] == '/')
		res = x / y;
	printf("%i", res);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc == 4)
	{
		x = atoi(argv[1]);
		y = atoi(argv[3]);
		do_op(x, y, argv[2]);
	}
	printf("\n");
	return (0);
}
