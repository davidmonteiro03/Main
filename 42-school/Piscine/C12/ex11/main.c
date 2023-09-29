/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:35:13 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/29 21:53:50 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 5

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void	ft_list_push_back(t_list **begin_list, void *data);

int	compare(void *data, void *data_ref)
{
	return (*(int *)data != *(int *)data_ref);
}

int	main(void)
{
	int		index;
	int		num;
	t_list	*list;
	t_list	*found;
	t_list	*temp;

	srand(time(NULL));
	list = NULL;
	index = -1;
	while (++index < MAX)
	{
		num = rand() % MAX + 1;
		ft_list_push_back(&list, (void *)&num);
	}
	num = rand() % MAX + 1;
	found = ft_list_find(list, &num, &compare);
	if (found != NULL)
		printf("\nFound: %d\n\n", *(int *)found->data);
	while (list != NULL)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
	return (0);
}
