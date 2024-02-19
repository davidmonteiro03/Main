/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpas2006_t3.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 08:57:19 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/19 09:11:44 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int main(void)
{
	std::vector<std::pair<int, int> > input_vector;
	std::vector<int> results;
	size_t input_n, i;
	int sum;
	bool flag;

	std::cin >> input_n;
	for(i = 0; i < input_n; i++)
		input_vector.push_back(std::pair<int, int>());
	for(i = 0; i < input_n; i++)
		std::cin >> input_vector[i].first;
	for(i = 0; i < input_n; i++)
		std::cin >> input_vector[i].second;
	flag = false;
	for(i = 0; i < input_vector.size(); i++)
	{
		sum = input_vector[input_vector.size() - i - 1].first + \
			input_vector[input_vector.size() - i - 1].second + flag;
		flag = false;
		if (i == input_vector.size() - 1)
			results.push_back(sum);
		else
			results.push_back(sum % 10);
		if (sum >= 10)
			flag = true;
	}
	for(i = 0; i < results.size(); i++)
	{
		if (i > 0)
			std::cout << " ";
		std::cout << results[results.size() - i - 1];
	}
	std::cout << std::endl;
	return (0);
}
