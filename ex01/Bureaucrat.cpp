/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 03:20:44 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdlib.h>

using std::cout;
using std::endl;

// Default Constructor
Bureaucrat::Bureaucrat(void) : _name("Unnamed"), _grade(150) {
    cout << "Bureaucrat constructor was called" << endl;
}
// Destructor
Bureaucrat::~Bureaucrat(void) {
    cout << "Bureaucrat " << _name << " was deconstructed" << endl;
}
// Constructor with type
Bureaucrat::Bureaucrat(string name, int grade): _name(name) {
    try
    {
        if (grade < 1)
            throw GradeTooHighException() ;
        else if (grade > 150)
            throw GradeTooLowException() ;
        _grade = grade;
    }
    catch (std::exception &e)
    {
        _grade = 150;
        cout << e.what() << endl;
        return;
    }
    cout << "Bureaucrat " << name << " was constructed" << endl;
}
// Copy Constructor
Bureaucrat::Bureaucrat(const Bureaucrat &Bureaucrat) {
    *this = Bureaucrat;
}
// Overload assignation
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &Bureaucrat) {
    _grade = Bureaucrat.getGrade();
    return *this;
}

// Getter for name
string Bureaucrat::getName(void) const {
    return _name;
}
// Getter for grade
int Bureaucrat::getGrade(void) const {
    return _grade;
}
void Bureaucrat::upGrade(void)  {
    try
    {
        if (_grade == 1)
            throw GradeTooHighException();
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
        return ;
    }
    _grade--;
}
void Bureaucrat::deGrade(void)  {
    try
    {
        if (_grade == 150)
            throw GradeTooLowException();
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
        return;
    }
    _grade++;
}
// surchage operateur d'insertion pour afficher le bureaucrat trqlement
ostream &operator<<(ostream &o, const Bureaucrat &Bureaucrat) {
        o << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade()  << "." <<endl;
    return o;
}

void	Bureaucrat::signForm(Form &Form) const
{
	try
	{
		Form.beSigned(*this);
		std::cout <<  _name << " signs "  << Form.getName()  << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << _name << " couldn't sign "  << Form.getName() <<  " because " << e.what()<<"."  << std::endl;
	}
}
