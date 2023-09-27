/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2006-F4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:48:50 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 19:59:01 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define LIM 20
#define FALSE 0
#define TRUE 1

int	main(void)
{
	int		achou;
	int		n;
	int		i;
	int		j;
	int		k;
	int		freq[LIM];
	double	num;
	double	numero[LIM];

	scanf("%d", &n);
	if (n <= LIM)
	{
		k = -1;
		i = -1;
		while (++i < n)
		{
			scanf("%lf", &num);
			achou = FALSE;
			j = 0;
			while (!achou && j <= k)
			{
				if (numero[j] == num)
				{
					achou = TRUE;
					freq[j]++;
				}
				else
					j++;
			}
			if (!achou)
			{
				k++;
				numero[k] = num;
				freq[k] = 1;
			}
		}
		j = -1;
		while (++j <= k)
			printf("%.1lf=%d\n", numero[j], freq[j]);
	}
	return (0);
}
