/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_2_11if_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:33:05 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/06 08:45:14 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	n_len(int num)
{
	int	aux;
	int	len;

	aux = num;
	len = 0;
	if (num == 0)
		len = 1;
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	num = aux;
	return (len);
}

int	pot(int num)
{
	int	res;
	int	i;

	if (num % 10 == 0)
		return (1);
	res = num / 10;
	i = -1;
	while (++i < num % 10 - 1)
		res *= num / 10;
	return (res);
}

int	main(void)
{
	int	a[100];
	int	n;
	int	i;
	int	sum;

	scanf("%d", &n);
	i = -1;
	while (++i < n)
		scanf("%d", &a[i]);
	sum = 0;
	i = -1;
	while (++i < n)
	{
		if (n_len(a[i]) == 1)
			sum += a[i];
		else
			sum += pot(a[i]);
	}
	if (n > 0)
		printf("%d\n", sum);
	return (0);
}
