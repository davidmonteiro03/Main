/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graus_celsius_fahrenheit_no_intervalo.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:31:41 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 11:36:02 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		i;
	double	a;
	double	b;
	double	c;

	scanf("%lf", &a);
	scanf("%lf", &b);
	i = 0;
	while (i <= a)
	{
		c = (double)i * 9 / 5 + 32;
		printf("%d %.2lf\n", i, c);
		i += b;
	}
	return (0);
}
