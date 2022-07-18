/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:25:41 by abensett          #+#    #+#             */
/*   Updated: 2022/07/18 16:39:01 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

int main()
{
	Bureaucrat a = Bureaucrat("Albert",1);
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
	d.upGrade();
	cout << d << endl;
}
