/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cone.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:36:21 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/19 14:39:58 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

int get_length(int num, int n)
{
	if (num < 0)
		num = -num;
	if (num < 10)
		return (n);
	return (get_length(num / 10, n + 1));
}

int main(void)
{
	size_t i, j, num;
	int length, tmp;
	std::cin >> num;
	length = get_length(num / 2 + num % 2, 1);
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			tmp = std::min(std::min(i, j), std::min(num - i - 1, num - j - 1));
			tmp = num - tmp - (num / 2 + num % 2) + num % 2;
			if (j > 0)
				std::cout << " ";
			printf("%*d", length, tmp);
		}
		std::cout << std::endl;
	}
	return (0);
}
