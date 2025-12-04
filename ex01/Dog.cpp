/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:09:50 by carlos            #+#    #+#             */
/*   Updated: 2025/07/21 13:08:33 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog created" << std::endl;
	this->setName("Dog");
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog deleted" << std::endl;
	delete _brain;
}
Dog::Dog(const Animal & src) : Animal("Dog")
{
	*this = src;
}
void Dog::makeSound() const
{
	std::cout << "Guau" << std::endl;
}

Dog &Dog::operator=(Animal const & src)
{
	if (this != &src)
		this->_type = src.getType();
	return (*this);
}