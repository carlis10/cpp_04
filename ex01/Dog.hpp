/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:03:26 by carlos            #+#    #+#             */
/*   Updated: 2025/12/05 10:42:11 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_brain;
public:
	Dog();
	~Dog();
	Dog(const Dog & src);
	virtual void makeSound() const;
	Dog &operator=(Dog const & src);
};

#endif