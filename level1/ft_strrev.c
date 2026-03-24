/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 20:21:43 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/23 20:30:00 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
	int	i = 0;
	int	len = 0;
	int	j;
	char	tmp;

	while (str[len])
		len++;
	j = len;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[j - 1];
		str[j - 1] = tmp;
		j--;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "hello";

	printf("original: %s\n", str);
	printf("reversed: %s", ft_strrev(str));
	return (0);
}*/
