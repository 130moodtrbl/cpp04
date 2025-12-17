/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:16:27 by speters           #+#    #+#             */
/*   Updated: 2025/12/15 16:15:48 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include <string>
#include <iostream>
#include "AAnimal.class.hpp"
#include "Brain.class.hpp"

class Dog : public AAnimal
{
	private:
		Brain	*_brain;
	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &rhs);
		~Dog();

		virtual void makeSound() const;
		Brain	*getIdeaBrain() const;
};

#endif