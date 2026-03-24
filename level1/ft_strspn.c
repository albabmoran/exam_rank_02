/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 20:31:10 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/23 20:41:14 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i = 0;
	int	j = 0;
	int	count = 0;

	while (accept[j])
	{
		if (s[i] && s[i] == accept[j])
		{
			j = -1;
			i++;
			count++;
		}
		j++;
	}
	return (count);
}
/*
#include <string.h>
#include <stdio.h>

int     main(void)
{
	char	s[] = "hola que tal";
	char	accept[] = " holaquet";

	printf("mía: %zu\noriginal: %lu", ft_strspn(s, accept), strspn(s, accept));
	return (0);
}*/
