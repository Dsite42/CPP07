/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:42:56 by cgodecke          #+#    #+#             */
/*   Updated: 2023/12/01 14:49:27 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include<iostream>

template<typename T_array, typename T_function>
void iter(T_array *array, int length, T_function function)
{
	for (int i = 0; i < length; i++)
	{
		function(array[i]);
	}
}

#endif
