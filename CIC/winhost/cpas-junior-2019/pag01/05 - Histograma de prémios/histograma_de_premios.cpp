/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   histograma_de_premios.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:08:39 by dcaetano          #+#    #+#             */
/*   Updated: 2024/03/17 16:52:55 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<pair<unsigned int, unsigned int> > data, res;
	vector<unsigned int> sort;
	vector<pair<unsigned int, unsigned int> >::iterator it_d;
	vector<unsigned int>::iterator it_s;
	unsigned int tmp, max;
	size_t n, i;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> tmp;
		data.push_back(pair<unsigned int, unsigned int>(tmp, 0));
	}
	for (i = 0; i < 9; i++)
	{
		cin >> tmp;
		sort.push_back(tmp);
	}
	if (n > 0)
	{
		for (it_d = data.begin(); it_d != data.end(); it_d++)
		{
			for (it_s = sort.begin(); it_s != sort.end(); it_s++)
				if (it_d->first == *it_s)
					it_d->second++;
			if (it_d->second != 0)
				res.push_back(*it_d);
		}
		max = res.at(0).second;
		for (it_d = res.begin(); it_d != res.end(); it_d++)
			if (it_d->second > max)
				max = it_d->second;
		for (i = 0; i < max; i++)
		{
			string line;
			it_d = res.begin();
			while (it_d != res.end())
			{
				line += (it_d->second == max ? "*   " : "    ");
				it_d->second += it_d->second < max;
				++it_d;
			}
			for (size_t tmp_i = 0; tmp_i < line.size() / 2; tmp_i++)
				swap(line[tmp_i], line[line.size() - tmp_i - 1]);
			string::const_iterator str_it = line.begin();
			while (str_it != line.end() && isspace(*str_it))
				str_it = line.erase(str_it++);
			for (size_t tmp_i = 0; tmp_i < line.size() / 2; tmp_i++)
				swap(line[tmp_i], line[line.size() - tmp_i - 1]);
			cout << line << endl;
		}
		for (it_d = res.begin(); it_d != res.end(); it_d++)
		{
			if (it_d != res.begin())
				cout << " ";
			cout << it_d->first;
		}
		cout << endl;
	}
	return (0);
}
