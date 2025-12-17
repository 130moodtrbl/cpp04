/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:16:27 by speters           #+#    #+#             */
/*   Updated: 2025/12/17 17:55:50 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include <string>
#include <iostream>
#include "Animal.class.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &rhs);
		~Dog();

		virtual void makeSound() const;
};

#endif