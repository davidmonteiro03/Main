/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:48:19 by dcaetano          #+#    #+#             */
/*   Updated: 2023/08/31 10:36:02 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	text1[100];
	char	text2[100];
	strcpy(text1, "David Monteiro");
	strcpy(text2, "afaha Caetano");
	ft_strncpy(text2, text1, 10);
	printf("%s\n", text2);
	return (0);
}*/
