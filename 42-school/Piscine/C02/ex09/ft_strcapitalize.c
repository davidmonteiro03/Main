/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:44:44 by dcaetano          #+#    #+#             */
/*   Updated: 2023/08/30 12:34:11 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_uppercase(char b)
{
	if (b < '0' || (b > '9' && b < 'A') || (b > 'Z' && b < 'a') || b > 'z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_uppercase(str[i - 1]) == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
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

	strcpy (text, "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um");
	ft_strcapitalize(text);
	printf ("%s\n", text);
	return (0);
}*/
