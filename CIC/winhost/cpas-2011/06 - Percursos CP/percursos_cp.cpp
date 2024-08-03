/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percursos_cp.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:36:12 by dcaetano          #+#    #+#             */
/*   Updated: 2024/08/03 12:04:19 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <stdlib.h>

class Station
{
private:
	std::string _name;
	std::pair<int, int> _time;

public:
	Station(void);
	Station(char[51]);
	std::string const get_name(void) const;
	size_t get_hours(void) const;
	size_t get_minutes(void) const;
	~Station();
};

class Route
{
private:
	std::string _name;
	std::vector<Station> _stations;

public:
	Route(void);
	Route(char[51]);
	void displayData(void);
	void handle_difference(Station, Station);
	~Route();
};

Station::Station(void) : _name(std::string()), _time(std::pair<int, int>()) {}

Station::Station(char tmp[51])
{
	std::string str = tmp;
	size_t i = 0;
	for (; i < str.size() && str[i] != '#'; ++i)
		_name.append(1, str[i]);
	for (; i < str.size() && str[i] == '#'; ++i) ;
	std::string hours;
	for (; i < str.size() && hours.size() < 2; ++i)
		hours.append(1, str[i]);
	 _time.first = atoi(hours.c_str());
	std::string minutes;
	for (; i < str.size() && minutes.size() < 2; ++i)
		minutes.append(1, str[i]);
	_time.second = atoi(minutes.c_str());
}

Station::~Station() {}

std::string const Station::get_name(void) const { return _name; }

size_t Station::get_hours(void) const { return _time.first; }

size_t Station::get_minutes(void) const { return _time.second; }

Route::Route(void) : _name(std::string()), _stations(std::vector<Station>()) {}

Route::Route(char tmp[51])
{
	_name = tmp;
	scanf(" %[^\n]s", tmp);
	while (strcmp(tmp, "*") != 0)
	{
		_stations.push_back(Station(tmp));
		scanf(" %[^\n]s", tmp);
	}
}

Route::~Route() {}

void Route::handle_difference(Station a, Station b)
{
	int hours_a = a.get_hours(), hours_b = b.get_hours();
	int minutes_a = a.get_minutes(), minutes_b = b.get_minutes();
	int total_minutes_a = hours_a * 60 + minutes_a, total_minutes_b = hours_b * 60 + minutes_b;
	int diff_total_minutes = total_minutes_b - total_minutes_a;
	int diff_hours = diff_total_minutes / 60;
	int diff_minutes = diff_total_minutes % 60;

	if (diff_hours < 10)
		std::cout << "0";
	std::cout << diff_hours;
	if (diff_minutes < 10)
		std::cout << "0";
	std::cout << diff_minutes;
}

void Route::displayData(void)
{
	std::cout << _name;
	for (size_t i = 0; i < _stations.size(); ++i)
		std::cout << " " << _stations[i].get_name();
	std::cout << std::endl;
	for (size_t i = 0; i < _stations.size(); ++i)
	{
		std::cout << _stations[i].get_name();
		for (size_t j = 0; j < _stations.size(); ++j)
		{
			std::cout << " ";
			if (j == i)
			{
				size_t hours = _stations[i].get_hours(), minutes = _stations[j].get_minutes();
				if (hours < 10)
					std::cout << "0";
				std::cout << hours;
				if (minutes < 10)
					std::cout << "0";
				std::cout << minutes;
			}
			else if (j > i)
				handle_difference(_stations[i], _stations[j]);
			else
				std::cout << "-";
		}
		std::cout << std::endl;
	}
}

int main(void)
{
	char tmp[51];
	std::vector<Route> routes;
	scanf(" %[^\n]s", tmp);
	while (strcmp(tmp, "*") != 0)
	{
		routes.push_back(Route(tmp));
		scanf(" %[^\n]s", tmp);
	}
	for (size_t i = 0; i < routes.size(); ++i)
	{
		if (i > 0)
			std::cout << std::endl;
		routes[i].displayData();
	}
	return (0);
}
