/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estacoes_do_ano.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:29:06 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 20:35:47 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;

	scanf("%d", &n);
	if (n >= 1 && n <= 78 || n >= 356 && n <= 365)
		printf("INVERNO\n");
	else if (n >= 79 && n <= 171)
		printf("PRIMAVERA\n");
	else if (n >= 172 && n <= 264)
		printf("VERAO\n");
	else if (n >= 265 && n <= 355)
		printf("OUTONO\n");
	return (0);
}
