/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ordenacao_com_metodo.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 23:04:29 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/14 23:04:30 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	crescente(int arr[3])
{
	int	tmp, i, j;

	i = 0;
	while (i < 3)
	{
		j = i + 1;
		while (j < 3)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	decrescente(int arr[3])
{
	int	tmp, i, j;

	i = 0;
	while (i < 3)
	{
		j = i + 1;
		while (j < 3)
		{
			if (arr[i] < arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int		i, arr[3], met;

	scanf("%d", &arr[0]);
	scanf("%d", &arr[1]);
	scanf("%d", &arr[2]);
	scanf("%d", &met);
	if (met != 1 && met != 2)
		return (0);
	if (met == 1)
		crescente(arr);
	else if (met == 2)
		decrescente(arr);
	i = 0;
	while (i < 3)
		printf("%d\n", arr[i++]);
	return (0);
}
