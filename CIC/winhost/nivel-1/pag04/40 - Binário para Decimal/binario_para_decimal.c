/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binario_para_decimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:07:02 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 15:11:49 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	main(void)
{
	int	i;
	int	n;
	int	num;
	int	list;

	scanf("%d", &n);
	i = 0;
	num = 0;
	while (i < n)
	{
		scanf("%d", &list);
		num += list * pow(2, n - i - 1);
		i++;
	}
	printf("%d", num);
	return (0);
}
