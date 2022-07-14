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

#include <iostream>
#include <string>

using std::string;
using std::ostream;

class Bureaucrat
{
 	public:
		Bureaucrat(void);
		~Bureaucrat(void);
		explicit Bureaucrat(string name, int grade);
		Bureaucrat(const Bureaucrat &Bureaucrat);
		Bureaucrat &operator=(const Bureaucrat &Bureaucrat);

		string 	getName(void) const;
		int 	getGrade(void) const;
	protected:
		string 	_name;
		int		_grade;
};

ostream &operator<<(ostream &o, const Bureaucrat &Bureaucrat);

#endif
