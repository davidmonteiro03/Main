/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dias_1_do_mes_que_sao_domingo.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 10:58:13 by dcaetano          #+#    #+#             */
/*   Updated: 2024/08/04 11:41:17 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static int isleap(long year)
{
	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

static long mounthdays(long mounth, long year)
{
	if (mounth == 2)
		return isleap(year) ? 29 : 28;
	if (mounth == 4 || mounth == 6 || mounth == 9 || mounth == 11)
		return 30;
	return 31;
}

static long getdays(long year, long mounth)
{
	long first_pos = 0;
	for (long y = 1900; y < year; ++y)
		first_pos += isleap(y) ? 366 : 365;
	for (long m = 1; m < mounth; ++m)
		first_pos += mounthdays(m, year);
	return first_pos;
}

static long execute(long start_mounth, long start_year, long end_mounth, long end_year)
{
	long count = 0;
	while (start_year <= end_year)
	{
		while (start_mounth <= 12)
		{
			if (start_year < end_year)
				count += ((getdays(start_year, start_mounth) + 1) % 7) == 0;
			else if (start_mounth <= end_mounth)
				count += ((getdays(start_year, start_mounth) + 1) % 7) == 0;
			start_mounth++;
		}
		start_mounth = 1;
		start_year++;
	}
	return count;
}

int main(void)
{
	long start_mounth, start_year, end_mounth, end_year;
	std::cin >> start_mounth >> start_year >> end_mounth >> end_year;
	std::cout << execute(start_mounth, start_year, end_mounth, end_year) << std::endl;
	return 0;
}
