/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 19:36:46 by britela-          #+#    #+#             */
/*   Updated: 2026/11/21 19:36:49 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

//template <typename T>
template <class T> // class indique que T est un parametre type
void swap(T &a, T &b){
	T tmp = a;
	a = b;
	b = tmp;
}

template <class T>
T min(const T &a, const T &b){
	if (a < b){
		return (a);
	} else {
		return (b);
	}
}

template <class T>
T max(const T a, const T b){
	if (a > b){
		return (a);
	} else {
		return (b);
	}
}

#endif