/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:44:38 by speters           #+#    #+#             */
/*   Updated: 2025/12/15 16:23:08 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.class.hpp"

AAnimal::AAnimal()
{
	this->_type = "base animal";
	// TODO check si type of the Animal class can be left empty or set to the value of your choice
	std::cout << "[Animal] default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	this->_type = type;
	std::cout << "[Animal] param constructor called → " << this->_type << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	*this = copy;
	std::cout << "[Animal] copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	std::cout << "[Animal] assignment operator called" << std::endl;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "[Animal] destructor called" << std::endl;
}

/* *********************************************************************** */
std::string const &AAnimal::getType(void) const
{
	return (this->_type);
}
