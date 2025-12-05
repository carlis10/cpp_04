/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:50:46 by carlos            #+#    #+#             */
/*   Updated: 2025/07/15 11:38:38 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	
}

AAnimal::AAnimal(std::string type): _type(type)
{
	
}

AAnimal::AAnimal (AAnimal const & src)
{
	*this = src;
}

AAnimal::~AAnimal()
{
	
}

void AAnimal::setName(std::string type)
{
	_type = type;
}
std::string AAnimal::getType() const
{
	return (_type);
}

AAnimal &AAnimal::operator=(const AAnimal & src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}