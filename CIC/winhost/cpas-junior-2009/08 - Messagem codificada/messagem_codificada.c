/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   messagem_codificada.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:21:22 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 15:35:12 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		i;
	int		tmp;
	char	*decode;
	char	text[500];

	scanf("%d", &tmp);
	if (tmp < 0 || tmp > 26)
		return (0);
	decode = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	while (tmp >= 0)
	{
		if (tmp >= 0 && tmp <= 26)
		{
			text[i] = decode[tmp];
			i++;
		}
		scanf("%d", &tmp);
	}
	printf("%s\n", text);
	return (0);
}
