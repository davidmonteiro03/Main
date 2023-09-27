/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2005-10.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:15:31 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 19:23:58 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	invert(int arr[100], int d)
{
	int	tmp;
	int	i;

	i = -1;
	while (++i < d / 2)
	{
		tmp = arr[i];
		arr[i] = arr[d - i - 1];
		arr[d - i - 1] = tmp;
	}
}

void	atr_binary(int num)
{
	int	arr[100];
	int	d;
	int	i;

	arr[0] = num % 2;
	d = 1;
	num /= 2;
	while (num > 0)
	{
		arr[d++] = num % 2;
		num /= 2;
	}
	invert(arr, d);
	i = -1;
	while (++i < d)
		printf("%d", arr[i]);
	printf("\n");
}

int	main(void)
{
	int	num;

	scanf("%d", &num);
	if (num >= 0 && num <= 255)
		atr_binary(num);
	return (0);
}
