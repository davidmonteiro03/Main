/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabuleiro.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:48 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/19 17:17:05 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int main(void)
{
	char tmp_c;
	std::vector<std::vector<char> > map;
	size_t rows, cols, i, j;
	std::cin >> rows >> cols;
	for(i = 0; i < rows; i++)
		map.push_back(std::vector<char>());
	for(i = 0; i < map.size(); i++)
	{
		for (j = 0; j < cols; j++)
		{
			std::cin >> tmp_c;
			map[i].push_back(tmp_c);
		}
	}
	return (0);
}
