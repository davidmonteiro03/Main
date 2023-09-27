/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:45:24 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/05 09:13:15 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = 1;
	max = 11;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d", tab[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
}*/
