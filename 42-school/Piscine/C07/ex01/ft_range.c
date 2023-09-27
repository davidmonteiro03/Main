/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:21:34 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/05 13:01:36 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/*int	main(int ac, char **av)
{
	int	*array;
	int	i;
	int	min;
	int	max;

	if (ac != 3)
		printf("\n");
	else
	{
		min = atoi(av[1]);
		max = atoi(av[2]);
		array = ft_range(min, max);
		if (array == NULL)
			printf("Erro! O Minimo deve ser menor que o Maximo!\n");
		else
		{
			i = 0;
			while (min < max)
			{
				printf("%d\n", array[i++]);
				min++;
			}
		}
	}
	return (0);
}*/
