/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:45:56 by speters           #+#    #+#             */
/*   Updated: 2025/12/15 15:53:25 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.class.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
	std::cout << "[WrongCat] default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal("WrongCat")
{
	*this = copy;
	std::cout << "[WrongCat] constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	this->_type = rhs._type;
	std::cout << "[WrongCat] assignment operator called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] destructor called" << std::endl;
}

/* *********************************************************************** */
void WrongCat::makeSound() const
{
	std::cout << MSOUND2 << "mmooo moooooo mooooooo" << RST << std::endl;
}