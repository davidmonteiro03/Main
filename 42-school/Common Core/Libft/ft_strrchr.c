/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:17:34 by dcaetano          #+#    #+#             */
/*   Updated: 2023/10/03 18:12:25 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	const char	*p;

	p = s;
	i = ft_strlen(s);
	s += i;
	while (*s != *p && *s != c)
		s--;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
