/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numeros.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:53:43 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/15 14:20:44 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <vector>

int get_sum(std::string str)
{
	size_t i = 0;
	int result = 0;
	while (str[i] && isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && isdigit(str[i]))
		result += str[i++] - '0';
	return (result);
}

void sort_string(std::string& str)
{
	for (size_t i = 0; i < str.size(); i++)
		for (size_t j = i + 1; j < str.size(); j++)
			if (str[i] > str[j])
				std::swap(str[i], str[j]);
}

void execute(std::vector<std::string> vector)
{
	std::vector<int> sum;
	std::vector<int>::const_iterator max;
	std::vector<std::string> result;
	size_t i;

	for (i = 0; i < vector.size(); i++)
		sum.push_back(get_sum(vector[i]));
	max = std::max_element(sum.begin(), sum.end());
	for (i = 0; i < sum.size(); i++)
	{
		if (sum[i] == *max)
		{
			result.push_back(vector[i]);
			sort_string(result.back());
		}
	}
	for (i = 0; i < result.size(); i++)
		std::cout << atoi(result[i].c_str()) << std::endl;
}

int main(void)
{
	size_t input_n, i;
	std::string input_tmp;
	std::vector<std::string> vector;

	std::cin >> input_n;
	for(i = 0; i < input_n; i++)
	{
		std::cin >> input_tmp;
		vector.push_back(input_tmp);
	}
	if (vector.size() > 0)
		execute(vector);
	return (0);
}
