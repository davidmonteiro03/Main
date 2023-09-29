/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:34:22 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/29 17:47:36 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*aux;

	if (size <= 0)
		return (0);
	aux = ft_create_elem((void *)strs[size - 1]);
	aux->next = ft_list_push_strs(size - 1, strs);
	return (aux);
}
