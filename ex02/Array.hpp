/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 19:35:07 by britela-          #+#    #+#             */
/*   Updated: 2026/11/21 19:35:20 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <exception>

template <class T>
class Array{
	private :
		T *_array; // Mon tab doit etre un * car il sa taille sera choisi avec new[]
		std::size_t _sizeArray;

	public :
		// FCO + constructor
		Array();
		Array(unsigned int n);
		Array(const Array &src);
		Array &operator=(const Array &rhs);
		~Array();

		// OP
		T &operator[](std::size_t i);
		const T &operator[](std::size_t i) const;

		// Exception
		class OutException :  public std::exception{
			public :
				virtual const char *what() const throw();
		};

		// methode
		std::size_t	size() const;
};

#include "Array.tpp"

#endif