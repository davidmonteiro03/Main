/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dialeto_alexandre_alberto.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 09:55:38 by dcaetano          #+#    #+#             */
/*   Updated: 2024/08/03 10:35:00 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>

static void	handle_word(std::string const word)
{
	if (strchr(word.c_str(), '@') != NULL) std::cout << word;
	else
	{
		for (size_t i = 0; i < word.size(); ++i)
		{
			if (std::tolower(word[i]) == 'r') continue ;
			if (word[i] == 'l') std::cout << 'u';
			else if (word[i] == 'L') std::cout << 'U';
			else std::cout << word[i];
		}
	}
}

static void	print_line(std::string const line)
{
	size_t k;
	for (size_t i = 0; i < line.size();)
	{
		for (; i < line.size() && std::isspace(line[i]) != 0; ++i)
			std::cout << line[i];
		k = i;
		for (; i < line.size() && std::isspace(line[i]) == 0; ++i);
		if (i > k)
			handle_word(line.substr(k, i - k));
		for (; i < line.size() && std::isspace(line[i]) != 0; ++i)
			std::cout << line[i];
	}
	std::cout << std::endl;
}

int	main(void)
{
	char tmp[201];
	std::vector<std::string> text;
	scanf(" %[^\n]s", tmp);
	while (strcmp(tmp, "#") != 0)
	{
		text.push_back(tmp);
		scanf(" %[^\n]s", tmp);
	}
	for (size_t i = 0; i < text.size(); ++i) print_line(text[i]);
	text.clear();
	return (0);
}
