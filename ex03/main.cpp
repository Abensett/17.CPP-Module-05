/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:25:41 by abensett          #+#    #+#             */
/*   Updated: 2022/07/16 19:24:02 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

using std::cout;
using std::endl;


static void     printTitle(std::string title)
{
        std::string     toPrint;
        int     size = 68;
        int     n;

        toPrint = " " + title + " ";
        n = toPrint.size();
        if (n > size)
        {
                toPrint = toPrint.substr(0, size - 2);
                toPrint[size - 4] = '.';
                toPrint[size - 3] = ' ';
                n = toPrint.size();
        }
        std::cout << std::endl << std::setfill('=') << std::setw(size) << "" << std::endl;
        std::cout << std::setw(size / 2) << toPrint.substr(0, n / 2);
        std::cout << toPrint.substr(n / 2, n - n / 2);
        std::cout << std::setfill('=') << std::setw(size - size / 2 - n + n / 2) << "" << std::endl;
        std::cout << std::setfill('=') << std::setw(size) << "" << std::endl;
}


int	main(void)
{
	srand(time(NULL));

	printTitle("Formular Creation");
	Bureaucrat	pres("President", 1);
	Intern		someRandomIntern;
	Form		*forms[4];

	forms[0] = someRandomIntern.makeForm("shrubbery creation", "1");
	forms[1] = someRandomIntern.makeForm("robotomy request", "2");
	forms[2] = someRandomIntern.makeForm("presidential pardon", "3");
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