/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 16:08:03 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/17 16:19:37 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s2[] = "hola que tal";
	char	s1[5];
	char	*res = NULL;

	printf("%s", s2);
	res = ft_strcpy(s1, s2);
	printf("%s\n", s1);
	printf("%s", res);
}*/
