/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   media_de_idades_da_familia.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:37:53 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/09 16:39:49 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	a;
	double	b;
	double	c;

	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	printf("%.2lf\n", (a + b + c) / 3);
	return (0);
}
