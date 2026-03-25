/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 14:05:48 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/25 14:11:57 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*node;
	int	size = 0;

	node = begin_list;
	while (node->next != NULL)
	{
		size++;
		node = node->next;
	}
	return (size);
}
