/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primos_cap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:14:46 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 17:21:26 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	prime(int num)
{
	int	primecount;
	int	i;
	int	flag;
	int	prime;

	primecount = 0;
	prime = 1;
	while (num != primecount)
	{
		flag = 0;
		prime++;
		i = 1;
		while (++i <= (prime / 2))
		{
			if (prime % i == 0)
				flag = 1;
		}
		if (flag == 0)
			primecount++;
	}
	return (prime);
}

int	main(void)
{
	int	n;
	int	i;
	int	tmp;
	int	result[100];

	scanf("%d", &n);
	i = -1;
	while (++i < n)
	{
		scanf("%d", &tmp);
		result[i] = prime(tmp);
	}
	i = -1;
	while (++i < n)
		printf("%d\n", result[i]);
	return (0);
}
