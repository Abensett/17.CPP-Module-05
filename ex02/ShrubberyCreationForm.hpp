// /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 02:02:26 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_HPP_
#define ShrubberyCreationForm_HPP_


#include "Form.hpp"


class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(const std::string target);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &shrubberyForm);
		void					execute(const Bureaucrat &bureaucrat) const;
	private:
		const std::string	_target;
		ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyForm);
		ShrubberyCreationForm(void);

};

ostream &operator<<(ostream &o, const ShrubberyCreationForm &ShrubberyCreationForm);

#endif
