/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:44:38 by speters           #+#    #+#             */
/*   Updated: 2025/12/15 15:52:39 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.class.hpp"

Animal::Animal()
{
	this->_type = "base animal";
	// TODO check si type of the Animal class can be left empty or set to the value of your choice
	std::cout << "[Animal] default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout << "[Animal] param constructor called → " << this->_type << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "[Animal] copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	std::cout << "[Animal] assignment operator called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "[Animal] destructor called" << std::endl;
}

/* *********************************************************************** */
void Animal::makeSound(void) const
{
	std::cout << MSOUND << "*grunts*" << RST << std::endl;
}

std::string const &Animal::getType(void) const
{
	return (this->_type);
}
