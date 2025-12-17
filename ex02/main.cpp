/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:41:21 by speters           #+#    #+#             */
/*   Updated: 2025/12/17 18:41:25 by speters          ###   ########.fr       */
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
	int	nb_of_animals = 6;
	AAnimal **animals = new AAnimal*[nb_of_animals];

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
	
	delete[] animals;

	std::cout << "\ntableaux de AAnimals OK → objs sont enfants" << std::endl;
	std::cout << std::endl;
	return (0);
}

int	ft_deepcopies(void)
{
	/* ************************************************************************ */
	std::cout << MSG << "======== Deep copies (dog) ========" << RST << std::endl;
	// on creer le premier dog → l'OG, la source
	Dog	*a = new Dog;
	a->getIdeaBrain()->setIdea(0, "[og idea] lets go on a walk");
	
	// on creer une copie → deep copy va se faire
	Dog *tmp_test = new Dog(*a);
	// on peut changer l'og dcp
	tmp_test->getIdeaBrain()->setIdea(0, "[new idea] lets bark instead");

	std::cout << "\n== Original" << std::endl;
	std::cout << "[adresse]: " << a->getIdeaBrain() << std::endl;
	std::cout << "[content]: " << a->getIdeaBrain()->getIdea(0) << std::endl;
 	std::cout << "== After deep copy" << std::endl;
	std::cout << "[adresse]: " << tmp_test->getIdeaBrain() << std::endl;
	std::cout << "[content]: " << tmp_test->getIdeaBrain()->getIdea(0) << std::endl;
	std::cout << std::endl;

	/* ************************************************************************ */
	std::cout << MSG << "======== Deep copies (cat) ========" << RST << std::endl;
	Cat	*b = new Cat;
	b->getIdeaBrain()->setIdea(0, "(idea 0) lets take a nap");
	b->getIdeaBrain()->setIdea(2, "(idea 2) lets hunt a mouse");
	// b->getIdeaBrain()->setIdea(36, "(idea 36) lets purrrrrrrr");

	Cat *tmp_testb = new Cat(*b);
	tmp_testb->getIdeaBrain()->setIdea(2, "(changing idea 2) sparing the mouse!!");
	// tmp_testb->getIdeaBrain()->setIdea(36, "(changing idea 36) NEW PURRRRRRRR");

	std::cout << "\n== Original" << std::endl;
	std::cout << "[address]: " << b->getIdeaBrain() << std::endl;
	std::cout << "[content]: " << b->getIdeaBrain()->getIdea(2) << std::endl;
	std::cout << "== After deep copy" << std::endl;
	std::cout << "[address]: " << tmp_testb->getIdeaBrain() << std::endl;
	std::cout << "[content]: " << tmp_testb->getIdeaBrain()->getIdea(2) << std::endl;
	std::cout << std::endl;

	/* ************************************************************************ */
	delete a;
	delete b;
	delete tmp_test;
	delete tmp_testb;
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