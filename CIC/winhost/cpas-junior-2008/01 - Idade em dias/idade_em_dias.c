/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idade_em_dias.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:43:50 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/14 21:43:51 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	anos, meses, dias;
	int	n_dias;

	scanf("%d", &n_dias);
	anos = n_dias / 365;
	meses = n_dias % 365 / 30;
	dias = n_dias % 365 % 30;
	printf("ANOS=%d\n", anos);
	printf("MESES=%d\n", meses);
	printf("DIAS=%d\n", dias);
	return (0);
}
