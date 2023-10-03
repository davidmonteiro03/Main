/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:34:35 by dcaetano          #+#    #+#             */
/*   Updated: 2023/10/03 13:08:13 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*aux_src;
	unsigned char	*aux_dest;
	size_t			i;

	aux_src = (unsigned char *)src;
	aux_dest = (unsigned char *)dest;
	i = -1;
	if (aux_dest > aux_src)
		while (n-- > 0)
			aux_dest[n] = aux_src[n];
	else
		while (++i < n)
			aux_dest[i] = aux_src[i];
	return (dest);
}
