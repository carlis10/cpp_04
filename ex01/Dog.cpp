/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:09:50 by carlos            #+#    #+#             */
/*   Updated: 2025/12/05 11:17:23 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog created" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog deleted" << std::endl;
	delete _brain;
}
Dog::Dog(const Dog & src) : Animal (src)
{
	_brain = new Brain(*(src._brain));
}
void Dog::makeSound() const
{
	std::cout << "Guau" << std::endl;
}

Dog &Dog::operator=(Dog const & src)
{
	if (this != &src)
	{
		delete _brain;
		this->_type = src._type;
		this->_brain = new Brain(*(src._brain));
	}
	return (*this);
}