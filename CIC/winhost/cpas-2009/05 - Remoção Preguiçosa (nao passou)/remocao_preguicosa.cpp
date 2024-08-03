/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remocao_preguicosa.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:30:09 by dcaetano          #+#    #+#             */
/*   Updated: 2024/08/03 16:44:10 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

static void remove_elem(std::vector<int *> &list)
{
	int elem, i;
	std::cin >> elem;
	for (i = 0; i < static_cast<int>(list.size()); ++i)
	{
		if (list[i] != NULL && *list[i] == elem)
		{
			delete list[i];
			list[i] = NULL;
		}
	}
}

static void append_elem(std::vector<int *> &list)
{
	int elem, i;
	std::cin >> elem;
	for (i = 0; i < static_cast<int>(list.size()); ++i)
	{
		if (list[i] == NULL)
		{
			list[i] = new int(elem);
			return ;
		}
	}
	list.push_back(new int(elem));
}

int main(void)
{
	int n, i;
	std::vector<int *> list;
	std::cin >> n;
	for (i = 0; i < n; i++)
	{
		int num;
		std::cin >> num;
		list.push_back(new int(num));
	}
	std::string op;
	std::cin >> op;
	while (op != "*")
	{
		if (op == "-")
			remove_elem(list);
		else if (op == "+")
			append_elem(list);
		std::cin >> op;
	}
	for (i = 0; i < static_cast<int>(list.size()); ++i)
	{
		if (i > 0)
			std::cout << " ";
		if (list[i] != NULL)
			std::cout << *list[i];
		else
			std::cout << "del";
	}
	std::cout << std::endl;
	for (i = 0; i < static_cast<int>(list.size()); ++i)
		if (list[i] != NULL)
			delete list[i];
	list.clear();
	return 0;
}
