/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:21:31 by carlos            #+#    #+#             */
/*   Updated: 2025/07/15 12:03:11 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->setName("Cat");	
}

Cat::~Cat()
{

}
Cat::Cat(const Animal & src) : Animal("Cat")
{
	*this = src;
}

void Cat::makeSound() const
{
	std::cout << "Miau" << std::endl;
}

Cat &Cat::operator=(Animal const & src)
{
	if (this != &src)
		this->_type = src.getType();
	return (*this);
}