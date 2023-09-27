/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   areas_e_perimetros.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:25:44 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 11:33:06 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	l_r;
	double	a_r;
	double	c_r;
	double	p_r;

	scanf("%lf %lf", &l_r, &a_r);
	c_r = a_r / l_r;
	p_r = 2.0 * c_r + 2.0 * l_r;
	printf("%.2lf", p_r / 4.0);
	return (0);
}
