/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:59:16 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/01 12:21:42 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	char	a[50] = "Hello World!";
	char	b[50] = "This is a test sentence";
	char	c[50] = "Hello World!";
	char	d[50] = "This is a test sentence";
	size_t	ret;
	size_t ft_ret;

	printf("dest before strlcpy(): %s\n", b);
	printf("dest before ft_strlcpy(): %s\n", d);
	ret = strlcpy(b, a, sizeof(b));
	ft_ret = ft_strlcpy(d, c, sizeof(d));
	printf("dest after strlcpy(): %s\n", b);
	printf("dest after ft_strlcpy(): %s\n", d);
	printf("return value of strlcpy(): %zu\n", ret);
	printf("return value of ft_strlcpy(): %zu\n", ft_ret);
	return (0);
}
