/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:25:41 by abensett          #+#    #+#             */
/*   Updated: 2022/07/18 17:32:40 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

using std::cout;
using std::endl;

int	main(void)
{

	Bureaucrat	pres("President", 1);
	Intern		someRandomIntern;
	Form		*forms[4];

	forms[0] = someRandomIntern.makeForm("shrubbery creation", "Target1");
	forms[1] = someRandomIntern.makeForm("robotomy request", "Target2");
	forms[2] = someRandomIntern.makeForm("presidential pardon", "Target3");
	forms[3] = someRandomIntern.makeForm("formular", "Target4");

	for (int i = 0; i < 4; i++)
	{
		if (forms[i])
		{
			std::cout << std::endl << *(forms[i]);
			pres.signForm(*(forms[i]));
			pres.executeForm(*(forms[i]));
		}
	}

	for (int i = 0; i < 4; i++)
		delete forms[i];
	return (0);
}
