/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:39:38 by dcaetano          #+#    #+#             */
/*   Updated: 2023/10/03 10:28:12 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	n_src;
	unsigned int	n_dst;
	unsigned int	res;
	unsigned int	i;

	n_dst = ft_strlen(dest);
	n_src = ft_strlen(src);
	res = 0;
	if (size > n_dst)
		res = n_src + n_dst;
	else
		res = n_src + size;
	i = -1;
	while (src[++i] && size > n_dst + 1)
	{
		dest[n_dst] = src[i];
		n_dst++;
	}
	dest[n_dst] = '\0';
	return (res);
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
