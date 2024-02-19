/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova_dos_nove.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:16:54 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/19 09:44:49 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

typedef struct s_data
{
	std::pair<int, int> args;
	int result, sum;
}t_data;

size_t num_length(int num)
{
	size_t result;
	result = 0;
	if (num <= 0)
		result = 1;
	while (num > 0)
	{
		result++;
		num /= 10;
	}
	return (result);
}

int special_sum(int num)
{
	if (num_length(num) == 1)
		return (num == 9 ? 0 : num);
	int result = 0;
	while (num > 0)
	{
		if (num % 10 != 9)
			result += num % 10;
		num /= 10;
	}
	return (special_sum(result));
}

void fill_data(t_data** data)
{
	int input_arg1, input_arg2, input_result;
	std::cin >> input_arg1 >> input_arg2 >> input_result;
	(*data)->args.first = special_sum(input_arg1);
	(*data)->args.second = special_sum(input_arg2);
	(*data)->result = special_sum(input_result);
	(*data)->sum = special_sum((*data)->args.first + (*data)->args.second);
}

void display_data(t_data* data)
{
	std::cout << "PARCELA 1=" << data->args.first << std::endl;
	std::cout << "PARCELA 2=" << data->args.second << std::endl;
	std::cout << "RESULTADO=" << data->result << std::endl;
	std::cout << "PARCELA 1+PARCELA 2=" << data->sum << std::endl;
	if (data->result != data->sum)
		std::cout << "IN";
	std::cout << "CORRECTA" << std::endl;
}

int main(void)
{
	t_data* data = new t_data;
	fill_data(&data);
	display_data(data);
	delete data;
	return (0);
}
