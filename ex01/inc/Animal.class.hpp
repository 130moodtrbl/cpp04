/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:42:02 by speters           #+#    #+#             */
/*   Updated: 2025/12/15 15:52:10 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

#include <string>
#include <iostream>

// makeSound() log colours
#define MSOUND "\e[0;32m"
#define MSG_MAIN "\e[0;35m"
#define RST "\e[0m"

class	Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &copy);
		Animal &operator=(const Animal &rhs);
		virtual ~Animal();
		
		virtual void makeSound() const;
		std::string	const &getType(void) const;
};

#endif