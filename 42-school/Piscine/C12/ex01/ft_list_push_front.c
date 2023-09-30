/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:10:07 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/30 15:49:47 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20

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
	t_list	*aux;

	if (*begin_list)
	{
		aux = ft_create_elem(data);
		aux->next = *begin_list;
		*begin_list = aux;
	}
	else
		*begin_list = ft_create_elem(data);
}
/*
void	ft_display_list(t_list *lst, t_list *temp)
{
	printf("\n");
	while (lst)
	{
		temp = lst;
		printf(" => %d\n", *(int *)temp->data);
		lst = lst->next;
		free(temp->data);
		free(temp);
	}
	printf("\n");
}

int	main(void)
{
	t_list	*lst;
	t_list	*temp;
	int		*num;
	int		n;
	int		i;

	srand(time(NULL));
	lst = NULL;
	n = rand() % MAX + 1;
	i = -1;
	while (++i < MAX)
	{
		num = (int *)malloc(sizeof(int));
		if (!num)
			return (1);
		*num = i + 1;
		ft_list_push_front(&lst, num);
	}
	if (!lst)
		return (1);
	ft_display_list(lst, temp);
	return (0);
}*/
