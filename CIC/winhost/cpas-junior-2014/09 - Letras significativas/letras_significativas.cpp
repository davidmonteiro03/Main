/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letras_significativas.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:45:11 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/19 15:59:13 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <vector>

std::vector<std::string> split_args(std::string buffer)
{
	std::vector<std::string> result;
	std::string tmp;
	size_t i = 0, start, end;
	while (buffer[i])
	{
		while (buffer[i] && isspace(buffer[i]))
			i++;
		start = i;
		while (buffer[i] && !isspace(buffer[i]))
			i++;
		end = i;
		tmp = buffer.substr(start, end - start);
		if (tmp.size() > 0)
			result.push_back(tmp);
		while (buffer[i] && isspace(buffer[i]))
			i++;
	}
	return (result);
}

bool find_vec(std::vector<char> vector, char c)
{
	size_t i;
	for(i = 0; i < vector.size(); i++)
		if (vector[i] == c)
			return (true);
	return (false);
}

bool find_str(std::string str, char c)
{
	size_t i;
	for(i = 0; i < str.size(); i++)
		if (str[i] == c)
			return (true);
	return (false);
}

std::vector<char> get_letters(std::vector<std::string> args)
{
	std::vector<char> result;
	size_t i, j;
	for(i = 0; i < args.size(); i++)
		for (j = 0; j < args[i].size(); j++)
			if (!find_vec(result, args[i][j]))
				result.push_back(args[i][j]);
	return (result);
}

void analyse(std::vector<char> letters, std::vector<std::string> args)
{
	std::vector<char> tmp;
	size_t i, j;
	for (i = 0; i < args.size(); i++)
	{
		for(j = 0; j < letters.size(); j++)
			if (find_str(args[i], letters[j]))
				tmp.push_back(letters[j]);
		letters = tmp;
		tmp.clear();
	}
	if (letters.size() > 0)
	{
		for (j = 0; j < letters.size(); j++)
		{
			if (j > 0)
				std::cout << " ";
			std::cout << letters[j];
		}
	}
	else
		std::cout << "SEM LETRAS";
	std::cout << std::endl;
}

std::string strtoupper(std::string str)
{
	size_t i;
	std::string result = str;
	for(i = 0; i < result.size(); i++)
		result[i] = toupper(result[i]);
	return (result);
}

bool find_no_letter(std::string str)
{
	size_t i;
	for(i = 0; i < str.size(); i++)
		if (!isalpha(str[i]))
			return (true);
	return (false);
}

bool check_args(std::vector<std::string> args)
{
	size_t i;
	for(i = 0; i < args.size(); i++)
		if (args[i] != strtoupper(args[i]) || find_no_letter(args[i]))
			return (false);
	return (true);
}

int main(void)
{
	std::vector<std::string> args;
	std::vector<char> letters;
	char tmp[1024];
	std::string buffer;
	scanf(" %[^\n]s", tmp);
	buffer = tmp;
	args = split_args(buffer);
	if (args.size() > 0 && check_args(args))
	{
		letters = get_letters(args);
		if (letters.size() > 0)
			analyse(letters, args);
	}
	return (0);
}
