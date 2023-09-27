/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   campanha_de_natal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:36:52 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 17:45:11 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	double	desc;
	double	u;
	double	vu;
	char	cor[15];

	scanf("%lf", &u);
	scanf("%lf", &vu);
	scanf(" %[^\n]s", cor);
	if (strcmp(cor, "VERMELHA") == 0)
		desc = 0.05;
	if (u >= 5)
		desc = 0.1;
	printf("A PAGAR: %.2lf\n", u * vu * (1 - desc));
	printf("DESCONTO: %.2lf", u * vu * desc);
	return (0);
}
