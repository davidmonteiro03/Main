/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dialeto_alexandre_alberto.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:36:07 by dcaetano          #+#    #+#             */
/*   Updated: 2024/05/20 21:51:56 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

typedef std::string t_string;
typedef std::vector<t_string> t_text;
typedef std::vector<t_string> t_args;

t_args ft_split(t_string str)
{
	t_args ret;
	size_t i = 0, start, end;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && std::isspace(str[i]))
			i++;
		start = i;
		while (str[i] != '\0' && !std::isspace(str[i]))
			i++;
		end = i;
		if (end > start)
			ret.push_back(str.substr(start, end - start));
		while (str[i] != '\0' && std::isspace(str[i]))
			i++;
	}
	return (ret);
}

void ft_dialet(t_string line)
{
	size_t i = 0, start, end;
	while (line[i] != '\0')
	{
		while (line[i] != '\0' && std::isspace(line[i]))
			std::cout << line[i++];
		start = i;
		while (line[i] != '\0' && !std::isspace(line[i]))
			i++;
		end = i;
		if (end > start)
			;
		while (line[i] != '\0' && std::isspace(line[i]))
			std::cout << line[i++];
	}
	std::cout << std::endl;
}

int main(void)
{
	t_text text;
	t_string line;
	do
	{
		char *tmp = (char *)malloc(sizeof(char) * 200);
		if (tmp != NULL)
		{
			scanf(" %[^\n]s", tmp);
			line = tmp;
			free(tmp);
			if (line != "#")
				text.push_back(line);
		}
	} while (line != "#");
	t_text::iterator i;
	for (i = text.begin(); i != text.end(); i++)
		ft_dialet(*i);
	return (0);
}
