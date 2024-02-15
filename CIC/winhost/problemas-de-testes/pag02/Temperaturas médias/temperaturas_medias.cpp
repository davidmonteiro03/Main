/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temperaturas_medias.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:44:24 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/15 11:05:00 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

void average(std::vector<int>& vector)
{
	double sum = 0;
	for (size_t i = 0; i < vector.size(); i++)
		sum += static_cast<double>(vector[i]);
	printf("%.2lf\n", sum / vector.size());
}

void min_max(std::vector<int>& vector)
{
	std::vector<int>::const_iterator max, min;
	max = std::max_element(vector.begin(), vector.end());
	min = std::min_element(vector.begin(), vector.end());
	std::cout << *max << std::endl << *min << std::endl;
}

void hot_day(std::vector<int>& vector)
{
	std::vector<int>::iterator it = vector.begin();
	std::vector<int>::const_iterator max;
	int i = 1;
	max = std::max_element(vector.begin(), vector.end());
	while (it != max)
	{
		i++;
		it++;
	}
	std::cout << i << std::endl;
}

void _streak(std::vector<int>& vector)
{
	std::vector<int>::const_iterator max;
	std::vector<int> streaks;
	size_t tmp = 1;
	for (size_t i = 0; i < vector.size() - 1; i++)
	{
		if (vector[i] == vector[i + 1])
			tmp++;
		else
		{
			streaks.push_back(tmp);
			tmp = 1;
		}
	}
	streaks.push_back(tmp);
	max = std::max_element(streaks.begin(), streaks.end());
	std::cout << *max << std::endl;
}

int main(void)
{
	std::vector<int> temperatures;
	int n;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		std::cin >> tmp;
		temperatures.push_back(tmp);
	}
	if (temperatures.size() > 0)
	{
		average(temperatures);
		min_max(temperatures);
		hot_day(temperatures);
		_streak(temperatures);
	}
	return (0);
}
