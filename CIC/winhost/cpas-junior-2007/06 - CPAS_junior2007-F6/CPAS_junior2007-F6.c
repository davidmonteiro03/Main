/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS_junior2007-F6.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:50:21 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/14 20:50:24 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	i, j, n, list[100];

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
		j = 0;
		while (j < list[i])
		{
			printf("X");
			j++;
		}
		printf(" (%d)\n", list[i]);
		i++;
	}
	return (0);
}
