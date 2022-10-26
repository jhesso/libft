/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:01:49 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/26 19:14:07 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

size_t test_ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
size_t apple_strlcat(char *dst, const char *src, size_t siz);

int	main(void)
{
	char	a[] = " World!";
	char	b[50] = "Hello"; //dest
	char	c[] = " World!";
	char	d[] = "Hello"; //dest
	char	e[] = " World!";
	char	f[] = "Hello"; //dest
	char	g[] = " World!";
	char	h[] = "Hello"; //dest
	size_t	ret;
	size_t	ft_ret;
	size_t	test_ft_ret;
	size_t	apple_ret;

	printf("dest before strlcat(): %s\n", b);
	printf("dest before ft_strlcat(): %s\n", d);
	printf("dest before test_ft_strlcat(): %s\n", f);
	printf("dest before apple_strlcat(): %s\n", h);
	ret = strlcat(b, a, 6);
	ft_ret = ft_strlcat(d, c, 6);
	test_ft_ret = test_ft_strlcat(f, e, 6);
	apple_ret = apple_strlcat(h, g, 6);
	printf("dest after strlcat(): %s\n", b);
	printf("dest after ft_strlcat(): %s\n", d);
	printf("dest after test_ft_strlcat(): %s\n", f);
	printf("dest after apple_strlcat(): %s\n", h);
	printf("Return value of strlcat: %zu\n", ret);
	printf("Return value of ft_strlcat: %zu\n", ft_ret);
	printf("Return value of test_ft_strlcat: %zu\n", test_ft_ret);
	printf("Return value of apple_strlcat: %zu\n", apple_ret);
	return (0);
}