/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elementos_repetidos.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:59:54 by dcaetano          #+#    #+#             */
/*   Updated: 2024/05/19 19:43:15 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

typedef std::vector<int> t_vector;
typedef std::vector<t_vector> t_mat;

int main(void)
{
	t_mat vectors;
	t_vector result;
	size_t len = 0;
	do
	{
		int n;
		vectors.push_back(t_vector());
		do
		{
			std::cin >> n;
			if (n != 0)
				vectors[len].push_back(n);
		} while (n != 0);
		len++;
	} while (vectors.size() < 3);
	t_vector::iterator i;
	for (i = vectors[0].begin(); i != vectors[0].end(); i++)
	{
		size_t count = 0;
		t_mat::iterator j;
		for (j = vectors.begin() + 1; j != vectors.end(); j++)
		{
			bool found = false;
			t_vector::iterator k;
			for (k = j->begin(); k != j->end(); k++)
			{
				if (*i != *k)
					continue;
				found = true;
				break;
			}
			if (found == true)
				count++;
		}
		if (count == 2)
			result.push_back(*i);
	}
	for (i = result.begin(); i != result.end(); i++)
		std::cout << *i << std::endl;
	return (0);
}
