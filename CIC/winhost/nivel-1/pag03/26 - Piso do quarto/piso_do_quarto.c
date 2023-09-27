/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piso_do_quarto.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:38:03 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 11:56:13 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	lmq;
	double	lcp;
	double	pqm;
	double	aqm;
	double	apm;
	double	qpn;
	double	ppq;

	scanf("%lf %lf", &lmq, &lcp);
	pqm = 2 * lmq + 11;
	aqm = lmq * 5.5;
	apm = (lcp / 100.0) * (lcp / 100.0);
	qpn = aqm / apm;
	ppq = qpn * 5.0;
	printf("%.2lf\n", pqm);
	printf("%.2lf\n", aqm);
	printf("%.2lf\n", apm);
	printf("%.2lf\n", qpn);
	printf("%.2lf\n", ppq);
	return (0);
}
