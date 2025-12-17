/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:42:02 by speters           #+#    #+#             */
/*   Updated: 2025/12/15 11:57:31 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

#include <string>
#include <iostream>

#define MSOUND2 "\e[0;32m"
#define RST "\e[0m"

class Brain
{
	public:
		Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &rhs);
		~Brain();

		void	setIdea(int index, std::string thought);
		std::string	getIdea(int index) const;

	private:
		std::string	_ideas[100];
};

#endif