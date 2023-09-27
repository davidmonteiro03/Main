/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palavras.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:08:20 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/14 17:08:21 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	not_alpha(char c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (-1);
	return (0);
}

int	main(void)
{
	int		i, j, k, t;
	char	*token;
	char	text[500];
	char	pal[500][500];

	scanf(" %[^\n]s", text);
	token = strtok(text, " ");
	i = 0;
	while (token != NULL)
	{
		strcpy(pal[i], token);
		token = strtok(NULL, " ");
		i++;
	}
	j = 0;
	t = 0;
	while (j < i)
	{
		k = 0;
		while (k < strlen(pal[j]))
		{
			if (not_alpha(pal[j][k]) == -1)
				break ;
			k++;
		}
		if (k == strlen(pal[j]))
		{
			if (t > 0)
				printf(" ");
			printf("%s", pal[j]);
			t++;
		}
		j++;
	}
	return (0);
}
