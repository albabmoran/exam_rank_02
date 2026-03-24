/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 20:12:49 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/23 20:20:46 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;
	int	j;

	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "hola que tal";
	char	s2[] = "vwx";

	printf("mia: %s\noriginal: %s", ft_strpbrk(s1, s2), strpbrk(s1, s2));
	return (0);
}*/
