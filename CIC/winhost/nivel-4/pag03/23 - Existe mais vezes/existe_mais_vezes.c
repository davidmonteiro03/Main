/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   existe_mais_vezes.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:18:44 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 11:58:30 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i, j, k, t, z, ele, max, flag, d;
	int	a[100], b[100], aux[100], aux2[200], oco[200], res[200];

	scanf("%d", &n);
	i = 0;
	d = 0;
	while (i < n)
	{
		scanf("%d", &a[i]);
		res[d++] = a[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		scanf("%d", &b[i]);
		res[d++] = b[i];
		i++;
	}
	i = 0;
	z = 0;
	while (i < d)
	{
		j = 0;
		t = 1;
		flag = 0;
		while (j < d)
		{
			if (i != j && res[i] == res[j])
				t++;
			j++;
		}
		aux[i] = res[i];
		k = 0;
		while (k < i + 1)
		{
			if (i != k && aux[i] == aux[k])
				flag = 1;
			k++;
		}
		if (flag != 1)
		{
			aux2[z] = res[i];
			oco[z] = t;
			z++;
		}
		i++;
	}
	i = 0;
	while (i < z)
	{
		if (i == 0)
		{
			max = oco[i];
			ele = aux2[i];
		}
		if (oco[i] > max)
		{
			max = oco[i];
			ele = aux2[i];
		}
		i++;
	}
	printf("%d", ele);
	return (0);
}
