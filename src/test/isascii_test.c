/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:09:57 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/25 18:05:49 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	int		ret;
	char	c;

	c = 'a';
	ret = isascii(c);
	printf("Return value for isascii(%c) is: %d\n", c, ret);
	c = '1';
	ret = isascii(c);
	printf("Return value for isascii(%c) is: %d\n", c, ret);
	c = '/';
	ret = isascii(c);
	printf("Return value for isascii(%c) is: %d\n", c, ret);
	c = ' ';
	ret = isascii(c);
	printf("Return value for isascii(%c) is: %d\n", c, ret);
	c = '`';
	ret = isascii(c);
	printf("Return value for isascii(%c) is: %d\n", c, ret);
	c = '\x001e';
	ret = isascii(c);
	printf("Return value for isascii(%c) is: %d\n", c, ret);
	c = '\x0020';
	ret = isascii(c);
	printf("Return value for isascii(%c) is: %d\n", c, ret);
	c = '\x0080';
	ret = isascii(c);
	printf("Return value for isascii(%c) is: %d\n", c, ret);
	return (0);
}
