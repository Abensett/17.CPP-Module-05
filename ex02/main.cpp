/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:25:41 by abensett          #+#    #+#             */
/*   Updated: 2022/07/18 17:28:12 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include "Form.hpp"

using std::cout;
using std::endl;


int	main(void)
{

	Form		*shrub = new ShrubberyCreationForm("myfile");
	Bureaucrat	corr("The target", 1);
	Bureaucrat	me("Harry", 140);

	corr.executeForm(*shrub);
	corr.signForm(*shrub);
	std::cout << *shrub << std::endl;
	std::cout << corr << std::endl;
	me.executeForm(*shrub);
	delete shrub;


	Form		*robotomy = new RobotomyRequestForm("The target");
	Bureaucrat	me2("Harry2", 1);

	me2.executeForm(*robotomy);
	me2.signForm(*robotomy);
	me2.executeForm(*robotomy);
	me2.executeForm(*robotomy);
	me2.executeForm(*robotomy);
	me2.executeForm(*robotomy);
	delete robotomy;


	Form		*presidential = new PresidentialPardonForm("The target");
	Bureaucrat	me3("Harry3", 6);

	me3.executeForm(*presidential);
	me3.signForm(*presidential);
	me3.executeForm(*presidential);
	me3.upGrade();
	me3.executeForm(*presidential);
	delete presidential;

	return (0);
}
