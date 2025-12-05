/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:36:35 by carlos            #+#    #+#             */
/*   Updated: 2025/12/05 11:29:12 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H
# include <string>
# include <iostream>

class AAnimal
{
protected:
	std::string _type;
public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(AAnimal const & src);
	virtual ~AAnimal();
	virtual void makeSound() const = 0;
	void setName(std::string type);
	std::string getType() const;
	AAnimal &operator=(AAnimal const & src);
};

#endif
