/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal_para_binario.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:12:55 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 15:16:22 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	i, k;
	int	num;
	int	list[100];

	scanf("%d", &num);
	k = 0;
	if (num == 0)
		printf("0");
	while (num > 0)
	{
		list[k] = num % 2;
		num /= 2;
		k++;
	}
	i = 0;
	while (i < k)
	{
		printf("%d", list[k - i - 1]);
		i++;
	}
	return (0);
}
