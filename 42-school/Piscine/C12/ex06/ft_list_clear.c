/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:04:11 by dcaetano          #+#    #+#             */
/*   Updated: 2023/10/01 10:04:01 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
/*#include <stdio.h>
#include <stdlib.h>
#define MAX 5

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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list;

	list = *begin_list;
	if (!list)
		*begin_list = ft_create_elem(data);
	else
	{
		while (list->next)
			list = list->next;
		list->next = ft_create_elem(data);
	}
}
*/
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*aux;

	while (begin_list)
	{
		aux = begin_list;
		begin_list = begin_list->next;
		(*free_fct)(aux->data);
		free(aux);
	}
}
/*
void	free_fct(void *data)
{
	free(data);
}

void	ft_display_list(t_list *head)
{
	printf("\n");
	while (head)
	{
		printf(" => %d\n", *(int *)head->data);
		head = head->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list	*lst;
	t_list	*head;
	int		*num;
	int		i;

	lst = NULL;
	i = -1;
	while (++i < MAX)
	{
		num = (int *)malloc(sizeof(int));
		if (!num)
			return (1);
		*num = i + 1;
		ft_list_push_back(&lst, num);
		if (i == 0)
			head = lst;
	}
	if (!lst || !head)
		return (1);
	ft_display_list(head);
	ft_list_clear(head, &free_fct);
	return (0);
}
*/
