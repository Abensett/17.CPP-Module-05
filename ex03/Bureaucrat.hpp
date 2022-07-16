/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 02:02:26 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include "Form.hpp"
#include <iostream>
#include <string>

using std::string;
using std::ostream;

class Form;
class Bureaucrat
{
 	public:
		Bureaucrat(void);
		~Bureaucrat(void);
		explicit Bureaucrat(const string name, int grade);
		Bureaucrat(const Bureaucrat &Bureaucrat);
		Bureaucrat &operator=(const Bureaucrat &Bureaucrat);

		string 	getName(void) const;
		int 	getGrade(void) const;
		void	upGrade(void);
		void	deGrade(void);
		void	signForm(Form &form) const;
		void	executeForm(const Form &form) const;

		class GradeTooHighException : public std::exception				// first exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat::exception : Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat::exception : Grade is too low");
				}
		};


	private:
		const string  	_name;
		int		_grade;
};

ostream &operator<<(ostream &o, const Bureaucrat &Bureaucrat);

#endif
