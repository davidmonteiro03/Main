/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maior_segundo_maior_e_terceiro_maior.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:38:46 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 19:41:40 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	list[100];
	int	tmp;
	int	i, j;

	i = 0;
	while (i < 3)
	{
		scanf("%d", &list[i]);
		i++;
	}
	i = 0;
	while (i < 3)
	{
		j = i + 1;
		while (j < 3)
		{
			if (list[i] > list[j])
			{
				tmp = list[i];
				list[i] = list[j];
				list[j] = tmp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 3)
	{
		printf("%d\n", list[i]);
		i++;
	}
	return (0);
}
