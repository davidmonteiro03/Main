/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numeros_entrelacados.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:36:11 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 15:52:33 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	atr_dig(int dig[100], int num)
{
	int	aux;
	int	d;

	aux = num;
	d = 1;
	dig[0] = num % 10;
	num /= 10;
	while (num > 0)
	{
		dig[d] = num % 10;
		num /= 10;
		d++;
	}
	num = aux;
	return (d);
}

void	invert(int arr[100], int n)
{
	int	i;
	int	tmp;

	i = -1;
	while (++i < n / 2)
	{
		tmp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = tmp;
	}
}

int	main(void)
{
	int	tmp;
	int	dig[100][100];
	int	digitos[100];
	int	list[100];
	int	i;
	int	t;
	int	temp;
	int	j;
	int	n;

	scanf("%d", &tmp);
	n = 0;
	while (tmp != 0)
	{
		list[n++] = tmp;
		scanf("%d", &tmp);
	}
	i = -1;
	while (++i < n)
	{
		t = atr_dig(dig[i], list[i]);
		invert(dig[i], t);
		j = -1;
		while (++j < t)
		{
			if (j % 2 == 0 && j < t - 1)
			{
				temp = dig[i][j];
				dig[i][j] = dig[i][j + 1];
				dig[i][j + 1] = temp;
			}
		}
		j = -1;
		while (++j < t)
			printf("%d", dig[i][j]);
		printf("\n");
	}
	return (0);
}
