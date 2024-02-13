/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temperaturas_medias.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:44:24 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/13 19:36:12 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

void average(std::vector<int>& vector)
{
	double sum = 0;
	for (size_t i = 0; i < vector.size(); i++)
		sum += static_cast<double>(vector[i]);
	std::cout << std::fixed << std::setprecision(2);
	std::cout << sum / vector.size() << std::endl;
	std::cout.unsetf(std::ios::fixed);
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
	}
	return (0);
}
