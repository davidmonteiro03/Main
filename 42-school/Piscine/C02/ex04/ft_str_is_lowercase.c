/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:30:06 by dcaetano          #+#    #+#             */
/*   Updated: 2023/08/30 12:30:42 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	text[100];
	int	d;
	
	strcpy(text, "David Monteiro");
	d = ft_str_is_lowercase(text);
	printf("%d\n", d);
	return (0);
}*/
