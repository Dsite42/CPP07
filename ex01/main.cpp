/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:01:20 by cgodecke          #+#    #+#             */
/*   Updated: 2023/11/29 17:01:43 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void times_two(T array)
{
	
}

int main( void )
{
	int int_arr[] = {1, 2, 3};



	std::cout << int_arr[0];
	::iter(*int_arr, 3, times_two);

	return 0;
}
