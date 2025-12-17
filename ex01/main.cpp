/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speters <speters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:41:21 by speters           #+#    #+#             */
/*   Updated: 2025/12/17 18:35:51 by speters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.class.hpp"
#include "inc/Cat.class.hpp"
#include "inc/Dog.class.hpp"
#include "inc/WrongAnimal.class.hpp"
#include "inc/WrongCat.class.hpp"
#include "inc/Brain.class.hpp"
#include <cstdlib>

#define MSG "\e[0;33m"

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

int	ft_animal_sounds(int ac, char **av)
{
	// PARSING & USAGE
	if (ac == 1 || ac > 2) {
		std::cerr << "[Usage]" << " ./ex01 [nb_of_animals]" << std::endl;
		return (1);
	}
	
	// PARSING & USAGE
	int	nb_of_animals = atoi(av[1]);
	if (nb_of_animals % 2 != 0 || nb_of_animals < 0 || nb_of_animals >= 2147483647) {
		std::cerr << "Please enter a valid even number!" << std::endl;
		std::cerr << "[Usage]" << " ./ex01 [nb_of_animals]" << std::endl;
		return (1);
	}
	
	// ALLOCATION: dog/cat & makeSound();
	Animal **animals = new Animal*[nb_of_animals];
	if (ac == 2)
	{
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
	}
	return (0);
}

int	ft_deepcopies(int ac, char **av)
{
	(void)ac;
	(void)av;
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


int main(int ac, char **av)
{
	std::cout << std::endl;
	std::cout << MSG << "TESTS ARRAY SOUNDS" << RST << std::endl;
	ft_animal_sounds(ac, av);
	std::cout << std::endl;
	std::cout << MSG << "TESTS DEEP COPIES" << RST << std::endl;
	ft_deepcopies(ac, av);
	std::cout << std::endl;
	return (0);
}