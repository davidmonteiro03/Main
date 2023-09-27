/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substitua_vetor.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:17:14 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 20:19:48 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	list[100];
	int	i;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &list[i]);
		if (list[i] < 0)
			list[i] = 0;
		else
			list[i] = 1;
		i++;
	}
	i = 0;
	while (i < n)
	{
		printf("%d\n", list[i]);
		i++;
	}
	return (0);
}
