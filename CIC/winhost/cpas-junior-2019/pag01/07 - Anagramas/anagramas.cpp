/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anagramas.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 20:52:32 by dcaetano          #+#    #+#             */
/*   Updated: 2024/05/20 21:26:55 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

typedef std::string t_string;
typedef std::vector<t_string> t_args;

t_args ft_split(t_string str)
{
	t_args ret;
	size_t i = 0, start, end;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && !std::isalpha(str[i]))
			i++;
		start = i;
		while (str[i] != '\0' && std::isalpha(str[i]))
			i++;
		end = i;
		if (end > start)
			ret.push_back(str.substr(start, end - start));
		while (str[i] != '\0' && !std::isalpha(str[i]))
			i++;
	}
	return (ret);
}

t_string ft_strtoupper(t_string str)
{
	t_string::iterator i;
	for (i = str.begin(); i != str.end(); i++)
		*i = std::toupper(*i);
	return (str);
}

t_string ft_sorted(t_string str)
{
	t_string::iterator i, j;
	for (i = str.begin(); i != str.end(); i++)
		for (j = i + 1; j != str.end(); j++)
			if (*i > *j)
				std::swap(*i, *j);
	return (str);
}

int main(void)
{
	char *tmp = (char *)malloc(sizeof(char) * 250);
	if (tmp != NULL)
	{
		t_string word;
		scanf(" %[^\n]s", tmp);
		std::cin >> word;
		t_string line = tmp;
		free(tmp);
		t_args args = ft_split(line);
		if (args.size() > 0)
		{
			t_args::iterator i;
			for (i = args.begin(); i != args.end(); i++)
				if (ft_sorted(ft_strtoupper(*i)) == ft_sorted(ft_strtoupper(word)))
					std::cout << ft_strtoupper(*i) << std::endl;
		}
	}
	return (0);
}
