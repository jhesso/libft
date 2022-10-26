/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:10:17 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/26 11:04:42 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	char 			b[] = "Hello World!"; // this is modified by memset
	char 			a[] = "Hello World!"; // this is modified by ft_memset
	size_t			len;
	unsigned char	c;

	c = '#';
	len = 5;
	memset(b, c, len);
	printf("memset() output: %s\n", b);
	ft_memset(a, c, len);
	printf("ft_memset() output: %s\n", a);
	return (0);
}
