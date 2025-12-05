/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:20:44 by carlos            #+#    #+#             */
/*   Updated: 2025/12/05 11:34:30 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include <string>
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain *_brain;
public:
	Cat();
	~Cat();
	Cat(const Cat & src);
	virtual void makeSound() const;
	Cat &operator=(Cat const & src);
};

#endif