/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:06:53 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/30 17:06:10 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>
#include <string.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	i = -1;
	while (dest[++i])
		src[i] = dest[i];
	dest[++i] = 0;
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
	free(text2);
	free(text4);
	return (0);
}
*/
