/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formula_resolvente.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:02:19 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 10:06:36 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	main(void)
{
	double	a;
	double	b;
	double	c;
	double	x1;
	double	x2;

	scanf("%lf %lf %lf", &a, &b, &c);
	x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	printf("%.2lf %.2lf", x1, x2);
	return (0);
}
