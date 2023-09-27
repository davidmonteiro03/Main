/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   promocao_de_natal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:49:24 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 16:57:47 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	desc;
	double	u;
	double	vu;

	scanf("%lf", &u);
	scanf("%lf", &vu);
	if (u * vu < 100)
		desc = 0;
	else if (u * vu >= 100 && u * vu < 200)
		desc = 0.1;
	else
		desc = 0.2;
	printf("TOTAL: %.2lf\n", u * vu);
	printf("TAXA DESCONTO: %.0lf%%\n", desc * 100);
	printf("MONTANTE DESCONTO: %.2lf\n", desc * u * vu);
	printf("A PAGAR: %.2lf", (1 - desc) * u * vu);
	return (0);
}
