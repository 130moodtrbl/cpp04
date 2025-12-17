/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:44:38 by speters           #+#    #+#             */
/*   Updated: 2025/12/17 18:37:48 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.class.hpp"

/**
 * 	Allocation dynamique du tableau d'idees a NULL
 */
Brain::Brain()
{
	std::cout << "[Brain] default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "";
}

Brain::Brain(const Brain &copy)
{
	std::cout << "[Brain] copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
}

Brain &Brain::operator=(const Brain& rhs)
{
	std::cout << "[Brain] assignment operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "[Brain] destructor called" << std::endl;
}

/* **************************** FUNCTIONS **************************** */
void	Brain::setIdea(int index, std::string thought)
{
	if (index >= 0 && index < 100)
		this->_ideas[index] = thought;
}

std::string	Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return (this->_ideas[index]);
	return ("");
}