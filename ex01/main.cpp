/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:32:30 by carlos            #+#    #+#             */
/*   Updated: 2025/12/05 10:46:01 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int num_animal = 4;
	const Animal *animal[num_animal];

	for (int i = 0; i < num_animal; i++)
	{
		if (i < (num_animal / 2))
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	for (int y = 0; y < num_animal; y++)
	{
		delete animal[y];
	}
	return 0;
}