/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:36:35 by carlos            #+#    #+#             */
/*   Updated: 2025/12/05 10:15:53 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
# include <string>
# include <iostream>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const & src);
	~WrongAnimal();
	void makeSound() const;
	std::string getType() const;
	WrongAnimal &operator=(WrongAnimal const & src);
};

#endif
