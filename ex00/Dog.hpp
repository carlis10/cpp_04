/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:03:26 by carlos            #+#    #+#             */
/*   Updated: 2025/07/15 12:04:08 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include <string>
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
private:

public:
	Dog();
	~Dog();
	Dog(const Animal & src);
	virtual void makeSound() const;
	Dog &operator=(Animal const & src);
};

#endif