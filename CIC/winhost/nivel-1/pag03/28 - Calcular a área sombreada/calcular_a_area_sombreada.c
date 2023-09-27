/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcular_a_area_sombreada.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:08:06 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 12:12:50 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	main(void)
{
	int	r;
	int	l;
	double	ac;
	double	aq;
	double	as;

	scanf("%d", &r);
	l = r * 2;
	ac = M_PI * (double)(r * r);
	aq = (double)(l * l);
	as = aq - ac;
	printf("A area sombreada tem %.2lf cm2 de area.", as);
	return (0);
}
