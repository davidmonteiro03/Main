/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:02:32 by dcaetano          #+#    #+#             */
/*   Updated: 2023/08/30 08:38:53 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	tamanho;
	unsigned int	i;

	tamanho = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[tamanho + i] = src[i];
		i++;
	}
	dest[tamanho + i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	text1[100];
	char	text2[100];
	unsigned int	i;

	i = 4;
	strcpy(text1, "David");
	strcpy(text2, "Monteiro");
	printf("(%d) %s + %s = ", i, text1, text2);
	printf("%s", ft_strncat(text1, text2, i));
	return (0);
}*/
