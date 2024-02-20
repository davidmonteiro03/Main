/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2006-F7.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:50:57 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/20 14:48:34 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string::const_iterator it_a, it_b;
	std::string a, b;
	bool flag = true;
	std::cin >> a >> b;
	for (it_b = b.begin(); it_b != b.end(); it_b++)
	{
		for (it_a = a.begin(); it_a != a.end(); it_a++)
			if (*it_a == *it_b)
				break ;
		if (it_a != a.end())
			a.erase(it_a);
		else
			flag = false;
	}
	if (flag)
		std::cout << "SIM" << std::endl;
	else
		std::cout << "NAO" << std::endl;
	return (0);
}
