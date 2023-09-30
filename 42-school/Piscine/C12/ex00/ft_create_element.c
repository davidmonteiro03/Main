/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_element.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:59:59 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/30 11:28:49 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
//#include <stdio.h>

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
/*
int	main(void)
{
	t_list	*lst;
	int		*num;

	num = (int *)malloc(sizeof(int));
	if (!num)
		return (1);
	*num = 42;
	lst = ft_create_elem(num);
	if (!lst)
		return (1);
	printf("\n => %d\n\n", *(int *)lst->data);
	free(lst->data);
	free(lst);
	return (0);
}*/
