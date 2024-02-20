/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jogo_de_futebol.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:09:13 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/20 11:09:43 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include <stdio.h>

std::string sztoba(size_t num, size_t len)
{
	bool bit;
	std::string result;
	while (len > 0)
	{
		bit = (num >> --len) & 1;
		result.append(1, bit + 65);
	}
	return (result);
}

bool important(std::string str, int a, int b)
{
	int sum_a = 0, sum_b = 0;
	size_t i;
	for (i = 0; i < str.size(); i++)
	{
		if (str[i] == 'A')
			sum_a++;
		if (str[i] == 'B')
			sum_b++;
	}
	return (sum_a == a && sum_b == b);
}

int main(void)
{
	size_t limit, i;
	int a, b;
	std::string tmp;
	std::cin >> a >> b;
	limit = pow(2, a + b);
	if (limit >= 2)
	{
		for (i = 0; i < limit; i++)
		{
			tmp = sztoba(i, a + b);
			if (important(tmp, a, b))
				std::cout << tmp << std::endl;
			tmp.clear();
		}
	}
	return (0);
}
