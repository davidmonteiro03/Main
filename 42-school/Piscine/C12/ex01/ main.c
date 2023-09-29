/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 21:54:34 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/29 21:58:25 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#define MAX 10

int	main(void)
{
	int		index;
	int		num;
	t_list	*list;
	t_list	*temp;

	srand(time(NULL));
	list = NULL;
	index = -1;
	while (++index < MAX)
	{
		num = rand() % MAX + 1;
		ft_list_push_back(&list, (void *)&num);
	}
	while (list != NULL)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
	return (0);
}
