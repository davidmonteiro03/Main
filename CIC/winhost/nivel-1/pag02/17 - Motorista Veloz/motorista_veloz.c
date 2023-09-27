/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   motorista_veloz.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:17:49 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 10:28:19 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	inicial;
	double	final;
	double	l;
	double	lpk;

	scanf("%lf %lf %lf", &inicial, &final, &l);
	lpk = 100 * l / (final - inicial);
	printf("%.2lf", lpk);
	return (0);
}
