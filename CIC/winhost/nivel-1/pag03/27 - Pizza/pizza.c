/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pizza.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:58:30 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 12:05:43 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	main(void)
{
	double	cf;
	double	cb;
	double	ce;
	double	d;
	double	n;
	double	p;
	double	c;
	double	a;
	double	r;

	scanf("%lf", &cf);
	scanf("%lf", &cb);
	scanf("%lf", &ce);
	scanf("%lf", &d);
	scanf("%lf", &n);
	r = d / 2.0;
	a = M_PI * r * r;
	c = cf + cb * a + n * ce * a;
	p = 1.5 * c;
	printf("%.2lf", p);
	return (0);
}
