/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maior_digito.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:20:27 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/27 16:59:52 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

class Data
{
	private:
		size_t _size;
		std::vector<int> _vector;
		bool _check;
	public:
		Data(void);
		Data(const Data& copy);
		Data& operator=(const Data& other);
		~Data();
		const bool& check(void) const;
		void execute(void) const;
};

Data::Data(void) : _size(0), _vector(std::vector<int>()), _check(true)
{
	int tmp;
	int tmp_n, i;
	std::cin >> tmp_n;
	if (tmp_n <= 0 || tmp_n > 100)
		_check = false;
	for (i = 0; i < tmp_n; i++)
	{
		std::cin >> tmp;
		_vector.push_back(tmp);
	}
	if (tmp_n == 0 || _vector.size() == 0)
		_check = false;
}

Data::Data(const Data& copy) : _size(copy._size), \
	_vector(copy._vector), _check(copy._check) { *this = copy; }

Data& Data::operator=(const Data& other)
{
	if (this != &other)
	{
		_size = other._size;
		_vector = other._vector;
		_check = other._check;
	}
	return (*this);
}

Data::~Data() {}

int biggest_digit(int num)
{
	int max = 0;
	while (num > 0)
	{
		if (num % 10 > max)
			max = num % 10;
		num /= 10;
	}
	return (max);
}

const bool& Data::check(void) const { return (_check); }

void Data::execute(void) const
{
	size_t i;
	for (i = 0; i < _vector.size(); i++)
		std::cout << biggest_digit(_vector[i]) << std::endl;
}

int main(void)
{
	Data* data = new Data;
	if (data->check())
		data->execute();
	delete data;
	return (0);
}
