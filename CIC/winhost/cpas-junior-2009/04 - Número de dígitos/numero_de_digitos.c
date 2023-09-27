/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numero_de_digitos.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:37:46 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 14:40:16 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	n;
	int		i;
	int		d;
	int		x;

	scanf("%lf", &n);
	i = 0;
	x = (int)(n);
	if (x > 0)
	{
		while (n >= 1)
		{
			n = n / 10;
			i++;
		}
		printf("%d\n", i);
	}
	else
		printf("0\n");
	return (0);
}
