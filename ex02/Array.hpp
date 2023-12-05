/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:40:26 by cgodecke          #+#    #+#             */
/*   Updated: 2023/12/05 16:41:19 by cgodecke         ###   ########.fr       */
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
		T *_arr;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &copy);
		~Array();

		Array &operator=(Array const &copy);
		T &operator[](unsigned int i);
		unsigned int size() const;
	
		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

};

template <typename T>
Array<T>::Array() : _arr(NULL), _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n)
{}

template <typename T>
Array<T>::Array(Array const &copy) : _arr(new T[copy._size]), _size(copy._size)
{
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = copy._arr[i];
}

template <typename T>
Array<T>::~Array()
{
	delete [] _arr;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &copy)
{
	if (this != &copy)
	{
		delete [] _arr;
		_size = copy._size;
		_arr = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_arr[i] = copy._arr[i];
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw OutOfBoundsException();
	return (_arr[i]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Index out of bounds");
}

#endif
