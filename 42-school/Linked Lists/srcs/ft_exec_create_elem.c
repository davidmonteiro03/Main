/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_create_elem.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:19:38 by dcaetano          #+#    #+#             */
/*   Updated: 2023/10/02 13:03:27 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"

void	ft_exec_create_elem(void)
{
	t_list	*list;
	int		*num;

	printf("\n==> ft_create_elem function\n");
	num = (int *)malloc(sizeof(int));
	if (!num)
		return ;
	*num = 42;
	list = ft_create_elem(num);
	if (!list)
		return ;
	printf("\n => %d\n\n", *(int *)list->data);
	free(list->data);
	free(list);
}
