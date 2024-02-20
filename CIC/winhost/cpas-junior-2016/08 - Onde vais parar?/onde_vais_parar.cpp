/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   onde_vais_parar.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:22:20 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/20 17:55:51 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <unistd.h>

class Game
{
	private:
		Game(const Game&);
		Game& operator=(const Game&);
		std::pair<size_t, size_t> _dimentions;
		std::pair<size_t, size_t> _coord;
		std::vector<std::string> _map;
		std::vector<size_t> _awards;
		size_t _pos;
		bool _valid;
		bool _end;
	public:
		Game(void);
		~Game();
		std::pair<size_t, size_t> get_dimentions(void) const;
		std::vector<std::string> get_map(void) const;
		std::vector<size_t> get_awards(void) const;
		size_t get_pos(void) const;
		bool is_valid(void) const;
		void display_map(void) const;
		void move(char c);
		void execute(void);
};

bool valid_char(char c)
{
	return (c == 'C' || c == 'E' || c == 'D' || c == 'B');
}

bool check_str(std::string str, size_t len)
{
	size_t tmp_i;
	if (str.size() != len)
		return (false);
	for (tmp_i = 0; tmp_i < str.size(); tmp_i++)
		if (!valid_char(str[tmp_i]))
			return (false);
	return (true);
}

Game::Game(void) : _dimentions(std::pair<size_t, size_t>(0, 0)), \
	_coord(std::pair<size_t, size_t>(1, 1)), _map(std::vector<std::string>()), \
	_awards(std::vector<size_t>()), _pos(0), _valid(true), _end(false)
{
	std::string tmp_str;
	size_t tmp_i, tmp_award;
	std::cin >> _dimentions.first >> _dimentions.second;
	if (_dimentions.first == 0 || _dimentions.second == 0)
		_valid = false;
	for (tmp_i = 0; tmp_i < _dimentions.first; tmp_i++)
	{
		std::cin >> tmp_str;
		_valid = check_str(tmp_str, _dimentions.second);
		_map.push_back(tmp_str);
	}
	for (tmp_i = 0; tmp_i < _dimentions.second; tmp_i++)
	{
		std::cin >> tmp_award;
		if (tmp_award == 0)
			_valid = false;
		_awards.push_back(tmp_award);
	}
	std::cin >> _pos;
	if (_pos == 0 || _pos > _dimentions.second)
		_valid = false;
	_coord.second = _pos;
}

Game::Game(const Game& copy) { *this = copy; }

Game& Game::operator=(const Game& other)
{
	if (this != &other)
	{
		_dimentions = other._dimentions;
		_map = other._map;
		_awards = other._awards;
		_pos = other._pos;
		_valid = other._valid;
	}
	return (*this);
}

Game::~Game() {}

std::pair<size_t, size_t> Game::get_dimentions(void) const { return (_dimentions); }

std::vector<std::string> Game::get_map(void) const { return (_map); }

std::vector<size_t> Game::get_awards(void) const { return (_awards); }

size_t Game::get_pos(void) const { return (_pos); }

bool Game::is_valid(void) const { return (_valid); }

void Game::display_map(void) const
{
	size_t i, j;
	system("clear");
	std::cout << "======= MAP =======" << std::endl;
	for (i = 0; i < _dimentions.first; i++)
	{
		for (j = 0; j < _dimentions.second; j++)
		{
			if (j > 0)
				std::cout << " ";
			if (i == _coord.first - 1 && j == _coord.second - 1)
				std::cout << "P";
			else
				std::cout << _map[i][j];
		}
		std::cout << std::endl;
	}
}

void Game::move(char c)
{
	if (c == 'C')
		return ;
	if (c == 'B' && _coord.first < _dimentions.first)
		_coord.first++;
	if (c == 'E' && _coord.second > 1)
		_coord.second--;
	if (c == 'D' && _coord.second < _dimentions.second)
		_coord.second++;
}

void Game::execute(void)
{
	std::pair<size_t, size_t> old;
	while (!_end)
	{
		old = _coord;
		move(_map[_coord.first - 1][_coord.second - 1]);
		if (_coord.first == _dimentions.first)
			break ;
		display_map();
		std::cout << "OLD => X: " << old.first << ", Y: " << old.second << std::endl;
		std::cout << "COR => X: " << _coord.first << ", Y: " << _coord.second << std::endl;
		usleep(400000);
	}
	display_map();
}

int main(void)
{
	Game* game = new Game;
	if (game->is_valid())
		game->execute();
	delete game;
	return (0);
}
