/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpas2006_t2.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:06:05 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/15 19:52:37 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <unistd.h>

std::vector<std::string> split_args(std::string buffer)
{
	std::vector<std::string> result;
	(void)result;
	(void)buffer;
	return (result);
}

int main(void)
{
	setlocale(LC_ALL, "");
	std::vector<std::string> args;
	std::string buffer;
	char input[1024];
	ssize_t bytes = 1;
	while (bytes > 0)
	{
		bytes = read(0, input, sizeof(input) - 1);
		if (bytes > 0)
		{
			input[bytes] = '\0';
			buffer += input;
		}
	}
	if (buffer.size() != 0 && buffer[buffer.size() - 1] != '\n')
		std::cout << std::endl;
	std::cout << "===========================START===========================" << std::endl;
	std::cout << buffer;
	if (buffer.size() != 0)
		std::cout << std::endl;
	std::cout << "============================END============================" << std::endl;
	args = split_args(buffer);
	return 0;
}

