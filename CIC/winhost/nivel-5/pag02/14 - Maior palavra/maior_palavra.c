/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maior_palavra.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:13:39 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/12 19:21:32 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		max;
	int		i, k;
	char	*token;
	char	words[100][100];
	char	text[100];

	scanf(" %[^\n]s", text);
	token = strtok(text, " ");
	k = 0;
	while (token != NULL)
	{
		strcpy(words[k], token);
		token = strtok(NULL, " ");
		k++;
	}
	i = 0;
	max = strlen(words[0]);
	while (i < k)
	{
		if (strlen(words[i]) > max)
			max = strlen(words[i]);
		i++;
	}
	i = 0;
	while (i < k)
	{
		if (strlen(words[i]) == max)
			printf("%s\n", words[i]);
		i++;
	}
	return (0);
}
