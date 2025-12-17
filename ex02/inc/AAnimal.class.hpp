/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:42:02 by speters           #+#    #+#             */
/*   Updated: 2025/12/15 16:22:56 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASS_HPP
# define AANIMAL_CLASS_HPP

#include <string>
#include <iostream>

// makeSound() log colours
#define MSOUND "\e[0;32m"
#define MSG_MAIN "\e[0;35m"
#define RST "\e[0m"

class	AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &copy);
		AAnimal &operator=(const AAnimal &rhs);
		virtual ~AAnimal();
		
		virtual void makeSound() const = 0;
		std::string	const &getType(void) const;
};

#endif