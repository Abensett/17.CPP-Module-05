/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:25:41 by abensett          #+#    #+#             */
/*   Updated: 2022/07/16 15:52:36 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

using std::cout;
using std::endl;

int main()
{
	Form 		f("SuperFormulaire", 12, 3);
	Form 		f2("SuperFormulaire2", 10, 3);
	Bureaucrat	bob("Bob", 11);

	std::cout << f << std::endl;
	std::cout << f2 << std::endl;
	std::cout << bob << std::endl;

	bob.signForm(f);
	bob.signForm(f2);
	bob.upGrade();
	f2.beSigned(bob);

	std::cout << std::endl << f << std::endl;
	std::cout << std::endl << f2 << std::endl;

	return (0);

}
