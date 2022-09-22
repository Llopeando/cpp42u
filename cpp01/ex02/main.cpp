/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:33:17 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/22 13:50:57 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str;
	std::string	*strPTR;
	std::string	&strREF = str;

	str = "HI THIS IS BRAIN";
	strPTR = &str;
	std::cout << "---> String addresses with PTR, REF and str" << std::endl;
	std::cout << "String (str) address: " << &str << std::endl;
	std::cout << "String (strPTR) pointer address: " << strPTR << std::endl;
	std::cout << "String (strREF) reference address: " << &strREF << std::endl;

	std::cout << std::endl << "---> String value with PTR, REF and str" << std::endl;
	std::cout << "String (str): " << str << std::endl;
	std::cout << "String (strPTR) pointer: " << *strPTR << std::endl;
	std::cout << "String (strREF) reference: " << strREF << std::endl;
	return (0);
}
