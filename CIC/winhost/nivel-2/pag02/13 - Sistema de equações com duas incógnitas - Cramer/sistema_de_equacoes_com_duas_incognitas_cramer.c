/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sistema_de_equacoes_com_duas_incognitas_c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:16:10 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 17:34:59 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	x1, y1, res1;
	double	x2, y2, res2;
	double	x, y;

	scanf("%lf %lf %lf", &x1, &y1, &res1);
	scanf("%lf %lf %lf", &x2, &y2, &res2);
	if (x1 / x2 == y1 / y2 && y1 / y2 == res1 / res2)
		printf("Indeterminado");
	else if (x1 / x2 == y1 / y2)
		printf("Impossivel");
	else
	{
		x = (res1 * y2 - y1 * res2) / (x1 * y2 - y1 * x2);
		y = (x1 * res2 - res1 * x2) / (x1 * y2 - y1 * x2);
		printf("%.2lf %.2lf", x, y);
	}
	return (0);
}
