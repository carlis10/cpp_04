/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:50:46 by carlos            #+#    #+#             */
/*   Updated: 2025/12/05 09:53:28 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	
}

Animal::Animal(std::string type): _type(type)
{
	
}

Animal::Animal (Animal const & src)
{
	*this = src;
}

Animal::~Animal()
{
	
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}

Animal &Animal::operator=(const Animal & src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}