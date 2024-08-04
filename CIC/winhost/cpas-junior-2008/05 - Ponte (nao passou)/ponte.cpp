/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ponte.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 08:16:09 by dcaetano          #+#    #+#             */
/*   Updated: 2024/08/04 08:28:24 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	int size, pos, step;
	std::cin >> size;
	pos = size / 2;
	std::string bridge = "", backup;
	for (int i = 0; i < size; ++i)
	{
		if (i == pos)
			bridge.append(1, '*');
		else
			bridge.append(1, '-');
	}
	backup = bridge;
	std::cin >> step;
	while (step != 0)
	{
		bridge[pos] = '-';
		pos += step;
		if (pos < 0 || pos > static_cast<int>(bridge.size()) - 1)
			break ;
		bridge[pos] = '*';
		std::cin >> step;
	}
	if (size % 2 != 0)
	{
		std::cout << "INICIAL:" << std::endl;
		std::cout << backup << std::endl;
		std::cout << "FINAL:" << std::endl;
		if (pos < 0 || pos > static_cast<int>(bridge.size()) - 1)
			std::cout << "FORA DA PONTE" << std::endl;
		else
			std::cout << bridge << std::endl;
	}
	return 0;
}
