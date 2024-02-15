/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   covid_19.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:25:10 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/15 14:33:50 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

void print_flag(int value, int& pos, int& neg)
{
	if (value > 0)
	{
		std::cout << "POSITIVO" << std::endl;
		pos++;
	}
	else
	{
		std::cout << "NEGATIVO" << std::endl;
		neg++;
	}
}

void print_perc(int value, size_t size)
{
	double tmp_value = static_cast<double>(value);
	double tmp_size = static_cast<double>(size);
	printf("%.2lf%%", tmp_value / tmp_size * 100);
}

int main(void)
{
	int tmp, pos = 0, neg = 0;
	std::vector<int> vector;
	size_t input_n, i;

	std::cin >> input_n;
	for (i = 0; i < input_n; i++)
	{
		std::cin >> tmp;
		vector.push_back(tmp);
	}
	for (i = 0; i < input_n; i++)
		print_flag(vector[i], pos, neg);
	std::cout << pos << " POSITIVOS, percentagem: ";print_perc(pos, vector.size()); std::cout << std::endl;
	std::cout << neg << " NEGATIVOS, percentagem: "; print_perc(neg, vector.size()); std::cout << std::endl;
	return (0);
}
