/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:39:32 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/25 18:06:15 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	char	c;
	int		ret;

	c = 'a';
	ret = ft_isascii(c);
	printf("Return value for ft_isascii(%c) is: %d\n", c, ret);
	c = '1';
	ret = ft_isascii(c);
	printf("Return value for ft_isascii(%c) is: %d\n", c, ret);
	c = '/';
	ret = ft_isascii(c);
	printf("Return value for ft_isascii(%c) is: %d\n", c, ret);
	c = ' ';
	ret = ft_isascii(c);
	printf("Return value for ft_isascii(%c) is: %d\n", c, ret);
	c = '`';
	ret = ft_isascii(c);
	printf("Return value for ft_isascii(%c) is: %d\n", c, ret);
	c = '\x001e';
	ret = ft_isascii(c);
	printf("Return value for ft_isascii(%c) is: %d\n", c, ret);
	c = '\x0080';
	ret = ft_isascii(c);
	printf("Return value for ft_isascii(%c) is: %d\n", c, ret);
	return (0);
}
