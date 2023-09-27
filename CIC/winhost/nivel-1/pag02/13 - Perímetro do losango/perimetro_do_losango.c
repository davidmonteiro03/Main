/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perimetro_do_losango.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:55:45 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 10:01:02 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	main(void)
{
	double	x;
	double	y;
	double	l;

	scanf("%lf %lf", &x, &y);
	l = sqrt(pow(x / 2, 2) + pow(y / 2, 2));
	printf("%.2lf", 4 * l);
	return (0);
}
