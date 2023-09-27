/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:02:21 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 15:37:23 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	limit;
	unsigned int	i;

	limit = 0;
	while (src[limit] != '\0')
		limit++;
	if (size > 0)
	{
		i = 0;
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (i);
}
/*
int	main(void)
{
	char	text1[100];
	char	text2[100];

	strcpy(text1, "Hello there, Venus");
	printf("%d | %s => %s\n", ft_strlcpy(text2, text1, 200), text1, text2);
	return (0);
}*/
