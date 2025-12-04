/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:20:44 by carlos            #+#    #+#             */
/*   Updated: 2025/07/15 12:04:04 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include <string>
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
private:

public:
	Cat();
	~Cat();
	Cat(const Animal & src);
	virtual void makeSound() const;
	Cat &operator=(Animal const & src);
};

#endif