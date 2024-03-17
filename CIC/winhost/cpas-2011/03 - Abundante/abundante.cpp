/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abundante.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:57:06 by dcaetano          #+#    #+#             */
/*   Updated: 2024/03/17 17:01:00 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(void)
{
	int num;
	cin >> num;
	if (num > 0)
	{
		int sum = 0, i;
		for (i = 1; i <= num; i++)
			sum += (num % i == 0 ? i : 0);
		cout << (sum > num * 2 ? "VERDADEIRO" : "FALSO") << endl;
	}
	return (0);
}
