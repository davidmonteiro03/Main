/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2005-9.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:37:00 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 19:13:33 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	atr_sep(char sep[100])
{
	char	i;
	int		t;

	t = 0;
	i = 31;
	while (++i < 127)
		if (i < '0' || (i > '9' && i < 'A') || \
			(i > 'Z' && i < 'a') || (i > 'z'))
			sep[t++] = i;
}

int	main(void)
{
	int		i;
	int		n;
	int		soma;
	double	media;
	char	*token;
	char	sep[100];
	char	text[255];
	char	aux[100][255];

	scanf(" %[^\n]s", text);
	if (strlen(text) < 255)
	{
		atr_sep(sep);
		token = strtok(text, sep);
		n = 0;
		while (token != NULL)
		{
			strcpy(aux[n++], token);
			token = strtok(NULL, sep);
		}
		if (n < 100 && n > 0)
		{
			soma = 0;
			i = -1;
			while (++i < n)
				soma += strlen(aux[i]);
			media = (double)soma / (double)n;
			printf("%.1lf\n", media);
		}
	}
	return (0);
}
