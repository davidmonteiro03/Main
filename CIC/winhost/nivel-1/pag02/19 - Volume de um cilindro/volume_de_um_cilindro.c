/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   volume_de_um_cilindro.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:39:09 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 10:47:08 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	main(void)
{
	int	r;
	int	h;
	double	v;
	double	ab;
	double	al;
	double	at;

	scanf("%d %d", &r, &h);
	v = M_PI * (double)(r * r * h);
	ab = M_PI * (double)(r * r);
	al = 2 * M_PI * (double)(r * h);
	at = 2 * ab + al;
	printf("O volume e: %.2lf\n", v);
	printf("A area da base e: %.2lf\n", ab);
	printf("A area lateral e: %.2lf\n", al);
	printf("A area total e: %.2lf", at);
	return (0);
}
