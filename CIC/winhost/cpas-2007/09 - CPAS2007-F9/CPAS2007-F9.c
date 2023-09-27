/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2007-F9.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:49:53 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/23 10:05:04 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		i;
	int		n;
	int		max;
	int		classes[5];
	char	maior[100];
	char	aux[255][255];
	char	*token;
	char	text[255];

	scanf(" %[^\n]s", text);
	n = 0;
	token = strtok(text, " \n\t");
	while (token != NULL)
	{
		strcpy(aux[n++], token);
		token = strtok(NULL, " \n\t");
	}
	if (n > 0)
	{
		max = strlen(aux[0]);
		strcpy(maior, aux[0]);
		i = -1;
		while (++i < 5)
			classes[i] = 0;
		i = -1;
		while (++i < n)
		{
			if (strlen(aux[i]) >= 1 && strlen(aux[i]) <= 3)
				classes[0]++;
			else if (strlen(aux[i]) > 3 && strlen(aux[i]) <= 6)
				classes[1]++;
			else if (strlen(aux[i]) > 6 && strlen(aux[i]) <= 9)
				classes[2]++;
			else if (strlen(aux[i]) > 9 && strlen(aux[i]) <= 12)
				classes[3]++;
			else if (strlen(aux[i]) > 12)
				classes[4]++;
			if (strlen(aux[i]) > max)
			{
				max = strlen(aux[i]);
				strcpy(maior, aux[i]);
			}
		}
		printf("%s\n", maior);
		i = -1;
		while (++i < 5)
			printf("%d\n", classes[i]);
	}
	return (0);
}
