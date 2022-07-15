/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 03:20:44 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <stdlib.h>

using std::cout;
using std::endl;

// Default Constructor
Form::Form(void) : _name("Unnamed"), _grade(150) {
    cout << "Form constructor was called" << endl;
}
// Destructor
Form::~Form(void) {
    cout << "Form " << _name << " was deconstructed" << endl;
}
// Constructor with type
Form::Form(string name,bool originnaly_signed, int grade_signing, int grade_excuting): _name(name) {
    try
    {
        if (_grade_signing < 1 || _grade_executing < 1)
            throw GradeTooLowException() ;
        else if (_grade_signing > 150 || _grade_executing > 150)
            throw GradeTooHighException() ;
        _grade_signing = grade_signing;
        _grade_executing = grade_executing;
    }
    catch (std::exception &e)
    {
        _grade = 150;
        cout << e.what() << endl;
        return;
    }
    cout << "Form " << name << " was constructed" << endl;
}
// Copy Constructor
Form::Form(const Form &Form) {
    *this = Form;
}
// Overload assignation
Form &Form::operator=(const Form &Form) {
    _grade = Form.getGrade();
    return *this;
}

// Getter for name
string Form::getName(void) const {
    return _name;
}
// Getter for grade
int Form::getGrade(void) const {
    return _grade;
}
void Form::upGrade(void)  {
    if (_grade > 1)
         _grade--;
}
void Form::deGrade(void)  {
    if (_grade < 150)
        _grade++;
}
// surchage operateur d'insertion pour afficher le Form trqlement
ostream &operator<<(ostream &o, const Form &Form) {
        o << Form.getName() << ", Form grade " << Form.getGrade()  << "." <<endl;
    return o;
}
