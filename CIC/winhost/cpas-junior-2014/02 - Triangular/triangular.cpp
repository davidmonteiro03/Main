/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangular.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:15:44 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/19 11:22:37 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int result(int num)
{
	return (num * (num + 1) * (num + 2));
}

void check_num(int num)
{
	int tmp, i;
	for(i = 0; i < num - 2; i++)
	{
		tmp = result(i + 1);
		if (tmp == num)
		{
			std::cout << "E TRIANGULAR" << std::endl;
			return ;
		}
	}
	std::cout << "NAO E TRIANGULAR" << std::endl;
}

int main(void)
{
	int num;
	std::cin >> num;
	if (num < 4)
		std::cout << "NAO E TRIANGULAR" << std::endl;
	else
		check_num(num);
	return (0);
}
