/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpas2006_t1.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:49:40 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/15 19:03:59 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int abs_int(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

int mdc(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return (a);
}

void analyse_fraction(std::pair<int, int> fraction)
{
	int divisor;
	if (fraction.second == 0)
		return ;
	if (fraction.first == 0)
	{
		std::cout << 0 << std::endl;
		return ;
	}
	if (fraction.first * fraction.second < 0)
		std::cout << "-";
	fraction.first = abs_int(fraction.first);
	fraction.second = abs_int(fraction.second);
	divisor = mdc(fraction.first, fraction.second);
	fraction.first /= divisor;
	fraction.second /= divisor;
	std::cout << fraction.first;
	if (fraction.second != 1)
		std::cout << "/" << fraction.second;
	std::cout << std::endl;
}

int main(void)
{
	int tmp_num, tmp_den;
	std::vector<std::pair<int, int> > fractions;
	size_t input_n, i;

	std::cin >> input_n;
	for (i = 0; i < input_n; i++)
	{
		std::cin >> tmp_num >> tmp_den;
		fractions.push_back(std::pair<int, int>(tmp_num, tmp_den));
	}
	for (i = 0; i < input_n; i++)
		analyse_fraction(fractions[i]);
	return (0);
}
