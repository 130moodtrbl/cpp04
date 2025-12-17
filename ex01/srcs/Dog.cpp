/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:15:36 by speters           #+#    #+#             */
/*   Updated: 2025/12/17 18:22:04 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.class.hpp"
#include "../inc/Brain.class.hpp"

/**
 * 	NOTE
 * 	Init dynamique
 */
Dog::Dog() : Animal("Dog")
{
	std::cout << "[Dog] default constructor called" << std::endl;
	this->_brain = new Brain();
}

/**
 *	 NOTE	
 * 	Copie Profonde, "vraie" copie, les sous-objets sont dupliques, operation + couteuse
 * 	→ on ne copie pas le pointeur, on creer un nouveau Brain
 */
Dog::Dog(const Dog &copy) : Animal("Dog")
{
	std::cout << "[Dog] deep copy constructor called → " << this->_type << std::endl;
	this->_brain = new Brain(*copy._brain);
}

/**
 * 	NOTE
 * 	Deep Copy → on supprime l'ancien brain pour en creer un nouveau
 */
Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "[Dog] assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Dog] destructor called" << std::endl;
	delete this->_brain;
}

/* *********************************************************************** */

void Dog::makeSound() const
{
	std::cout << MSOUND << "woof woof" << RST << std::endl;	
}

Brain	*Dog::getIdeaBrain() const
{
	return (this->_brain);
}
