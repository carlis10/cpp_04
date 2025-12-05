/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:20:44 by carlos            #+#    #+#             */
/*   Updated: 2025/12/05 10:28:13 by cravegli         ###   ########.fr       */
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
	virtual ~Cat();
	Cat(const Cat & src);
	virtual void makeSound() const;
	Cat &operator=(Cat const & src);
};

#endif