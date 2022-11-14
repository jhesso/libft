/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:02:27 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/01 13:05:22 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	// const char	*s1 = "Hello World!";
	// const char	*s2 = "Hello World!";
	// int			ret;
	// int			ft_ret;
	// size_t		n;

	// n = 12;
	// ret = strncmp(s1, s2, n);
	// ft_ret = ft_strncmp(s1, s2, n);
	// printf("strncmp() return: %d\n", ret);
	// printf("ft_strncmp() return: %d\n", ft_ret);

	char *big = "abcdef";
	char *little = "abc";
	size_t size = 7;
	int i1 = ((strncmp(big, little, size) > 0) ? 1 : ((strncmp(big, little, size) < 0) ? -1 : 0));
	int i2 = ((ft_strncmp(big, little, size) > 0) ? 1 : ((ft_strncmp(big, little, size) < 0) ? -1 : 0));

	printf("result of strncmp(): %d\n", i1);
	printf("result of ft_strncmp(): %d\n", i2);

	if (i1 == i2)
		printf("TEST_SUCCESS\n");
	else
		printf("TEST_FAILED\n");
	return (0);
}
