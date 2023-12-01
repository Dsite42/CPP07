/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:01:20 by cgodecke          #+#    #+#             */
/*   Updated: 2023/12/01 15:04:15 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void times_two(int &i)
{
	i *= 2;
}

void to_upper(std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
}

int main( void )
{
	std::cout << "\033[33m" << "Test int array\n"<< "\033[0m";
	int int_arr[] = {1, 2, 3};

	::iter(int_arr, 3, times_two);
	for (int i = 0; i < 3; i++)
		std::cout << int_arr[i] << std::endl;

	std::cout << "\033[33m" << "Test string array\n"<< "\033[0m";
	std::string str_arr[] = {"Hello", "World", "!"};
	::iter(str_arr, 3, to_upper);
	for (int i = 0; i < 3; i++)
		std::cout << str_arr[i] << std::endl;


	return 0;
}
