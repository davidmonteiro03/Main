/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matriz_espelho_invertido.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:00:05 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/13 17:01:25 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

bool check(const std::vector<std::vector<int>>& mat)
{
	int num = mat.size();

	if (num == 0 || mat[0].size() != num)
		return (false);
	for (int i = 0; i < num / 2; ++i)
		for (int j = 0; j < num; ++j)
			if (mat[i][j] != mat[num - 1 - i][num - 1 - j])
				return (false);
	return (true);
}

int main(void)
{
	int num;

	std::cin >> num;
	std::vector<std::vector<int>> mat(num, std::vector<int>(num));
	for (int i = 0; i < num; ++i)
		for (int j = 0; j < num; ++j)
			std::cin >> mat[i][j];
	if (check(mat))
		std::cout << "SIM" << std::endl;
	else
		std::cout << "NAO" << std::endl;
	return (0);
}
