/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:17:33 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/29 17:23:03 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*aux;

	if (begin_list)
	{
		while (begin_list)
		{
			aux = begin_list;
			begin_list = begin_list->next;
		}
		return (aux);
	}
	return (begin_list);
}
