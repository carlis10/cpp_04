/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:09:50 by carlos            #+#    #+#             */
/*   Updated: 2025/12/05 11:08:56 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{

}

Dog::~Dog()
{

}
Dog::Dog(const Dog & src) : Animal (src)
{

}
void Dog::makeSound() const
{
	std::cout << "Guau" << std::endl;
}

Dog &Dog::operator=(Dog const & src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}