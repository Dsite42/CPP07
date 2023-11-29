/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:00:35 by cgodecke          #+#    #+#             */
/*   Updated: 2023/11/29 16:39:11 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include<iostream>

template<typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T min(T &a, T &b)
{
	// NULL check?
	if (a < b)
		return (a);
	else if (b < a)
		return (b);
	else
		return (b);
}

template<typename T>
T max(T &a, T &b)
{
	if (a > b)
		return (a);
	else if (b > a)
		return (b);
	else
		return (b);
}

#endif
