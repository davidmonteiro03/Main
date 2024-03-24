/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texto_com_rotacao.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:23:18 by dcaetano          #+#    #+#             */
/*   Updated: 2024/03/24 18:07:48 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

using namespace std;

void rotate(std::string& str)
{
	std::string::iterator it = str.begin();
	size_t i = 0;
	while (str[i + 1])
	{
		i++;
		it++;
	}
	char tmp = *it;
	str.erase(it);
	str.insert(str.begin(), tmp);
}

int main(void)
{
	char *line1, *line2;
	std::string str1, str2;
	line1 = (char *)malloc(256);
	line2 = (char *)malloc(256);
	scanf(" %[^\n]s", line1);
	scanf(" %[^\n]s", line2);
	str1 = line1;
	str2 = line2;
	free(line1);
	free(line2);
	if (str1.size() == str2.size())
	{
		size_t i;
		for (i = 0; i < str1.size(); i++)
		{
			if (str1 == str2)
				break ;
			rotate(str1);
		}
		if (i >= 0 && i < str1.size())
			cout << i << endl;
		else
			cout << -1 << endl;
	}
	return (0);
}
