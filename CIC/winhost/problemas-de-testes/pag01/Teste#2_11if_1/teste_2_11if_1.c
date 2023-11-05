/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_2_11if_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:41:13 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/05 20:47:25 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	a[100];
	int	b[100];
	int	stt_a[100];
	int	stt_b[100];

	scanf("%d", &n);
	i = -1;
	while (++i < n)
	{
		scanf("%d", &a[i]);
		stt_a[i] = 1;
	}
	i = -1;
	while (++i < n)
	{
		scanf("%d", &b[i]);
		stt_b[i] = 1;
	}
	i = -1;
	while (++i < n)
	{
		if (a[i] < b[i])
			stt_a[i] = 0;
		else if (a[i] > b[i])
			stt_b[i] = 0;
	}
	i = -1;
	while (++i < n)
		if (stt_a[i] == 1)
			printf("%d\n", a[i]);
	i = -1;
	while (++i < n)
		if (stt_b[i] == 1)
			printf("%d\n", b[i]);
	return (0);
}
