/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS_junior2007-F1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:56:30 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/14 17:56:32 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	invert(int dig[100], int i)
{
	int k, tmp;

	k = 0;
	while (k < i / 2)
	{
		tmp = dig[k];
		dig[k] = dig[i - k - 1];
		dig[i - k - 1] = tmp;
		k++;
	}
}

int	main(void)
{
	int	num, i, k, dig[100];

	scanf("%d", &num);
	i = 0;
	while (num > 0)
	{
		dig[i] = num % 10;
		num /= 10;
		i++;
	}
	invert(dig, i);
	k = 0;
	while (k < i)
		printf("%d\n", dig[k++]);
	return (0);
}
