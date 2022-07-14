/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 03:20:44 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

// Default Constructor
Bureaucrat::Bureaucrat(void) : _name("Unnamed"), _grade(150) {
    cout << "Bureaucrat constructor was called" << endl;
}
// Destructor
Bureaucrat::~Bureaucrat(void) {
    cout << "Bureaucrat " << _name << " was deconstructed" << endl;
}
// Constructor with type
Bureaucrat::Bureaucrat(string name, int grade) :_name(name), _grade(grade){
    cout << "Bureaucrat " << name << " was constructed" << endl;
}
// Copy Constructor
Bureaucrat::Bureaucrat(const Bureaucrat &Bureaucrat) {
    *this = Bureaucrat;
}

// Getter for name
string Bureaucrat::getName(void) const {
    return _name;
}
// Setter for grade
string Bureaucrat::getGrade(void) const {
    return _grade;
}

// surchage operateur d'insertion pour afficher le bureaucrat trqlement
ostream &operator<<(ostream &o, const Bureaucrat &Bureaucrat) {
        cout << Bureaucrat._name << ", bureaucrat grade " <<_Bureaucrat._type  << "." <<endl;

}
