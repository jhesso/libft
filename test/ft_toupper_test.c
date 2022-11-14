/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:21:32 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/27 12:26:44 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	char c;

	c = 'a';
	printf("c before ft_toupper(): %c\n", c);
	c = ft_toupper(c);
	printf("c after ft_toupper(): %c\n", c);
	c = 'Z';
	printf("c before ft_toupper(): %c\n", c);
	c = ft_toupper(c);
	printf("c after ft_toupper(): %c\n", c);
	c = 'n';
	printf("c before ft_toupper(): %c\n", c);
	c = ft_toupper(c);
	printf("c after ft_toupper(): %c\n", c);
	c = '1';
	printf("c before ft_toupper(): %c\n", c);
	c = ft_toupper(c);
	printf("c after ft_toupper(): %c\n", c);
	c = '1';
	c = toupper(c);
	printf("actual toupper() %c\n", c);
	return (0);
}
