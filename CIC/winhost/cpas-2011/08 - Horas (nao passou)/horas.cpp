/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   horas.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:19:44 by dcaetano          #+#    #+#             */
/*   Updated: 2024/08/03 13:45:14 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

typedef struct s_number_text
{
	std::vector<std::pair<std::string, std::string> > units;
	std::vector<std::pair<std::string, std::string> > teens;
	std::vector<std::pair<std::string, std::string> > decims;
} t_number_text;

static void units_init(std::vector<std::pair<std::string, std::string> > &units)
{
	units.push_back(std::make_pair("uma", "um"));
	units.push_back(std::make_pair("duas", "dois"));
	units.push_back(std::make_pair("tres", "tres"));
	units.push_back(std::make_pair("quatro", "quatro"));
	units.push_back(std::make_pair("cinco", "cinco"));
	units.push_back(std::make_pair("seis", "seis"));
	units.push_back(std::make_pair("sete", "sete"));
	units.push_back(std::make_pair("oito", "oito"));
	units.push_back(std::make_pair("nove", "nove"));
}

static void teens_init(std::vector<std::pair<std::string, std::string> > &teens)
{
	teens.push_back(std::make_pair("onze", "onze"));
	teens.push_back(std::make_pair("doze", "doze"));
	teens.push_back(std::make_pair("treze", "treze"));
	teens.push_back(std::make_pair("catorze", "catorze"));
	teens.push_back(std::make_pair("quinze", "quinze"));
	teens.push_back(std::make_pair("dezasseis", "dezasseis"));
	teens.push_back(std::make_pair("dezassete", "dezassete"));
	teens.push_back(std::make_pair("dezoito", "dezoito"));
	teens.push_back(std::make_pair("dezanove", "dezanove"));
}

static void decims_init(std::vector<std::pair<std::string, std::string> > &decims)
{
	decims.push_back(std::make_pair("dez", "dez"));
	decims.push_back(std::make_pair("vinte", "vinte"));
	decims.push_back(std::make_pair("trinta", "trinta"));
	decims.push_back(std::make_pair("quarenta", "quarenta"));
	decims.push_back(std::make_pair("cinquenta", "cinquenta"));
	decims.push_back(std::make_pair("sessenta", "sessenta"));
	decims.push_back(std::make_pair("setenta", "setenta"));
	decims.push_back(std::make_pair("oitenta", "oitenta"));
	decims.push_back(std::make_pair("noventa", "noventa"));
}

static void choose_option(std::pair<std::string, std::string> pair_arg, int option)
{
	if (option == 0)
		std::cout << pair_arg.first;
	else if (option == 1)
		std::cout << pair_arg.second;
}

static void display_number_text(int number, t_number_text number_text, int option)
{
	if (number < 10)
		choose_option(number_text.units[number - 1], option);
	else if (number > 10 && number < 20)
		choose_option(number_text.teens[number - 11], option);
	else
	{
		choose_option(number_text.decims[number / 10 - 1], option);
		if (number % 10 > 0)
		{
			std::cout << " e ";
			choose_option(number_text.units[number % 10 - 1], option);
		}
	}
}

static void handle_time(std::pair<int, int> time, t_number_text number_text)
{
	if (time.second <= 45)
	{
		if (time.second == 45)
		{
			display_number_text(time.first + 1, number_text, 0);
			std::cout << " menos um quarto";
		}
		else
		{
			display_number_text(time.first, number_text, 0);
			std::cout << " ";
			if (time.second == 0)
				std::cout << (time.first != 1 ? "horas" : "hora");
			else
			{
				std::cout << "e ";
				if (time.second == 15) std::cout << "um quarto";
				else if (time.second == 30) std::cout << "meia";
				else display_number_text(time.second, number_text, 1);
			}
		}
	}
	else
	{
		display_number_text(60 - time.second, number_text, 1);
		std::cout << " minuto";
		if (60 - time.second != 1)
			std::cout << "s";
		std::cout << " para a";
		if (time.first + 1 != 1)
			std::cout << "s";
		std::cout << " ";
		display_number_text(time.first + 1, number_text, 0);
	}
}

int main(void)
{
	size_t n;
	int tmp_h, tmp_m;
	std::vector<std::pair<int, int> > times;
	t_number_text number_text;
	std::cin >> n;
	for (size_t i = 0; i < n; ++i)
	{
		std::cin >> tmp_h >> tmp_m;
		std::pair<int, int> tmp_p = std::make_pair(tmp_h, tmp_m);
		times.push_back(tmp_p);
	}
	units_init(number_text.units);
	teens_init(number_text.teens);
	decims_init(number_text.decims);
	for (size_t i = 0; i < times.size(); ++i)
	{
		handle_time(times[i], number_text);
		std::cout << std::endl;
	}
	number_text.decims.clear();
	number_text.teens.clear();
	number_text.units.clear();
	times.clear();
	return (0);
}
