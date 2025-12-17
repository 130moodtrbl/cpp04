/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:20:46 by speters           #+#    #+#             */
/*   Updated: 2025/12/15 16:15:53 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include <string>
#include <iostream>
#include "AAnimal.class.hpp"
#include "Brain.class.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*_brain;
	public:
		Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &rhs);
		~Cat();

		virtual void makeSound() const;
		Brain	*getIdeaBrain() const;
};

#endif