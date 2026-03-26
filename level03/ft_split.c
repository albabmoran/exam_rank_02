/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 14:20:26 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/26 14:42:04 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int	count_words(char *str)
{
	int	i = 0;
	int	count = 0;

	while (str[i] != '\0')
	{
		if (!ft_isspace(str[i]) && (i == 0 || ft_isspace(str[i - 1])))
			count++;
		i++;
	}
	return (count);
}

int	count_char(char *str)
{
	int	i = 0;
	int	count = 0;

	while (str[i] && !ft_isspace(str[i]))
	{
		count++;
		i++;
	}
	return (count);
}

void	free_all(char **str)
{
	int	i = 0;

	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char *str)
{
	char	**res;
	int	words = 0;
	int	i = 0;
	int	j = 0;
	int	k;

	words = count_words(str);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	while (i < words)
	{
		k = 0;
		while (ft_isspace(str[j]))
			j++;
		res[i] = malloc(count_char(&str[j]) + 1);
		if (!res[i])
			return (free_all(res), NULL);
		while (str[j] && !ft_isspace(str[j]))
		{
			res[i][k] = str[j];
			j++;
			k++;
		}
		res[i][k] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}
/*
#include <stdio.h>

int main(void)
{
	char	*str = "Hola   que\t tal\nestas";
	char	**res;
	int	i = 0;

	res = ft_split(str);
	if (!res)
		return (1);

	while (res[i])
	{
		printf("palabra[%d]: %s\n", i, res[i]);
		i++;
	}

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}*/
