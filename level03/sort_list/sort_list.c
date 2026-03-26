/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 15:27:11 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/26 15:45:05 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*begin;
	int	tmp;

	begin = lst;
	while (begin->next)
	{
		if (cmp(begin->data, begin->next->data) == 0)
		{
			tmp = begin->data;
			begin->data = begin->next->data;
			begin->next->data = tmp;
			begin = lst;
		}
		else
			begin = begin->next;
	}
	return (lst);
}

int	check_order(int a, int b)
{
	if (a < b)
		return (0);
	return (1);
}
/*
#include <stdlib.h>

t_list *new_node(int value)
{
	t_list *node = malloc(sizeof(t_list));
	if (!node)
		return NULL;
	node->data = value;
	node->next = NULL;
	return node;
}

void	add_back(t_list **lst, t_list *new)
{
	t_list *tmp;

	if (!*lst)
	{
		*lst = new;
		return;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

#include <stdio.h>

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d ", lst->data);
		lst = lst->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list *lst = NULL;

	add_back(&lst, new_node(42));
	add_back(&lst, new_node(3));
	add_back(&lst, new_node(17));
	add_back(&lst, new_node(1));

	printf("Antes:\n");
	print_list(lst);

	sort_list(lst, check_order);

	printf("Despues:\n");
	print_list(lst);

	return 0;
}*/
