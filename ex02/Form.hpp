/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 02:02:26 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP_
#define Form_HPP_

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
using std::string;
using std::ostream;

class Bureaucrat;
class Form
{
 	public:
		Form(void);
		~Form(void);
		explicit Form(const string name, int grade_signing, int grade_excuting);
		Form(const Form &Form);
		Form &operator=(const Form &Form);

		string 	getName(void) const;
		int 	getGradeSign(void) const;
		int 	getGradeExec(void) const;
		bool	getSigned(void) const;
		void	beSigned(const Bureaucrat &Bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form::exception : Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form::exception : Grade is too low");
				}
		};


	private:
		const string  	_name;
		bool 			_signed;
		const int		_grade_signing;
		const int		_grade_executing;
};

ostream &operator<<(ostream &o, const Form &Form);

#endif
