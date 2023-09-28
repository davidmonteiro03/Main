/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:05:36 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/28 17:00:11 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, unsigned int n)
{
	unsigned char		*aux_dest;
	const unsigned char	*aux_src;

	aux_dest = (unsigned char *)dest;
	aux_src = (unsigned char *)src;
	while (n-- > 0)
	{
		*(aux_dest++) = *(aux_src);
		if (*aux_src++ == (unsigned char)c)
			return ((void *)dest);
	}
	return (NULL);
}
