/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:41:21 by speters           #+#    #+#             */
/*   Updated: 2025/12/15 16:36:47 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/AAnimal.class.hpp"
#include "inc/Cat.class.hpp"
#include "inc/Dog.class.hpp"
#include "inc/WrongAnimal.class.hpp"
#include "inc/WrongCat.class.hpp"
#include "inc/Brain.class.hpp"
#include <cstdlib>

#define MSG "\e[0;33m"

// int	ft_doesntcompile(void)
// {
// 	AAnimal *flop = new AAnimal;
// 	flop->makeSound();
// 	return (0);
// }

int	ft_sounds(void)
{
	Dog	shiro;
	shiro.makeSound();
	
	std::cout << std::endl;
	
	Cat boo;
	boo.makeSound();

	std::cout << "\nMake sound OK → methode pure utilisee" << std::endl;
	std::cout << std::endl;
	return (0);
}

int	ft_animal_sounds(void)
{
	int	nb_of_animals = 6;;
	AAnimal *animals[nb_of_animals];

	for (int i = 0; i < nb_of_animals / 2; i++)
		animals[i] = new Dog;
	for (int i = nb_of_animals / 2; i < nb_of_animals; i++)
		animals[i] = new Cat;
	std::cout << std::endl;
	for (int i = 0; i < nb_of_animals; i++)
		animals[i]->makeSound();
	std::cout << std::endl;
	for (int i = 0; i < nb_of_animals; i++)
		delete animals[i];

	std::cout << "\ntableaux de AAnimals OK → objs sont enfants" << std::endl;
	std::cout << std::endl;
	return (0);
}

int	ft_deepcopies(void)
{
	/* ************************************************************************ */
	std::cout << "======== Deep copies (dog) ========" << RST << std::endl;
	Dog	*a = new Dog;
	a->getIdeaBrain()->setIdea(0, "let's go on a walk!!");
	Dog *tmp_test = new Dog(*a);
	std::cout << "\n== Original" << std::endl;
	std::cout << a->getIdeaBrain() << std::endl;
	std::cout << "== After deep copy" << std::endl;
	std::cout << tmp_test->getIdeaBrain() << std::endl;
	std::cout << std::endl;

	/* ************************************************************************ */
	std::cout << "======== Deep copies (cat) ========" << RST << std::endl;
	Cat	*b = new Cat;
	b->getIdeaBrain()->setIdea(0, "lets take a nap");
	b->getIdeaBrain()->setIdea(2, "lets hunt a mouse");
	b->getIdeaBrain()->setIdea(3, "lets purrrrrrrr");
	Cat *tmp_testb = new Cat(*b);
	std::cout << "\n== Original" << std::endl;
	std::cout << b->getIdeaBrain() << std::endl;
	std::cout << "== After deep copy" << std::endl;
	std::cout << tmp_testb->getIdeaBrain() << std::endl;
	std::cout << std::endl;

	/* ************************************************************************ */
	delete a;
	delete b;
	delete tmp_test;
	delete tmp_testb;

	std::cout << "\ndeep copies OK" << std::endl;
	std::cout << std::endl;
	return (0);
}

int main(void)
{
	// std::cout << MSG << "TEST COMPILATION KO" << RST << std::endl;
	// ft_doesntcompile();
	// std::cout << "AAnimal KO → class abstraite pas instanciee" << std::endl;
	
	std::cout << MSG << "\n==== TESTS SOUNDS ====" << RST << std::endl;
	ft_sounds();

	std::cout << MSG << "\n==== TESTS ARRAY SOUNDS ====" << RST << std::endl;
	ft_animal_sounds();

	std::cout << MSG << "TESTS DEEP COPIES" << RST << std::endl;
	ft_deepcopies();
	return (0);
}