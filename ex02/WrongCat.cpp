/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:21:31 by carlos            #+#    #+#             */
/*   Updated: 2025/12/05 10:02:50 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{

}

WrongCat::~WrongCat()
{

}
WrongCat::WrongCat(const WrongCat & src)
{
	*this = src;
}

WrongCat &WrongCat::operator=(WrongCat const & src)
{
	if (this != &src)
		this->_type = src.getType();
	return (*this);
}