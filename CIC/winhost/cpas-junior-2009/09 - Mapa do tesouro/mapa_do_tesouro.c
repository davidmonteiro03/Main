/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapa_do_tesouro.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:37:00 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 15:52:08 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	tipo;
	int		i;
	int		j;
	int		pos_x;
	int		pos_y;
	int		tmp;
	int		flag;

	scanf(" %c", &tipo);
	pos_x = 1;
	pos_y = 1;
	while (tipo != 'X')
	{
		scanf("%d", &tmp);
		if (tipo == 'B')
			pos_x += tmp;
		else if (tipo == 'C')
			pos_x -= tmp;
		else if (tipo == 'E')
			pos_y -= tmp;
		else if (tipo == 'D')
			pos_y += tmp;
		i = 0;
		flag = 0;
		while (++i <= 20)
		{
			j = 0;
			while (++j <= 20)
			{
				if (pos_x == i && pos_y == j)
					flag = 1;
			}
		}
		scanf(" %c", &tipo);
	}
	if (flag == 0)
		printf("FORA DO MAPA\n");
	else
		printf("X:%d,%d\n", pos_x, pos_y);
	return (0);
}
