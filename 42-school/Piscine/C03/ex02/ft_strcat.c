/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:32:55 by dcaetano          #+#    #+#             */
/*   Updated: 2023/08/30 08:34:18 by dcaetano         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	tamanho;
	int	i;

	tamanho = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
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

	strcpy(text1, "banana");
	strcpy(text2, "morango");
	printf("%s + %s = ", text1, text2);
	printf("%s", ft_strcat(text1, text2));
}*/
