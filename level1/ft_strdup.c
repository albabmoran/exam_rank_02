/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 20:02:28 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/23 20:09:00 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int	len = 0;
	int	i = 0;
	char	*res;

	while (src[len])
		len++;
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (src[i])
	{
		res[i] = ((char *)src)[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[] = "hola23 qu*e ta?l";

	printf("%s\n", ft_strdup(s));
	printf("%s", strdup(s));
	return (0);
}*/
