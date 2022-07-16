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
Form::Form(void) :  _name("useless"), _signed(false), _grade_signing(150), _grade_executing(150) {
    cout << "Form constructor was called" << endl;
}
// Destructor
Form::~Form(void) {
    cout << "Form " << _name << " was deconstructed" << endl;
}
// Constructor with type
Form::Form(string name, int grade_signing, int grade_excuting) :
 _name(name), _signed(false), _grade_signing(grade_signing), _grade_executing(grade_excuting) {
    try
    {
        if (_grade_signing < 1 || _grade_executing < 1)
            throw GradeTooLowException() ;
        if (_grade_signing > 150 || _grade_executing > 150)
            throw GradeTooHighException() ;
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
        return;
    }
    cout << "Form " << name << " was constructed" << endl;
}
// Copy Constructor
Form::Form(const Form &Form) : _name(Form._name), _grade_signing(Form._grade_signing), _grade_executing(Form._grade_executing)
{
    _signed = false;
    *this = Form;
}
// Overload assignation
Form &Form::operator=(const Form &Form) {
    _signed = Form.getSigned();
    return *this;
}

// Getter for name
string Form::getName(void) const {
    return _name;
}
// Getter for _signed
bool Form::getSigned(void) const {
    return _signed;
}
// Getter for _grade_signing
int Form::getGradeSign(void) const {
    return _grade_signing;
}
// Getter for _grade_executing

int Form::getGradeExec(void) const {
    return _grade_executing;
}
// sign if bureaucrat grade >  grade form
void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _grade_signing)
		throw GradeTooLowException();
	_signed = true;
}
// surchage operateur d'insertion pour afficher le Form trqlement
ostream &operator<<(ostream &o, const Form &Form) {
    o << "[" << Form.getName() << "]" << std::endl;
	o << "\t" << "signed : " << Form.getSigned() << std::endl;
	o << "\t" << "grade needed to sign : " << Form.getGradeSign() << std::endl;
	o << "\t" << "grade needed to execute : " << Form.getGradeExec() << std::endl;
    return o;
}
