/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:21:31 by carlos            #+#    #+#             */
/*   Updated: 2025/12/05 11:14:28 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat created" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat deleted" << std::endl;
	delete _brain;
}
Cat::Cat(const Cat & src) : Animal(src)
{
	_brain = new Brain(*(src._brain));
}

void Cat::makeSound() const
{
	std::cout << "Miau" << std::endl;
}

Cat &Cat::operator=(Cat const & src)
{
	if (this != &src)
	{
		delete _brain;
		this->_type = src._type;
		this->_brain = new Brain(*(src._brain));
	}
	return (*this);
}