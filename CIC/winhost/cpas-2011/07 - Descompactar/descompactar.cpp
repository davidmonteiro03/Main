/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   descompactar.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 21:50:37 by dcaetano          #+#    #+#             */
/*   Updated: 2024/08/02 22:21:05 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <string.h>

static void numbers_init(std::vector<std::string> &numbers)
{
	numbers.push_back("um");
	numbers.push_back("dois");
	numbers.push_back("tres");
	numbers.push_back("quatro");
	numbers.push_back("cinco");
	numbers.push_back("seis");
	numbers.push_back("sete");
	numbers.push_back("oito");
	numbers.push_back("nove");
}

static void show_string(std::string const str, \
	std::vector<std::string> dict, \
	std::vector<std::string> numbers)
{
	for (size_t k = 0; k < str.size(); ++k)
	{
		if (k < str.size() - 1)
		{
			if (str[k] == '^' && std::isdigit(str[k + 1]))
				std::cout << numbers[str[++k] - '0' - 1];
			else if (str[k] == '#' && std::isdigit(str[k + 1]))
				std::cout << dict[str[++k] - '0' - 1];
			else
				std::cout << str[k];
		}
		else
			std::cout << str[k];
	}
	std::cout << std::endl;
}

int main(void)
{
	std::vector<std::string> text, dict, numbers;
	char tmp[201];
	size_t count;
	std::cin >> count;
	for (size_t i = 0; i < count; ++i)
	{
		scanf(" %[^\n]s", tmp);
		text.push_back(tmp);
	}
	scanf(" %[^\n]s", tmp);
	while (strcmp(tmp, "#") != 0)
	{
		dict.push_back(tmp);
		scanf(" %[^\n]s", tmp);
	}
	numbers_init(numbers);
	for (size_t i = 0; i < text.size(); ++i)
		show_string(text[i], dict, numbers);
	text.clear();
	dict.clear();
	numbers.clear();
	return 0;
}
