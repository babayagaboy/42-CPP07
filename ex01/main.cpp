/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 17:23:58 by hgutterr          #+#    #+#             */
/*   Updated: 2026/07/09 17:23:59 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename V>
void increment(V &value) {
	value += 1;
}

int main()
{
	int arr[] = {1, 2, 3};
	ITER_HPP::iter(arr, 3, increment);
	for (int n = 0; n < 3; ++n) {
		std::cout << "arr[" << n << "]: " << arr[n] << std::endl;
	}
}