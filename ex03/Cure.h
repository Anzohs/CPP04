/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 19:06:15 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/25 19:20:05 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.h"


class Cure : public AMateria {
	public :
		Cure(void);
		Cure(const Cure& other);
		Cure& operator=(const Cure& other);
		~Cure();
		std::string getType(void) const;
		Cure* clone(void) const;
};
