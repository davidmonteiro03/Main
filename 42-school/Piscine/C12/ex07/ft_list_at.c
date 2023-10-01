/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:04:11 by dcaetano          #+#    #+#             */
/*   Updated: 2023/10/01 14:18:45 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <time.h>
#include <stdio.h>
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

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	while (begin_list)
	{
		if (i == nbr)
			return (begin_list);
		begin_list = begin_list->next;
		i++;
	}
	return (NULL);
}

void	ft_display_list(t_list *head)
{
	unsigned int	i;

	printf("\033[1;32m\n");
	i = 0;
	while (head)
	{
		printf("\ti: %d =====> element: %d\n", i, *(int *)head->data);
		head = head->next;
		i++;
	}
	printf("\033[1;0m");
}

void	ft_free_list(t_list *head)
{
	t_list	*temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->data);
		free(temp);
	}
}

void	ft_display_list_elements(t_list *head)
{
	unsigned int	i;
	unsigned int	index;
	int				flag;

	printf("\n");
	flag = 1;
	i = -1;
	while (++i < MAX)
	{
		index = rand() % (MAX * 2);
		if (ft_list_at(head, index))
			flag = 1;
		else
			flag = 0;
		if (flag)
			printf("\033[1;32m");
		else
			printf("\033[1;31m");
		printf("\tindex: %d => ", index);
		if (ft_list_at(head, index))
			printf("element: %d", *(int *)(ft_list_at(head, index)->data));
		else
			printf("No element here");
		printf("\033[1;0m\n");
	}
}

int	main(void)
{
	t_list			*lst;
	t_list			*head;
	int				*num;
	unsigned int	i;
	unsigned int	index;

	srand(time(NULL));
	lst = NULL;
	i = -1;
	while (++i < MAX)
	{
		num = (int *)malloc(sizeof(int));
		if (!num)
			return (1);
		*num = (rand() % MAX + 1) * (rand() % 100 + 1);
		ft_list_push_back(&lst, num);
		if (i == 0)
			head = lst;
	}
	if (!lst || !head)
		return (1);
	ft_display_list(head);
	ft_display_list_elements(head);
	printf("\n");
	ft_free_list(head);
	return (0);
}
