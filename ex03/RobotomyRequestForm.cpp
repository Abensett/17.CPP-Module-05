/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 03:20:44 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

using std::cout;
using std::endl;

// Default Constructor
RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequest", 72, 45), _target("unknown") {
    cout << "RobotomyRequestForm constructor was called" << endl;
}
// Destructor
RobotomyRequestForm::~RobotomyRequestForm(void) {
    cout << "RobotomyRequestForm was deconstructed" << endl;
}
// Constructor with target
RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
	Form("RobotomyRequest", 72, 45), _target(target)
{
	return ;
}

// Copy Constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm)
{
    *this = RobotomyRequestForm;
}
// Overload assignation
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &RobotomyRequestForm) 
{
    (void)RobotomyRequestForm;
    return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	int	robotomized;

	this->Form::executeCheck(bureaucrat);
	std::cout << endl << "*bwzzbwzbwb zw bzwbzw * "<< endl;
	robotomized = rand() % 2;
	if (robotomized)
		std::cout << _target <<  " was robotomized." << std::endl;
	else
		std::cout <<  _target <<  " was not robotomized." << std::endl;
	
}