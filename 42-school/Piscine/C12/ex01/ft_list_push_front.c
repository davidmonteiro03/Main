/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:47:16 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/29 16:52:37 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*aux;

	if (!(*begin_list))
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	aux = ft_create_elem(data);
	aux->next = *begin_list;
	*begin_list = aux;
}
