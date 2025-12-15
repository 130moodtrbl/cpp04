/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:42:41 by speters           #+#    #+#             */
/*   Updated: 2025/12/14 16:30:11 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

#include <string>
#include <iostream>
#include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		WrongCat &operator=(const WrongCat &rhs);
		virtual ~WrongCat();
		
		virtual void makeSound() const;
};

#endif