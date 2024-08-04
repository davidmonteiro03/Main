/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   onde_vais_parar.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:42:39 by dcaetano          #+#    #+#             */
/*   Updated: 2024/08/04 12:51:45 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

class Game
{
private:
	std::pair<int, int> _dimensions;
	std::vector<std::vector<char> > _map;
	std::vector<int> _prizes;
	std::pair<int, int> _pos;
	int _endflag;

public:
	Game(void);
	void display(void) const;
	void move(int, int);
	void execute(void);
	~Game();
};

Game::Game(void)
{
	std::cin >> _dimensions.first >> _dimensions.second;
	for (int n = 0; n < _dimensions.first; ++n)
	{
		_map.push_back(std::vector<char>());
		for (int m = 0; m < _dimensions.second; ++m)
		{
			char c;
			std::cin >> c;
			_map[n].push_back(c);
		}
	}
	for (int i = 0; i < _dimensions.second; ++i)
	{
		int num;
		std::cin >> num;
		_prizes.push_back(num);
	}
	std::cin >> _pos.second;
	_pos.first = 1;
	_endflag = 0;
}

Game::~Game()
{
	for (int i = 0; i < static_cast<int>(_map.size()); ++i)
		_map[i].clear();
	_map.clear();
	_prizes.clear();
}

void Game::display(void) const
{
	std::cout << std::endl;
	for (int n = 0; n < static_cast<int>(_map.size()); ++n)
	{
		for (int m = 0; m < static_cast<int>(_map[n].size()); ++m)
		{
			if (m > 0)
				std::cout << " | ";
			std::cout << _map[n][m];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Prizes: ";
	for (int i = 0; i < static_cast<int>(_prizes.size()); ++i)
	{
		if (i > 0)
			std::cout << " ";
		std::cout << _prizes[i];
	}
	std::cout << std::endl;
	std::cout << "Pos: x->" << _pos.first << ", y->" << _pos.second;
	std::cout << " (" << _map[_pos.first - 1][_pos.second - 1] << ")";
	std::cout << std::endl;
}

void Game::move(int x, int y)
{
	if (_pos.first + y >= _dimensions.first || _pos.second + x >= _dimensions.second ||
		_pos.first + y <= 0 || _pos.second + x <= 0)
	{
		_endflag = 1;
		return;
	}
	_pos.first += y;
	_pos.second += x;
}

void Game::execute(void)
{
	while (_endflag == 0)
	{
		char c = _map[_pos.first - 1][_pos.second - 1];
		if (c == 'C')
			this->move(0, -1);
		else if (c == 'B')
			this->move(0, 1);
		else if (c == 'E')
			this->move(-1, 0);
		else if (c == 'D')
			this->move(1, 0);
	}
	std::cout << _prizes[_pos.second - 1] << std::endl;
}

int main(void)
{
	Game *game = new Game;
	game->execute();
	delete game;
	return 0;
}
