/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indicie_de_diversao.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:51:26 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/19 10:54:52 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

typedef std::pair<int, int> t_pair;
typedef std::vector<t_pair> t_vector;
typedef std::pair<t_vector, t_vector> t_events;

typedef struct s_data
{
	int orc_max;
	t_events events;
}t_data;

void fill_events(t_vector* vector)
{
	int x, y;
	size_t k, i;
	std::cin >> k;
	for(i = 0; i < k; i++)
	{
		std::cin >> x >> y;
		vector->push_back(t_pair(x, y));
	}
}

void fill_data(t_data* data)
{
	std::cin >> data->orc_max;
	fill_events(&data->events.first);
	fill_events(&data->events.second);
}

t_pair analyse_list(t_vector vector)
{
	t_pair result;
	size_t i;
	result.first = 0;
	result.second = 0;
	for (i = 0; i < vector.size(); i++)
	{
		result.first += vector[i].first;
		result.second += vector[i].second;
	}
	return (result);
}

std::pair<t_pair, t_pair> analyse_lists(t_events events)
{
	std::pair<t_pair, t_pair> result;
	t_pair tmp_first = analyse_list(events.first);
	t_pair tmp_second = analyse_list(events.second);
	result.first = tmp_first;
	result.second = tmp_second;
	return (result);
}

void fix_data(t_pair* pair, int max)
{
	if (pair->first > max)
		pair->second = 0;
}

void display_results(int a, int b)
{
	std::cout << a;
	if (a == b)
		std::cout << "=";
	else if (a > b)
		std::cout << ">";
	else
		std::cout << "<";
	std::cout << b << std::endl;
}

void analyse(t_data data)
{
	std::pair<t_pair, t_pair> results = analyse_lists(data.events);
	fix_data(&results.first, data.orc_max);
	fix_data(&results.second, data.orc_max);
	display_results(results.first.second, results.second.second);
}

int main(void)
{
	t_data* data = new t_data;
	fill_data(data);
	analyse(*data);
	delete data;
	return (0);
}
