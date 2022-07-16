/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 03:20:44 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <stdlib.h>

using std::cout;
using std::endl;

// Default Constructor
ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubberycreation", 145, 137), _target("unknown") {
    cout << "ShrubberyCreationForm constructor was called" << endl;
}
// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    cout << "ShrubberyCreationForm " << _name << " was deconstructed" << endl;
}
// Constructor with target
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
	Form("Shrubberycreation", 145, 137), _target(target)
{
	return ;
}

// Copy Constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm)
{
    *this = ShrubberyCreationForm;
}
// Overload assignation
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ShrubberyCreationForm) 
{
    (void)ShrubberyCreationForm;
    return *this;
}



// surchage operateur d'insertion pour afficher le ShrubberyCreationForm trqlement
ostream &operator<<(ostream &o, const ShrubberyCreationForm &ShrubberyCreationForm) {
    o << "[" << ShrubberyCreationForm.getName() << "]" << std::endl;
	o << "\t" << "signed : " << ShrubberyCreationForm.getSigned() << std::endl;
	o << "\t" << "grade needed to sign : " << ShrubberyCreationForm.getGradeSign() << std::endl;
	o << "\t" << "grade needed to execute : " << ShrubberyCreationForm.getGradeExec() << std::endl;
    return o;
}
