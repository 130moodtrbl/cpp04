/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:21:38 by speters           #+#    #+#             */
/*   Updated: 2025/12/17 18:21:55 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.class.hpp"

/**
 * 	NOTE
 * 	Init dynamique
 */
Cat::Cat() : Animal("Cat")
{
	std::cout << "[Cat] default constructor called" << std::endl;
	this->_brain = new Brain();
}

/**
 *	 NOTE	
 * 	Copie Profonde, "vraie" copie, les sous-objets sont dupliques, operation + couteuse
 * 	→ on ne copie pas le pointeur, on creer un nouveau Brain
 */
Cat::Cat(Cat const &copy) : Animal("Cat")
{
	std::cout << "[Cat] deep copy constructor called → " << this->_type << std::endl;
	this->_brain = new Brain(*copy._brain);
}

/**
 * 	NOTE
 * 	Deep Copy → on supprime l'ancien brain pour en creer un nouveau
 */
Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "[Cat] assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Cat] destructor called" << std::endl;
	delete this->_brain;
}

/* ******************************* FUNCTIONS ******************************* */
void Cat::makeSound() const
{
	std::cout << MSOUND << "mmeooowww" << RST << std::endl;
}

Brain	*Cat::getIdeaBrain() const
{
	return (this->_brain);
}