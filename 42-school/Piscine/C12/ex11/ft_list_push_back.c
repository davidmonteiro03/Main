/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:26:59 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/29 21:40:58 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*aux;

	aux = *begin_list;
	if (!aux)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (aux->next)
		aux = aux->next;
	aux->next = ft_create_elem(data);
}
