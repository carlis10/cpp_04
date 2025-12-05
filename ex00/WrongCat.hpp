/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:20:44 by carlos            #+#    #+#             */
/*   Updated: 2025/12/05 10:16:06 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H
# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat & src);
	WrongCat &operator=(WrongCat const & src);
};

#endif