/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 13:06:54 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/24 13:06:55 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T, typename F>
void iter(T arr, size_t len, F func)
{
	if (!arr)
		return;

	for (size_t i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}


void printInt(int i)
{
	std::cout << i << std::endl;
}

void printString(std::string str)
{
	std::cout << str << std::endl;
}

void inc(int & i)
{
	i++;
}

int main(void)
{
	int arrInt[] = {42, 123, 543, 423, 98};
	std::string arrString[] = {"ok", "Yes", "Hey", "Yeah", "HO"};

	std::cout << "Array String: "<< std::endl;
	iter(arrString, 5, printString);
	std::cout << std::endl;

	std::cout << "Array Int: "<< std::endl;
	iter(arrInt, 5, printInt);
	std::cout << std::endl;

	std::cout << "Increment: "<< std::endl;
	iter(arrInt, 5, inc);

	iter(arrInt, 5, printInt);
	std::cout << std::endl;

	return (0);
}
