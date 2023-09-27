/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2006-F9.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:08:55 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 20:29:32 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(void)
{
	int		i;
	int		j;
	int		k;
	int		n;
	int		arr[100];
	int		count;
	char	text[100];
	char	to_find[100];

	scanf(" %[^\n]s", text);
	scanf(" %[^\n]s", to_find);
	n = 0;
	i = -1;
	while (++i < strlen(text) - strlen(to_find) + 1)
	{
		j = -1;
		count = 0;
		while (++j < strlen(to_find))
		{
			k = -1;
			while (++k < strlen(to_find))
				if (j == k && toupper(text[i + j]) == toupper(to_find[k]))
					count++;
		}
		if (count == strlen(to_find) && (toupper(text[i + j]) < 'A' || toupper(to_find[k]) > 'Z'))
			arr[n++] = i + 1;
	}
	if (n == 0)
		printf("NAO ENCONTRADA\n");
	else
	{
		printf("%d\n", n);
		i = -1;
		while (++i < n)
			printf("%d\n", arr[i]);
	}
	return (0);
}
