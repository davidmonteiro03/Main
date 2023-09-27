/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   herao.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:09:47 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 10:13:56 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	main(void)
{
	double	l1;
	double	l2;
	double	l3;
	double	s;
	double	a;

	scanf("%lf %lf %lf", &l1, &l2, &l3);
	s = (l1 + l2 + l3) / 2;
	a = sqrt(s * (s - l1) * (s - l2) * (s - l3));
	printf("%.2lf", a);
	return (0);
}
