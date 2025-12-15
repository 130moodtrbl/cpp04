/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:41:21 by speters           #+#    #+#             */
/*   Updated: 2025/12/14 18:38:39 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.class.hpp"
#include "inc/Cat.class.hpp"
#include "inc/Dog.class.hpp"
#include "inc/WrongAnimal.class.hpp"
#include "inc/WrongCat.class.hpp"

// subject's
// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
// 	return 0;
// }

int main(void)
{
	/* *************************** ANIMAL ******************************* */
	std::cout << "== Instance de la classe Animal ==" << std::endl;
	const Animal *animal = new Animal();
	animal->makeSound();
	delete animal;
	std::cout << std::endl;

	/* ******************************* CAT ******************************* */
	std::cout << "== Instance de la classe Cat ==" << std::endl;
	const Cat *boo = new Cat();
	std::cout << MSG_MAIN << "boo is a " << boo->getType() << " 🐱" << RST << std::endl;
	boo->makeSound();
	delete boo;
	std::cout << std::endl;
	
	/* ****************************** DOG ******************************* */
	std::cout << "== Instance de la classe Dog ==" << std::endl;
	const Dog *shiro = new Dog();
	std::cout << MSG_MAIN << "shiro is a " << boo->getType() << " 🐶" << RST << std::endl;
	shiro->makeSound();
	delete shiro;
	std::cout << std::endl;

	/* **************************** WRONG CAT *************************** */
	std::cout << "== Instance de la classe WrongCat ==" << std::endl;
	const WrongCat *wcat = new WrongCat();
	std::cout << MSG_MAIN << "his is a " << wcat->getType() << RST << std::endl;
	wcat->makeSound();
	delete wcat;
	std::cout << std::endl;
	
	/* *************************** WRONG ANIMAL ************************** */
	std::cout << "== Instance de la classe WrongAnimal ==" << std::endl;
	const WrongAnimal *wanimal = new WrongAnimal();
	std::cout << MSG_MAIN << "this is " << wanimal->getType() << RST << std::endl;
	wanimal->makeSound();
	delete wanimal;
	std::cout << std::endl;
}