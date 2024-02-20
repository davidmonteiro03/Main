/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2006-F8.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:58:19 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/20 15:58:20 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

std::vector<std::vector<int>> split_vector(const std::vector<int>& vector)
{
	std::vector<std::vector<int>> result;
	for (size_t i = 0; i < vector.size(); i++)
	{
		for (size_t j = i; j < vector.size(); j++)
		{
			std::vector<int> segment(vector.begin() + i, vector.begin() + j + 1);
			result.push_back(segment);
		}
	}
	return (result);
}

int main(void)
{
	std::vector<std::pair<std::vector<int>, int> > data;
	std::vector<int> vector;
	std::vector<std::vector<int>> segments;
	size_t input_n, i, j, pos;
	int tmp, sum, max;
	std::cin >> input_n;
	if (input_n > 0)
	{
		for (i = 0; i < input_n; i++)
		{
			std::cin >> tmp;
			vector.push_back(tmp);
		}
		segments = split_vector(vector);
		for (i = 0; i < segments.size(); i++)
			data.push_back(std::pair<std::vector<int>, int>(segments[i], 0));
		max = data[0].second;
		for (i = 0; i < data.size(); i++)
		{
			sum = 0;
			for (j = 0; j < data[i].first.size(); j++)
				sum += data[i].first[j];
			data[i].second = sum;
			if (sum > max)
			{
				max = sum;
				pos = i;
			}
		}
		for (i = 0; i < data[pos].first.size(); i++)
		{
			if (i > 0)
				std::cout << " ";
			std::cout << data[pos].first[i];
		}
		std::cout << std::endl << data[pos].second << std::endl;
	}
	return 0;
}
