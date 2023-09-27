/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   codigo_morse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:16:26 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 16:22:32 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	atr_decode(char *decode[10])
{
	decode[0] = "-----";
	decode[1] = ".----";
	decode[2] = "..---";
	decode[3] = "...--";
	decode[4] = "....-";
	decode[5] = ".....";
	decode[6] = "-....";
	decode[7] = "--...";
	decode[8] = "---..";
	decode[9] = "----.";
}

int	main(void)
{
	char	*decode[10];
	char	c[100];
	int		i;

	scanf(" %[^\n]s", c);
	atr_decode(decode);
	i = -1;
	while (++i < strlen(c))
		printf("%s", decode[c[i] - '0']);
	printf("\n");
	return (0);
}
