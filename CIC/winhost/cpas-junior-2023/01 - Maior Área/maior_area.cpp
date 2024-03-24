/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maior_area.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:05:34 by dcaetano          #+#    #+#             */
/*   Updated: 2024/03/24 15:26:55 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(void)
{
	int c1, l1;
	int c2, l2;
	cin >> c1 >> l1;
	cin >> c2 >> l2;
	cout << (c1 * l1 > c2 * l2 ? c1 * l1 : c2 * l2) << endl;
	return (0);
}
