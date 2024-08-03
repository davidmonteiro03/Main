/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operacoes_matrizes_2.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:27:46 by dcaetano          #+#    #+#             */
/*   Updated: 2024/08/03 16:10:35 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

class Student
{
	private:
		std::vector<int> _grades;
		int _average;
	public:
		Student(size_t);
		std::vector<int> get_grades(void) const;
		void display_grades(void) const;
		void check_level(void) const;
		int best_grade(void) const;
		~Student();
};

Student::Student(size_t num_subjects)
{
	double sum = 0;
	for (size_t i = 0; i < num_subjects; ++i)
	{
		int tmp;
		std::cin >> tmp;
		sum += tmp;
		_grades.push_back(tmp);
	}
	_average = static_cast<double>(sum) / static_cast<double>(num_subjects);
}

std::vector<int> Student::get_grades(void) const { return _grades; }

void Student::display_grades(void) const
{
	for (size_t i = 0; i < _grades.size(); ++i)
	{
		if (i > 0)
			std::cout << " ";
		std::cout << _grades[i];
	}
	std::cout << " " << static_cast<int>(_average);
	std::cout << std::endl;
}

void Student::check_level(void) const
{
	if (_average < 10.0) std::cout << "Sem nível";
	else if (_average <= 13.0) std::cout << "Satisfaz";
	else if (_average <= 16.0) std::cout << "Bom";
	else std::cout << "Muito Bom";
	std::cout << std::endl;
}

int Student::best_grade(void) const
{
	int best = _grades[0];
	for (size_t i = 0; i < _grades.size(); ++i)
		if (_grades[i] > best)
			best = _grades[i];
	return best;
}

Student::~Student() { _grades.clear(); }

int main(void)
{
	int best, num_students, num_subjects, i, j;
	std::vector<Student *> students;
	std::cin >> num_students >> num_subjects;
	for (i = 0; i < num_students; ++i)
		students.push_back(new Student(num_subjects));
	for (i = 0; i < static_cast<int>(students.size()); ++i)
		students[i]->display_grades();
	for (i = 0; i < static_cast<int>(students.size()); ++i)
		students[i]->check_level();
	if (students.size() > 0)
		best = students[0]->best_grade();
	for (i = 0; i < static_cast<int>(students.size()); ++i)
		if (students[i]->best_grade() > best)
			best = students[i]->best_grade();
	for (i = 0; i < static_cast<int>(students.size()); ++i)
	{
		std::vector<int> tmp = students[i]->get_grades();
		for (j = 0; j < static_cast<int>(tmp.size()); ++j)
			if (tmp[j] == best)
				std::cout << i << " " << j << std::endl;
	}
	for (i = 0; i < static_cast<int>(students.size()); ++i)
		delete students[i];
	return 0;
}
