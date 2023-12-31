/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:40:59 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/30 11:58:14 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
/*#include <stdio.h>
#include <stdlib.h>
#define MAX 10

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
int	ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	if (!begin_list)
		return (0);
	while (begin_list)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}
/*
void	ft_display_list(t_list *head, t_list *temp)
{
	printf("\n");
	while (head)
	{
		temp = head;
		printf(" => %d\n", *(int *)temp->data);
		head = head->next;
		free(temp->data);
		free(temp);
	}
	printf("\n");
}

int	main(void)
{
	t_list	*lst;
	t_list	*head;
	t_list	*temp;
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
	printf("\n\tNumber of elements: %d\n", ft_list_size(head));
	ft_display_list(head, temp);
	return (0);
}*/
