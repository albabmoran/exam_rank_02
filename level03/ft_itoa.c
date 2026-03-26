/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 13:20:27 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/26 13:46:33 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_length(int nbr)
{
	int	len = 0;

	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		len++;
	}
	return (len + 1);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char		*str;
	long int	long_nbr;

	long_nbr = nbr;
	len = get_length(long_nbr);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (nbr < 0)
	{
		str[0] = '-';
		long_nbr = -long_nbr;
		while (len > 0)
		{
			str[len] = (long_nbr % 10) + '0';
			len--;
			long_nbr /= 10;
		}
	}
	else
	{
		while (len >= 0)
		{
			str[len] = (long_nbr % 10) + '0';
			long_nbr = long_nbr / 10;
			len--;
		}
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_itoa(123);
	printf("%s", str);
	free(str);
	return (0);
}*/
