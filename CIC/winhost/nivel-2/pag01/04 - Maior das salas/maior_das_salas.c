/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maior_das_salas.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:13:14 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 16:16:12 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	c1, c2;
	int	l1, l2;

	scanf("%d %d", &c1, &l1);
	scanf("%d %d", &c2, &l2);
	if (c1 * l1 > c2 * l2)
		printf("Sala 1");
	else if (c1 * l1 < c2 * l2)
		printf("Sala 2");
	return (0);
}