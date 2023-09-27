/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   media_aritmetica_de_3_numeros.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:35:08 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/09 16:36:30 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	a;
	double	b;
	double	c;

	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%.2lf", (a + b + c) / 3);
	return (0);
}
