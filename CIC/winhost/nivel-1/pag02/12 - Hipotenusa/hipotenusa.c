/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hipotenusa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:57:56 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/09 17:01:24 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdio.h>

int	main(void)
{
	double	a;
	double	b;

	scanf("%lf %lf", &a, &b);
	printf("%.2lf", sqrt(a * a + b * b));
	return (0);
}
