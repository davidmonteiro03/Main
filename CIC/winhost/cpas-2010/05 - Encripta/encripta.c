/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   encripta.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:53:38 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/23 21:04:09 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		i;
	int		n;
	char	text[200];
	char	aux[200];

	scanf(" %[^\n]s", text);
	n = 0;
	i = -1;
	while (++i < strlen(text))
		if (text[i] >= 'A' && text[i] <= 'Z')
			aux[n++] = text[i];
	i = -1;
	while (++i < n)
		printf("%c", (aux[i] - 65 + i % 5 + 1) % 26 + 65);
	if (n > 0)
		printf("\n");
	return (0);
}
