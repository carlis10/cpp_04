/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:09:50 by carlos            #+#    #+#             */
/*   Updated: 2025/07/15 12:02:59 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->setName("Dog");	
}

Dog::~Dog()
{

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