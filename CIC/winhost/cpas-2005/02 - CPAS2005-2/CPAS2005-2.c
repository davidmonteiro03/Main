/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2005-2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:50:00 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 17:59:56 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	main(void)
{
	int		n;
	int		i;
	int		t;
	char	text[100];
	char	aux[100];
	char	*alfabeto;

	scanf("%d", &n);
	scanf(" %[^\n]s", text);
	alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	t = 0;
	i = -1;
	while (++i < strlen(text))
		if (is_alpha(text[i]))
			aux[t++] = toupper(text[i]);
	i = -1;
	while (++i < t)
	{
		printf("%c", alfabeto[(aux[i] - 65 + n) % 26]);
		if (i % 5 == 4 && aux[i + 1])
			printf(" ");
	}
	printf("\n");
	return (0);
}
