/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pao_de_forma.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:10:25 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 16:12:14 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	total_fat(int fatias, int codeas)
{
	int	total;
	int	t;
	int	s;

	total = fatias;
	while (fatias >= codeas)
	{
		t = fatias / codeas;
		total += t;
		s = fatias % codeas;
		fatias = t + s;
	}
	return (total);
}

int	main(void)
{
	int	fatias;
	int	codeas;
	int	total;

	scanf("%d %d", &fatias, &codeas);
	total = total_fat(fatias, codeas);
	printf("%d", total);
	return (0);
}
