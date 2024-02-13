/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_pratico_H.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:05:14 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/13 17:33:07 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>

int get_perc(int num, size_t size)
{
	double tmp_num = static_cast<double>(num);
	double tmp_size = static_cast<double>(size);
	double result = tmp_num / tmp_size * 100;
	return (static_cast<int>(result));
}

void perc(std::vector<int>& grades)
{
	int pos = 0, neg = 0;
	int pos_perc, neg_perc;
	for(size_t i = 0; i < grades.size(); i++)
	{
		if (grades[i] >= 10)
			pos++;
		else
			neg++;
	}
	pos_perc = get_perc(pos, grades.size());
	neg_perc = get_perc(neg, grades.size());
	std::cout << pos_perc << "%" << std::endl;
	std::cout << neg_perc << "%" << std::endl;
}

void min_max(std::vector<int>& grades)
{
	std::vector<int>::const_iterator max, min;
	max = std::max_element(grades.begin(), grades.end());
	min = std::min_element(grades.begin(), grades.end());
	std::cout << *max << std::endl << *min << std::endl;
}

void worst(std::vector<int>& grades)
{
	std::cout << "PIORES NOTAS:" << std::endl;
	std::sort(grades.begin(), grades.end());
	for(size_t i = 0; i < 3 && i < grades.size(); i++)
		std::cout << grades[i] << std::endl;
}

int main(void)
{
	std::vector<int> grades;
	int n, i;

	std::cin >> n;
	for (i = 0; i < n; i++)
	{
		int tmp;
		std::cin >> tmp;
		grades.push_back(tmp);
	}
	if (grades.size() > 0)
	{
		min_max(grades);
		perc(grades);
		worst(grades);
	}
	return (0);
}
