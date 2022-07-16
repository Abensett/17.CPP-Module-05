// /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 02:02:26 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP_
#define ROBOTOMYREQUESTFORM_HPP_


#include "Form.hpp"


class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(const std::string target);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &shrubberyForm);
		void					execute(const Bureaucrat &bureaucrat) const;
	private:
		const std::string	_target;
		RobotomyRequestForm(const RobotomyRequestForm &shrubberyForm);
		RobotomyRequestForm(void);

};


#endif
