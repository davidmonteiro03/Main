/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:55:19 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/28 19:59:54 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	limit;
	size_t	i;
	size_t	aux_size;

	limit = 0;
	while (src[limit] != '\0')
		limit++;
	aux_size = 0;
	while (dest[aux_size] != '\0')
		aux_size++;
	if (limit <= size)
	{
		i = 0;
		while (i < size && src[i] != '\0')
		{
			dest[aux_size + i] = src[i];
			i++;
		}
		dest[aux_size + i] = '\0';
		limit += i - 1;
	}
	return (limit);
}
