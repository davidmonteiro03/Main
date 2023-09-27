/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elementos_intercalados.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:53:26 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 10:57:13 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i, k;
	int	a[100], b[100], res[200];

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	i = 0;
	while (i < n)
	{
		scanf("%d", &b[i]);
		i++;
	}
	i = k = 0;
	while (i < n)
	{
		res[k] = a[i];
		k++;
		res[k] = b[i];
		k++;
		i++;
	}
	i = 0;
	while (i < k)
	{
		printf("%d\n", res[i]);
		i++;
	}
	return (0);
}
