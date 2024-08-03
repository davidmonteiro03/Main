/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valida_password.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:17:39 by dcaetano          #+#    #+#             */
/*   Updated: 2024/08/03 16:23:43 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static int check_password(std::string const password)
{
	if (password.size() < 6 || password.size() > 12)
		return 0;
	int minusc = 0, maiusc = 0, digit = 0;
	for (size_t i = 0; i < password.size(); ++i)
	{
		if (password[i] >= 'a' && password[i] <= 'z') minusc = 1;
		else if (password[i] >= 'A' && password[i] <= 'Z') maiusc = 1;
		else if (password[i] >= '0' && password[i] <= '9') digit = 1;
	}
	return (minusc == 1 && maiusc == 1 && digit == 1);
}

int main(void)
{
	std::string password;
	std::cin >> password;
	int result = check_password(password);
	std::cout << (result ? "VALIDA" : "INVALIDA") << std::endl;
	return 0;
}
