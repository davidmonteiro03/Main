/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idades.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:33:35 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/15 18:45:27 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>
#include <vector>

void sort_result(std::vector<std::pair<std::string, int> >& result)
{
	size_t i, j;
	for (i = 0; i < result.size(); i++)
		for (j = i + 1; j < result.size(); j++)
			if (result[i].second > result[j].second)
				std::swap(result[i], result[j]);
}

void analyse(std::vector<std::pair<std::string, int> > data)
{
	std::vector<std::pair<std::string, int> > result;
	size_t i;
	double sum = 0, avg;
	for (i = 0; i < data.size(); i++)
		sum += data[i].second;
	avg = sum / static_cast<double>(data.size());
	printf("%.lf\n", avg);
	for (i = 0; i < data.size(); i++)
		if (data[i].second >= avg)
			result.push_back(data[i]);
	sort_result(result);
	for (i = 0; i < result.size(); i++)
		std::cout << result[i].first << std::endl;
}

int main(void)
{
	std::vector<std::pair<std::string, int> > data;
	std::string tmp_str;
	int tmp_int;
	size_t i;

	for (i = 0; i < 5; i++)
	{
		std::cin >> tmp_str >> tmp_int;
		data.push_back(std::pair<std::string, int>(tmp_str, tmp_int));
	}
	analyse(data);
	return (0);
}
