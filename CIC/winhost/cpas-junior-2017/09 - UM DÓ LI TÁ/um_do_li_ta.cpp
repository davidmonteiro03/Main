/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   um_do_li_ta.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:21:49 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/13 16:21:50 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

void ultimate(std::vector<std::string>& names, int k, \
	std::vector<std::string>::iterator it)
{
	if (names.size() == 0)
		return ;
	std::vector<std::string>::iterator tmp = it;
	for (int i = 0; i < k - 1; i++)
	{
		tmp++;
		if (tmp == names.end())
			tmp = names.begin();
	}
	std::cout << *tmp << std::endl;
	tmp = names.erase(tmp);
	if (tmp == names.end())
		tmp = names.begin();
	it = tmp;
	ultimate(names, k, it);
}

int main(void)
{
	std::vector<std::string> names;
	int	num, k, i;

	std::cin >> num;
	for (i = 0; i < num; i++)
	{
		std::string tmp;
		std::cin >> tmp;
		names.push_back(tmp);
	}
	std::cin >> k;
	ultimate(names, k, names.begin());
	return (0);
}
