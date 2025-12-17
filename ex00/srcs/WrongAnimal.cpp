/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:44:38 by speters           #+#    #+#             */
/*   Updated: 2025/12/14 18:39:58 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "weirdly undefined..";
	std::cout << "[WrongAnimal] default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "[WrongAnimal] default constructor called" << std::endl;
	this->_type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "[WrongAnimal] copy constructor called" << std::endl;
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->_type = rhs._type;
	std::cout << "[WrongAnimal] assignment operator called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] destructor called" << std::endl;
}

/* *********************************************************************** */

void WrongAnimal::makeSound(void) const
{
	std::cout << MSOUND2 << "Grrrbbbbrrrrrrkkkrrrch... *grunts*" << RST << std::endl;
}

std::string const &WrongAnimal::getType(void) const
{
	return (this->_type);
}