/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:22:38 by abensett          #+#    #+#             */
/*   Updated: 2022/07/16 19:18:03 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <stdlib.h>

using std::cout;
using std::endl;

// Default Constructor
PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardon", 25, 5), _target("Unnamed") {
    cout << "PresidentialPardonForm constructor was called" << endl;
}
// Destructor
PresidentialPardonForm::~PresidentialPardonForm(void) {
    cout << "PresidentialPardonForm was deconstructed" << endl;
}
// Constructor with target
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
 Form("Presidential pardon", 25, 5), _target(target)
{
	return ;
}

// Copy Constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &PresidentialPardonForm)
{
    *this = PresidentialPardonForm;
}
// Overload assignation
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &PresidentialPardonForm) 
{
    (void)PresidentialPardonForm;
    return *this;
}


void	PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
	this->Form::executeCheck(bureaucrat);
	std::cout << _target << " was forgiven by Zafor Beeblebrox" << std::endl;

}

