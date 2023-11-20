/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_pratico_B1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:49:50 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/20 16:03:30 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	c;
	int		d;
	double	tot;

	scanf(" %c", &c);
	scanf("%d", &d);
	tot = 50;
	if (c == 'P')
		tot += 10;
	else if (c == 'M')
		tot += 20;
	else if (c == 'G')
		tot += 40;
	tot += d * 0.1;
	if (tot < 80)
		tot = 80;
	else if (tot > 500)
		tot = 500;
	printf("PRECO:%.lf\n", tot);
	return (0);
}
