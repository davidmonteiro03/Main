/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transformacao_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:07:14 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 11:09:52 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	list[100], res[100];

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &list[i]);
		i++;
	}
	i = 0;
	while (i < n)
	{
		res[i] = list[i] * list[i];
		i++;
	}
	i = 0;
	while (i < n)
		printf("%d\n", res[i++]);
	return (0);
}
