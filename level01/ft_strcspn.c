/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 19:51:16 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/23 20:02:05 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	j;
	int	count = 0;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (count);
			j++;
		}
		count++;
		i++;
	}
	return (count);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	s[] = "";
	char	reject[] = "o";

	printf("mía: %zu\noriginal: %lu", ft_strcspn(s, reject), strcspn(s, reject));
	return (0);
}*/
