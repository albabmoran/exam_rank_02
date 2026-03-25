/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 13:32:36 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/25 14:04:01 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char c, int n_base)
{
	char	base[16] = "0123456789ABCDEF";
	char	base_down[16] = "0123456789abcdef";
	int	i = 0;

	while (i < n_base)
	{
		if (c == base[i] || c == base_down[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	sign = 1;
	int	res = 0;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && check_base(str[i], str_base))
	{
		res = res * str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res = res + (str[i] - '0');
		else if (str[i] >= 'a' && str[i] <= 'f')
			res = res + (str[i] - 'a' + 10);
		else if (str[i] >= 'A' && str[i] <= 'F')
			res = res + (str[i] - 'A' + 10);
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	char	nbr[] = "-8B";

	printf("%d", ft_atoi_base(nbr, 14));
	return (0);
}*/
