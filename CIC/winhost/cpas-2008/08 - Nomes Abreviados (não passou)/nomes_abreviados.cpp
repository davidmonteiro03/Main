/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nomes_abreviados.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:20:57 by Dcaetano          #+#    #+#             */
/*   Updated: 2024/08/02 21:06:19 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <vector>
#include <string>
#include <string.h>
#include <iostream>

static std::vector<std::string> ft_split(std::string const str)
{
	std::vector<std::string> result;
	for (size_t i = 0; i < str.size();)
	{
		for (;i < str.size() && std::isspace(str[i]) != 0;++i) ;
		size_t k = i;
		for (;i < str.size() && std::isspace(str[i]) == 0;++i) ;
		if (i > k) result.push_back(str.substr(k, i - k));
		for (;i < str.size() && std::isspace(str[i]) != 0;++i) ;
	}
	return result;
}

static void	show_name_abbreviation(std::string const name)
{
	std::vector<std::string> tmp = ft_split(name);
	for (size_t i = 0; i < tmp.size(); ++i)
	{
		if (tmp[i] == "DE" || tmp[i] == "DA" || tmp[i] == "DOS")
			continue ;
		if (i > 0)
			std::cout << " ";
		if (i > 0 && i < tmp.size() - 1)
			std::cout << tmp[i][0] << ".";
		else
			std::cout << tmp[i];
	}
	std::cout << std::endl;
	tmp.clear();
}

int main(void)
{
	char input[256];
	std::vector<std::string> names;
	scanf(" %[^\n]s", input);
	while (strcmp(input, "#") != 0)
	{
		names.push_back(input);
		scanf(" %[^\n]s", input);
	}
	for (size_t i = 0; i < names.size(); ++i)
		show_name_abbreviation(names[i]);
	names.clear();
	return 0;
}
