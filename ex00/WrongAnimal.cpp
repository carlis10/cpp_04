/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:50:46 by carlos            #+#    #+#             */
/*   Updated: 2025/12/05 10:29:05 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	
}

WrongAnimal::WrongAnimal (WrongAnimal const & src)
{
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal sound" << std::endl;
}
std::string WrongAnimal::getType() const
{
	return (_type);
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal & src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}