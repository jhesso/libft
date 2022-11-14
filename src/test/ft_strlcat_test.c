/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:01:49 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/08 19:19:04 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

size_t test_ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
size_t apple_strlcat(char *dst, const char *src, size_t siz);

int	main(void)
{
	// char	src[] = " World!";
	// char	dst[13] = "Hello";
	// size_t	ret;
	// size_t	dstsize;

	// dstsize = 3;
	// ret = strlcat(dst, src, dstsize);
	// printf("dest after strlcat(): %s\n", dst);
	// printf("\n----------------------------------------\n\n");
	// printf("Return value of strlcat: %zu\n", ret);
	// printf("strlen(dst): %zu\n", strlen(dst));
	// printf("strlen(src): %zu\n", strlen(src));
	// printf("ft_strlen(dst): %zu\n", ft_strlen(dst));
	// printf("ft_strlen(src): %zu\n", ft_strlen(src));

	size_t len;
	char dest[30]; memset(dest, 0, 30);
	len = ft_strlcat(dest, "123", -1);
	printf("dest = %s\n", dest);
	printf("dest len = %zu\n", len);
	return (0);
}
