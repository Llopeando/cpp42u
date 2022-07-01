/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:31:42 by ullorent          #+#    #+#             */
/*   Updated: 2022/06/27 14:43:10 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int		c;
	int		i;
	char	let;

	c = 0;
	if (argc >= 2)
	{
		while (argv[++c])
		{
			i = -1;
			while (argv[c][++i])
			{
				if (argv[c][i] <= 'z' && argv[c][i] >= 'a')
				{
					let = argv[c][i] - 32;
					std::cout << let;
				}
				else
					std::cout << argv[c][i];
			}
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
