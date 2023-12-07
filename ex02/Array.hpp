/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:40:26 by cgodecke          #+#    #+#             */
/*   Updated: 2023/12/07 12:34:10 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array
{
	private:
		T				*_arr;
		unsigned int	_size;
	public:
		// Constructors
		Array();
		Array(unsigned int n);
		Array(Array const &copy);
		~Array();

		// Operators
		Array			&operator=(Array const &copy);
		T				&operator[](unsigned int i);

		// Methods
		unsigned int	size() const;
	
		// Exceptions
		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

};
# include "Array.tpp"

#endif
