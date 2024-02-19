/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpas2006_t2.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:06:05 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/17 17:59:45 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

bool special_char(char c)
{
	return (isspace(c) || c == '.' || c == '?' || c == '!' || \
		c == ',' || c == ':' || c == ';');
}

std::string string_lower(std::string str)
{
	std::string result = str;
	size_t i;
	for (i = 0; i < result.size(); i++)
		result[i] = tolower(result[i]);
	return (result);
}

std::vector<std::string> split_args(std::string buffer)
{
	std::vector<std::string> result;
	std::string tmp;
	size_t i = 0, start, end;
	while (buffer[i])
	{
		while (buffer[i] && special_char(buffer[i]))
			i++;
		start = i;
		while (buffer[i] && !special_char(buffer[i]))
			i++;
		end = i;
		tmp = buffer.substr(start, end - start);
		if (tmp.size() > 0)
			result.push_back(string_lower(tmp));
		while (buffer[i] && special_char(buffer[i]))
			i++;
	}
	return (result);
}

bool find_arg(std::vector<std::string> args, std::string new_arg)
{
	size_t i;
	if (args.size() == 0)
		return (false);
	for (i = 0; i < args.size(); i++)
		if (args[i] == new_arg)
			return (true);
	return (false);
}

std::vector<std::string> zip_args(std::vector<std::string> args)
{
	std::vector<std::string> result;
	size_t i;
	for (i = 0; i < args.size(); i++)
		if (!find_arg(result, args[i]))
			result.push_back(args[i]);
	return (result);
}

void display_args(std::vector<std::string> args)
{
	size_t i;
	for (i = 0; i < args.size(); i++)
	{
		if (i > 0)
			std::cout << " => ";
		std::cout << args[i];
	}
}

void count_args(std::vector<std::string> args_zip, std::vector<std::string> args)
{
	size_t count, i, k;
	for (i = 0; i < args_zip.size(); i++)
	{
		count = 0;
		for (k = 0; k < args.size(); k++)
		{
			if (args_zip[i] == args[k])
				count++;
		}
		std::cout << args_zip[i] << " " << count << std::endl;
	}
}

int main(void)
{
	std::vector<std::string> args, args_zip;
	std::string buffer, line;
	while (std::getline(std::cin, line))
		buffer += line + '\n';
	args = split_args(buffer);
	if (args.size() > 0)
	{
		args_zip = zip_args(args);
		count_args(args_zip, args);
	}
	return (0);
}
