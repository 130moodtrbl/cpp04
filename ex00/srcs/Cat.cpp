/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:21:38 by speters           #+#    #+#             */
/*   Updated: 2025/12/17 17:02:02 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.class.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "[Cat] default constructor called" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal("Cat")
{
	*this = copy;
	std::cout << "[Cat] copy constructor called → " << this->_type << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	std::cout << "[Cat] assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Cat] destructor called" << std::endl;
}

/* *********************************************************************** */

void Cat::makeSound() const
{
	std::cout << MSOUND << "mmeooowww" << RST << std::endl;
}