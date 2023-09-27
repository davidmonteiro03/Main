/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2007-F4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:44:47 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 21:03:08 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	transform(int num)
{
	int	aux_num;
	int	aux;

	if (num == 1 || num == 7)
		return (1);
	aux = num;
	aux_num = num;
	while (aux > 9)
	{
		aux = 0;
		while (aux_num > 0)
		{
			aux += (aux_num % 10) * (aux_num % 10);
			aux_num /= 10;
		}
		aux_num = aux;
	}
	return (aux_num);
}

int	main(void)
{
	int	arr[100];
	int	tmp;
	int	i;
	int	n;

	scanf("%d", &tmp);
	n = 0;
	while (tmp >= 1 && tmp <= 10000)
	{
		arr[n++] = tmp;
		scanf("%d", &tmp);
	}
	i = -1;
	while (++i < n)
	{
		printf("%d ", arr[i]);
		if (transform(arr[i]) == 1)
			printf("FELIZ");
		else
			printf("TRISTE");
		printf("\n");
	}
	return (0);
}
