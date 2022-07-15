/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:25:41 by abensett          #+#    #+#             */
/*   Updated: 2022/07/15 19:20:59 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

int main()
{
	Bureaucrat a = Bureaucrat("Albert",30);
	Bureaucrat b = Bureaucrat("Harry",-1);
	Bureaucrat c = Bureaucrat("Jack",151);
	Bureaucrat d = Bureaucrat("Daryl",150);

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	a.upGrade();
	cout << a << endl;
	a.deGrade();
	cout << a << endl;
	d.deGrade();
	cout << d << endl;




}
