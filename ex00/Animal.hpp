/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:36:35 by carlos            #+#    #+#             */
/*   Updated: 2025/12/05 10:22:55 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# include <string>
# include <iostream>

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(std::string type);
	Animal(Animal const & src);
	virtual ~Animal();
	virtual void makeSound() const;
	Animal &operator=(Animal const & src);
	std::string getType() const;
};

#endif
