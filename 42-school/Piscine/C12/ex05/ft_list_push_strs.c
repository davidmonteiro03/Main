/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:04:11 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/30 16:31:26 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
/*#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*aux;

	aux = (t_list *)malloc(sizeof(t_list));
	if (!aux)
		return (NULL);
	aux->data = data;
	aux->next = NULL;
	return (aux);
}
*/
void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	if (!begin_list)
		return ;
	node = ft_create_elem(data);
	if (!node)
		return ;
	if (*begin_list)
		node->next = *begin_list;
	*begin_list = node;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*list;

	i = -1;
	list = NULL;
	while (++i < size)
		ft_list_push_front(&list, strs[i]);
	return (list);
}
/*
void	ft_list_print(t_list *list)
{
	t_list	*aux;

	printf("\n");
	while (list)
	{
		aux = list;
		printf(" => %s\n", (char *)aux->data);
		list = list->next;
		free(aux);
	}
	printf("\n");
}

int	main(int ac, char **av)
{
	t_list	*list;

	if (ac < 2)
	{
		printf("\n");
		return (1);
	}
	list = ft_list_push_strs(ac - 1, av + 1);
	ft_list_print(list);
	return (0);
}*/
