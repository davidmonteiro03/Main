/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contas.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:57:14 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 20:08:06 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_list(int list[100], int c)
{
	int	tmp;
	int	i;
	int	j;

	i = -1;
	while (++i < c)
	{
		j = i;
		while (++j < c)
		{
			if (list[i] > list[j])
			{
				tmp = list[i];
				list[i] = list[j];
				list[j] = tmp;
			}
		}
	}
}

void	oco_list(int list[100], int oco[100], int c)
{
	int	i;
	int	t;
	int	j;

	i = -1;
	while (++i < c)
	{
		t = 1;
		j = -1;
		while (++j < c)
		{
			if (i != j && list[i] == list[j])
				t++;
		}
		oco[i] = t;
	}
}

int	main(void)
{
	int	tmp;
	int	list[100];
	int	oco[100];
	int	c;
	int	i;

	scanf("%d", &tmp);
	c = 0;
	while (tmp != 0)
	{
		list[c++] = tmp;
		scanf("%d", &tmp);
	}
	sort_list(list, c);
	oco_list(list, oco, c);
	i = -1;
	while (++i < c)
	{
		if (i == 0)
		{
			printf("%d", list[i]);
			if (oco[i] > 1)
				printf(" %d", oco[i]);
			printf("\n");
		}
		else
		{
			if (list[i - 1] != list[i])
			{
				printf("%d", list[i]);
				if (oco[i] > 1)
					printf(" %d", oco[i]);
				printf("\n");
			}
		}
	}
	return (0);
}
