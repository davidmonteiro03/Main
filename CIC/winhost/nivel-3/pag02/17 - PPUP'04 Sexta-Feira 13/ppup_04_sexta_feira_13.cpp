/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ppup_04_sexta_feira_13.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:08:35 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/15 13:08:46 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool is_leap_year(int year)
{
	return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

std::pair<int, bool> years_prev(int year)
{
	std::pair<int, bool> result;
	int default_year = 1998;
	int default_first_day = 5;
	while (--default_year >= year)
	{
		default_first_day -= is_leap_year(default_year) + 1;
		if (default_first_day < 1)
			default_first_day += 7;
	}
	result.first = default_first_day;
	result.second = is_leap_year(year);
	return (result);
}

std::pair<int, bool> years_next(int year)
{
	std::pair<int, bool> result;
	int default_year = 1998;
	int default_first_day = 5;
	while (++default_year < year)
	{
		default_first_day += is_leap_year(default_year) + 1;
		if (default_first_day > 7)
			default_first_day -= 7;
	}
	if (++default_first_day > 7)
		default_first_day -= 7;
	result.first = default_first_day;
	result.second = is_leap_year(year);
	return (result);
}

int get_unluck_days(std::pair<int, bool>& data)
{
	int month_days[12] = {
		31, 28, 31, 30, 31, 30, \
		31, 31, 30, 31, 30, 31
	}, i, j, tmp = data.first, unluck = 0;
	month_days[1] += data.second;
	for (i = 0; i < 12; i++)
	{
		for(j = 0; j < month_days[i]; j++)
		{
			unluck += (j + 1 == 13 && tmp == 6);
			if (++tmp > 7)
				tmp -= 7;
		}
	}
	return (unluck);
}

void execute(int year)
{
	std::pair<int, bool> tmp;
	if (year < 1998)
		tmp = years_prev(year);
	else
		tmp = years_next(year);
	std::cout << get_unluck_days(tmp);
}

int main(void)
{
	int year;

	std::cin >> year;
	if (year == 1998)
		std::cout << 3;
	else if (year > 0)
		execute(year);
	std::cout << std::endl;
	return (0);
}
