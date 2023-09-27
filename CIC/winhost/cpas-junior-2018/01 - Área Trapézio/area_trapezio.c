/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   area_trapezio.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:06:25 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 15:08:40 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	base;
	double	b;
	double	h;
	double	area;

	scanf("%lf", &base);
	scanf("%lf", &b);
	scanf("%lf", &h);
	area = (double)((base + b) * h) / 2;
	printf("%.1lf\n", area);
	return (0);
}
