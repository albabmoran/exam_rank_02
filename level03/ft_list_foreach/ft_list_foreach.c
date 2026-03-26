/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 13:51:16 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/26 13:56:59 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list;

	list = begin_list;
	while(list)
	{
		f(list->data);
		list = list->next;
	}
}
/*
#include <unistd.h>

void    print_str(void *data)
{
	char	*str;
	int	i;

	str = (char *)data;
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

#include <stdlib.h>

t_list  *new_node(void *data)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	node->data = data;
	node->next = NULL;
	return (node);
}

#include <stdlib.h>

int main(void)
{
	t_list *n1 = new_node("Hola");
	t_list *n2 = new_node("que");
	t_list *n3 = new_node("tal");

	n1->next = n2;
	n2->next = n3;

	ft_list_foreach(n1, print_str);
	return (0);
}*/
