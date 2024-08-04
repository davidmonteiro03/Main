/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpas2006_f10.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:32:20 by dcaetano          #+#    #+#             */
/*   Updated: 2024/08/04 14:32:22 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

class Data
{
private:
	std::pair<int, int> _quantity[5];
	std::vector<int> _request;

public:
	Data(void);
	void execute(void);
	void display_amount(int request, int amount, int notes[5]);
	~Data();
};

Data::Data(void)
{
	const int value[5] = {100, 50, 20, 10, 5};
	for (int q = 0; q < 5; ++q)
	{
		int quantity;
		std::cin >> quantity;
		_quantity[q] = std::make_pair(value[q], quantity);
	}
	int tmp;
	std::cin >> tmp;
	while (tmp != -1)
	{
		_request.push_back(tmp);
		std::cin >> tmp;
	}
}

Data::~Data()
{
	_request.clear();
}

void Data::execute(void)
{
	for (int r = 0; r < static_cast<int>(_request.size()); ++r)
	{
		int temp_quantity[5];
		int notes[5] = {0, 0, 0, 0, 0};
		int amount = _request[r];
		for (int q = 0; q < 5; ++q)
			temp_quantity[q] = _quantity[q].second;
		for (int q = 0; q < 5; ++q)
		{
			while (amount >= _quantity[q].first && temp_quantity[q] > 0)
			{
				amount -= _quantity[q].first;
				++notes[q];
				--temp_quantity[q];
			}
		}
		display_amount(_request[r], amount, notes);
	}
}

void Data::display_amount(int request, int amount, int notes[5])
{

	std::cout << request << "=";
	if (amount == 0)
	{
		for (int q = 0; q < 5; ++q)
		{
			if (q > 0)
				std::cout << " ";
			std::cout << notes[q];
			_quantity[q].second -= notes[q];
		}
	}
	else
		std::cout << "QUANTIA INDISPONIVEL";
	std::cout << std::endl;
}

int main(void)
{
	Data *data = new Data;
	data->execute();
	delete data;
	return 0;
}
