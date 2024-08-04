/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jogo_de_numeros.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 07:56:24 by dcaetano          #+#    #+#             */
/*   Updated: 2024/08/04 08:10:06 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

int main(void)
{
	int count = 0, lives = 3;
	srand(time(NULL));
	do
	{
		int input, num = rand() % 3 + 1;
		std::cout << "Digite um número de 1 a 3? ";
		std::cin >> input;
		count += input == num;
		lives -= input != num;
		std::cout << (input == num ? "ACERTOU" : "ERROU") << std::endl;
		std::cout << "Nº VIDAS: " << lives << std::endl;
		std::cout << "CONTADOR: " << count << std::endl;
	} while (lives > 0);
	std::cout << "FIM DO JOGO" << std::endl;
	return 0;
}
