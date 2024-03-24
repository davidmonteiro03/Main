/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tarifarios_de_telemovel.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:24:05 by dcaetano          #+#    #+#             */
/*   Updated: 2024/03/24 17:14:15 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

class Data
{
	private:
		std::vector<int> _costs;
		std::pair<std::string, int> _info;
		bool _flag;
	public:
		Data(std::string name);
		~Data();
		std::string get_name(void) const;
		std::vector<int> get_costs(void) const;
		std::pair<std::string, int> get_info(void) const;
		int get_callcost(void) const;
		bool get_flag(void) const;
		void update(int weekday, int minutes);
};

Data::Data(std::string name) : \
	_costs(std::vector<int>()), \
	_info(std::pair<std::string, int>()), _flag(true)
{
	std::cin >> _info.first;
	if (_info.first != name)
		_flag = false;
	for (size_t i = 0; i < 7; i++)
		_costs.push_back(0);
	for (size_t i = 0; i < 7; i++)
		std::cin >> _costs[i];
	for (size_t i = 0; i < 7; i++)
		if (_costs[i] < 0)
			_flag = false;
}

Data::~Data() {}

std::string Data::get_name(void) const { return _info.first; }

std::vector<int> Data::get_costs(void) const { return _costs; }

std::pair<std::string, int> Data::get_info(void) const { return _info; }

int Data::get_callcost(void) const { return _info.second; }

bool Data::get_flag(void) const { return _flag; }

void Data::update(int weekday, int minutes)
{
	_info.second = _costs[weekday] * minutes;
}

void show_vector(std::vector<std::pair<std::string, int> > vector)
{
	std::vector<std::pair<std::string, int> >::iterator i = vector.begin();
	while (i != vector.end())
	{
		if (i != vector.begin())
			std::cout << " ";
		std::cout << i->first;
		++i;
	}
}

int main(void)
{
	Data* meo = new Data("MEO");
	Data* vdf = new Data("VDF");
	Data* nos = new Data("NOS");
	int weekday, minutes;
	std::cin >> weekday >> minutes;
	if (meo->get_flag() == true && \
		vdf->get_flag() == true && \
		nos->get_flag() == true && \
		weekday >= 0 && weekday <= 6 && \
		minutes >= 0)
	{
		meo->update(weekday, minutes);
		vdf->update(weekday, minutes);
		nos->update(weekday, minutes);
		std::vector<std::pair<std::string, int> > tmp, minimus, maximus;
		tmp.push_back(meo->get_info());
		tmp.push_back(vdf->get_info());
		tmp.push_back(nos->get_info());
		std::vector<std::pair<std::string, int> >::iterator min, max, i;
		i = tmp.begin();
		max = min = i;
		while (i != tmp.end())
		{
			if (i->second > max->second)
				max = i;
			if (i->second < min->second)
				min = i;
			++i;
		}
		i = tmp.begin();
		while (i != tmp.end())
		{
			if (i->second == min->second)
				minimus.push_back(*i);
			if (i->second == max->second)
				maximus.push_back(*i);
			++i;
		}
		tmp.clear();
		show_vector(minimus); std::cout << " " << min->second << std::endl;
		show_vector(maximus); std::cout << " " << max->second << std::endl;
	}
	delete meo;
	delete vdf;
	delete nos;
	return (0);
}
