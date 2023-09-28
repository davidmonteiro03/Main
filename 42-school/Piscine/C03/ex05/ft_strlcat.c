/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:39:38 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/28 18:54:38 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	limit;
	unsigned int	i;
	unsigned int	aux_size;

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

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	text1[100];
	char	text2[100];

	strcpy(text1, "banana");
	strcpy(text2, "morango");
	printf("%s + %s = ", text1, text2);
	printf("%d\n",ft_strlcat(text1, text2, 3));
	printf("=> %s", text1);
}*/
