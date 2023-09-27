/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:06:53 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/06 10:15:35 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = (char *)malloc(sizeof(char) * len);
	if (!(dest))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*text1;
	char	*text2;
	char	*text4;

	text1 = "cxdatqKTiRLqhj2mJedNI23pTcypnDOpH2zAOPxEWjxXC0IrV";
	text2 = strdup(text1);
	text4 = ft_strdup(text1);
	printf("%s\n%s\n", text2, text4);
	return (0);
}*/
