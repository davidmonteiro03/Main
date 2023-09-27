/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   potencia_de_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:47:56 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 18:50:34 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	main(void)
{
	int	n;
	int	i;
	int	t;
	int	j;
	int	a[100];

	scanf("%d", &n);
	i = 0;
	while (++i <= n)
		scanf("%d", &a[i]);
	i = 0;
	while (++i <= n)
	{
		t = 0;
		j = -1;
		while (++j <= a[i])
		{
			if (pow(2, j) == a[i])
			{
				t++;
				printf("%d\n", j);
			}
		}
		if (t == 0)
			printf("ERRO\n");
	}
	return (0);
}
