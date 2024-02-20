/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2006-F5.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:13:36 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/20 11:13:37 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

void display_vector(std::vector<int> vector)
{
	std::vector<int>::iterator it = vector.begin();
	while (it != vector.end())
		std::cout << *it++ << std::endl;
}

int main(void)
{
	std::vector<int>::const_iterator max;
	std::vector<int> result;
	int input_tmp;
	while (1)
	{
		std::cin >> input_tmp;
		if (input_tmp == 0)
			break ;
		if (result.size() == 0)
		{
			result.push_back(input_tmp);
			continue ;
		}
		max = std::max_element(result.begin(), result.end());
		result.insert(max, input_tmp);
	}
	display_vector(result);
	return (0);
}
