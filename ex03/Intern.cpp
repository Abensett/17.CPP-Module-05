/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 03:20:44 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <stdlib.h>

using std::cout;
using std::endl;

// Default Constructor
Intern::Intern(void) {
    cout << "Intern constructor was called" << endl;
}
// Destructor
Intern::~Intern(void) {
    cout << "Intern was deconstructed" << endl;
}

// Copy Constructor
Intern::Intern(const Intern &Intern)
{
    *this = Intern;
}
// Overload assignation
Intern &Intern::operator=(const Intern &Intern) {
    (void)Intern;
    return *this;
}

static Form	*newShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static Form	*newRobotomy(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*newPresidential(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static int		getIndexForm(const std::string FormName)
{
	std::string		FormNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int				chosen = -1;

	for (int i = 0; i < 3; i++)
	{
		if (FormName == FormNames[i])
		{
			chosen = i;
			break;
		}
	}
	return (chosen);
}

Form	*Intern::makeForm(const std::string FormName, const std::string target) const
{
	Dico	FcnsDico[3] = {&newShrubbery, &newRobotomy, &newPresidential};
	int				choosen;
	Form			*formPtr = NULL;

	choosen = getIndexForm(FormName);
	std::cout << "Intern";
	if (choosen >= 0)
	{
		formPtr = FcnsDico[choosen](target);
		std::cout << " creates " <<  formPtr->getName() <<  " formular" << std::endl;
	}
	else
		std::cout << " cannot create " << FormName << " because "  << "it's unknown"  << std::endl;
	return (formPtr);

}
