/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:49:57 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/28 15:04:04 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned char		*aux_dest;
	const unsigned char	*aux_src;

	aux_dest = (unsigned char *)dest;
	aux_src = (unsigned char *)src;
	while (n-- > 0)
		*(aux_dest++) = *(aux_src++);
	return (dest);
}
