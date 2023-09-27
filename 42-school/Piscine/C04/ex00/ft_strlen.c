/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 09:22:06 by dcaetano          #+#    #+#             */
/*   Updated: 2023/08/31 10:48:31 by dcaetano         ###   ########.fr       */
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
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	text[100];
	int	len;

	strcpy(text, "abc");
	len = ft_strlen(text);
	printf("%d\n", len);
	return (0);
}*/
