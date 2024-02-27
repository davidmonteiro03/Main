/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   media_matriz.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:51:21 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/27 17:27:00 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <vector>

class Data
{
	private:
		std::vector<std::vector<int> > _srch;
		std::vector<std::vector<int> > _data;
		bool _check;
	public:
		Data(void);
		Data(const Data& copy);
		Data& operator=(const Data& other);
		~Data();
		const bool& check(void) const;
		void execute(void) const;
};

static void fill_data(std::vector<std::vector<int> >& data)
{
	size_t i, j;
	for (i = 0; i < data.size(); i++)
		for (j = 0; j < data[i].size(); j++)
			std::cin >> data[i][j];
}

static bool check_srch(std::vector<std::vector<int> > srch)
{
	size_t i, j;
	for (i = 0; i < srch.size(); i++)
	{
		for (j = 0; j < srch[i].size(); j++)
			if (srch[i][j] != 0 && srch[i][j] != 1)
				return (false);
	}
	return (true);
}

Data::Data(void) : _srch(std::vector<std::vector<int> >()), \
	_data(std::vector<std::vector<int> >()), _check(true)
{
	int tmp_rows, tmp_cols, i, j;
	std::cin >> tmp_rows >> tmp_cols;
	if (tmp_rows <= 0 || tmp_cols <= 0)
		_check = false;
	for (i = 0; i < tmp_rows; i++)
	{
		_srch.push_back(std::vector<int>());
		_data.push_back(std::vector<int>());
		for (j = 0; j < tmp_cols; j++)
		{
			_srch[i].push_back(0);
			_data[i].push_back(0);
		}
	}
	fill_data(_srch);
	fill_data(_data);
	if (!check_srch(_srch))
		_check = false;
}

Data::Data(const Data& copy) : _srch(copy._srch), _data(copy._data), \
	_check(copy._check) { *this = copy; }

Data& Data::operator=(const Data& other)
{
	if (this != &other)
	{
		_srch = other._srch;
		_data = other._data;
		_check = other._check;
	}
	return (*this);
}

Data::~Data() {}

const bool& Data::check(void) const { return (_check); }

void Data::execute(void) const
{
	double sum, avg;
	std::vector<int> important;
	size_t i, j;
	for (i = 0; i < _srch.size(); i++)
		for (j = 0; j < _srch[i].size(); j++)
			if (_srch[i][j] == 1)
				important.push_back(_data[i][j]);
	sum = 0;
	for (i = 0; i < important.size(); i++)
		sum += important[i];
	if (important.size() == 0)
		printf("%.2lf\n", 0.0);
	else
	{
		avg = sum / important.size();
		printf("%.2lf\n", avg);
	}
}

int main(void)
{
	Data* data = new Data;
	if (data->check())
		data->execute();
	delete data;
	return (0);
}
