/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_pratico_D.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:38:52 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/20 18:04:03 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_range
{
	int	range_1;
	int	range_2;
	int	range_3;
	int	range_4;
}t_range;

typedef struct s_check
{
	int		pos;
	int		neg;
}t_check;

typedef struct s_data
{
	int		num;
	int		*grades;
	t_check	*check;
	t_range	*range;
}t_data;

int	*init_grades(int n)
{
	int	*grades;
	int	i;

	grades = (int *)malloc(sizeof(int) * n);
	i = -1;
	while (++i < n)
		scanf("%d", &grades[i]);
	return (grades);
}

t_check	*check(t_data **data)
{
	int		i;

	(*data)->check = (t_check *)malloc(sizeof(t_check));
	(*data)->check->pos = 0;
	(*data)->check->neg = 0;
	i = -1;
	while (++i < (*data)->num)
	{
		if ((*data)->grades[i] >= 10)
			(*data)->check->pos++;
		else
			(*data)->check->neg++;
	}
	return ((*data)->check);
}

t_range	*range(t_data **data)
{
	int		i;

	(*data)->range = (t_range *)malloc(sizeof(t_range));
	(*data)->range->range_1 = 0;
	(*data)->range->range_2 = 0;
	(*data)->range->range_3 = 0;
	(*data)->range->range_4 = 0;
	i = -1;
	while (++i < (*data)->num)
	{
		if ((*data)->grades[i] >= 0 && (*data)->grades[i] <= 5)
			(*data)->range->range_1++;
		else if ((*data)->grades[i] >= 6 && (*data)->grades[i] <= 10)
			(*data)->range->range_2++;
		else if ((*data)->grades[i] >= 11 && (*data)->grades[i] <= 14)
			(*data)->range->range_3++;
		else if ((*data)->grades[i] >= 15 && (*data)->grades[i] <= 20)
			(*data)->range->range_4++;
	}
	return ((*data)->range);
}

void	analyse(t_data **data)
{
	int	tmp;
	int	i;

	scanf("%d", &(*data)->num);
	(*data)->grades = init_grades((*data)->num);
	(*data)->check = check(data);
	(*data)->range = range(data);
	scanf("%d", &tmp);
	printf("POSITIVAS: %d\n", (*data)->check->pos);
	printf("NEGATIVAS: %d\n", (*data)->check->neg);
	i = -1;
	while (++i < (*data)->num)
	{
		if (abs((*data)->grades[i] - tmp) <= 2)
			printf("A diferenca da nota do aluno %d para %d \
nao e superior a 2\n", \
				i + 1, \
				tmp \
			);
	}
	printf("[0,5]-%d%%\n", (*data)->range->range_1 * 100 / (*data)->num);
	printf("[6,10]-%d%%\n", (*data)->range->range_2 * 100 / (*data)->num);
	printf("[11,14]-%d%%\n", (*data)->range->range_3 * 100 / (*data)->num);
	printf("[15,20]-%d%%\n", (*data)->range->range_4 * 100 / (*data)->num);
}

int	main(void)
{
	t_data	*data;

	data = (t_data *)malloc(sizeof(t_data));
	analyse(&data);
	free(data->grades);
	free(data->check);
	free(data->range);
	free(data);
	return (0);
}
