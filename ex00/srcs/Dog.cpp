/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:15:36 by speters           #+#    #+#             */
/*   Updated: 2025/12/17 17:02:08 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.class.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "[Dog] default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal("Dog")
{
	*this = copy;
	std::cout << "[Dog] copy constructor called → " << this->_type << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	std::cout << "[Dog] assignement operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Dog] destructor called" << std::endl;
}

/* *********************************************************************** */

void Dog::makeSound() const
{
	std::cout << MSOUND << "woof woof" << RST << std::endl;
}