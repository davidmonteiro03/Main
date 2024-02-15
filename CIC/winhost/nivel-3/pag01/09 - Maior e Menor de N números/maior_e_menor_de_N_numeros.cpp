/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maior_e_menor_de_N_numeros.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:10:55 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/15 13:14:15 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	std::vector<int> input_vector;
	std::vector<int>::const_iterator min, max;
	size_t input_n, i;
	int tmp;

	std::cin >> input_n;
	for (size_t i = 0; i < input_n; i++)
	{
		std::cin >> tmp;
		input_vector.push_back(tmp);
	}
	min = std::min_element(input_vector.begin(), input_vector.end());
	max = std::max_element(input_vector.begin(), input_vector.end());
	std::cout << *min << std::endl << *max << std::endl;
	return (0);
}
