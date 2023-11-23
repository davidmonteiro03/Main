/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_pratico_E.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:17:16 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/23 18:13:31 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_res_1
{
	int		min;
	int		max;
}t_res_1;

typedef struct s_res_2
{
	int		dif;
	double	med;
}t_res_2;

typedef struct s_res_3
{
	int		min_pos;
	int		max_neg;
}t_res_3;

typedef struct s_results
{
	t_res_1	*res_1;
	t_res_2	*res_2;
	t_res_3	*res_3;
}t_results;

typedef struct s_input
{
	int		num;
	int		*array;
}t_input;

typedef struct s_data
{
	t_input		*input;
	t_results	*results;
}t_data;

t_input	*get_input(void)
{
	t_input	*input;
	int		i;

	input = (t_input *)malloc(sizeof(t_input));
	scanf("%d", &input->num);
	input->array = (int *)malloc(sizeof(int) * input->num);
	i = -1;
	while (++i < input->num)
		scanf("%d", &input->array[i]);
	return (input);
}

double	get_average(t_data *data)
{
	int		i;
	int		tmp;
	double	med;
	double	sum;

	i = -1;
	sum = 0;
	tmp = 0;
	while (++i < data->input->num)
	{
		if (data->input->array[i] != data->results->res_1->max && \
			data->input->array[i] != data->results->res_1->min)
		{
			sum += data->input->array[i];
			tmp++;
		}
	}
	med = sum / tmp;
	return (med);
}

int	get_value(t_data *data, int type)
{
	int	tmp_max;
	int	tmp_min;
	int	i;

	i = -1;
	if (!type)
	{
		tmp_min = data->results->res_1->max;
		while (++i < data->input->num)
			if (data->input->array[i] < tmp_min && \
				data->input->array[i] >= 10)
				tmp_min = data->input->array[i];
		return (tmp_min);
	}
	tmp_max = data->results->res_1->min;
	while (++i < data->input->num)
		if (data->input->array[i] > tmp_max && \
			data->input->array[i] < 10)
			tmp_max = data->input->array[i];
	return (tmp_max);
}

t_results	*get_results(t_data *data)
{
	t_results	*results;
	int			i;

	results = (t_results *)malloc(sizeof(t_results));
	results->res_1 = (t_res_1 *)malloc(sizeof(t_res_1));
	results->res_2 = (t_res_2 *)malloc(sizeof(t_res_2));
	results->res_3 = (t_res_3 *)malloc(sizeof(t_res_3));
	results->res_1->min = data->input->array[0];
	results->res_1->max = data->input->array[0];
	i = -1;
	while (++i < data->input->num)
	{
		if (data->input->array[i] < results->res_1->min)
			results->res_1->min = data->input->array[i];
		if (data->input->array[i] > results->res_1->max)
			results->res_1->max = data->input->array[i];
	}
	results->res_2->dif = results->res_1->max - results->res_1->min;
	return (results);
}

int	main(void)
{
	t_data	*data;

	data = (t_data *)malloc(sizeof(t_data));
	data->input = get_input();
	data->results = get_results(data);
	data->results->res_2->med = get_average(data);
	data->results->res_3->min_pos = get_value(data, 0);
	data->results->res_3->max_neg = get_value(data, 1);
	printf("MAIOR: %d\n", data->results->res_1->max);
	printf("MENOR: %d\n", data->results->res_1->min);
	printf("DIFERENCA: %d\n", data->results->res_2->dif);
	printf("MEDIA: %.2lf\n", data->results->res_2->med);
	printf("MENOR POSITIVA: %d\n", data->results->res_3->min_pos);
	printf("MAIOR NEGATIVA: %d\n", data->results->res_3->max_neg);
	free(data->input->array);
	free(data->input);
	free(data->results->res_1);
	free(data->results->res_2);
	free(data->results->res_3);
	free(data->results);
	free(data);
	return (0);
}
