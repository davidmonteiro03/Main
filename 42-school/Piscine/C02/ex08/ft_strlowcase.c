/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:27:26 by dcaetano          #+#    #+#             */
/*   Updated: 2023/08/30 12:33:34 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	text[100];
	int	d;
	
	strcpy(text, "David Monteiro");
	printf("%s\n", ft_strlowcase(text));
	return (0);
}*/
