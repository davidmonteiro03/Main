/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deslocar_elementos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:36:23 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 16:11:48 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	list[100];

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
		if (i < n - 1)
			list[n - i - 1] = list[n - i - 2];
		i++;
	}
	i = 0;
	while (i < n)
		printf("%d\n", list[i++]);
	return (0);
}
