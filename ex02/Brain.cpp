/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:26:55 by carlos            #+#    #+#             */
/*   Updated: 2025/07/21 13:05:53 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
	for (size_t i = 0; i < this->_ideas->size(); i++)
	{
		this->_ideas[i] = "default idea";
	}
}

Brain::~Brain()
{
	std::cout << "Brain deleted" << std::endl;
}

Brain::Brain(Brain const & src)
{
	*this = src;
}

Brain &Brain::operator=(const Brain &src)
{
	if (this != &src)
		for (size_t i = 0; i < src._ideas->size(); i++)
		{
			this->_ideas[i] = src._ideas[i]; 
		}
	return (*this);
}