/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:34:04 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/31 15:58:58 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	// char	*s = "Hello World!";
	// char	*ft_s = s;
	// char	*new_s;
	// char	*ft_new_s;
	// char	c;
	// char	ft_c;

	// c = 'H';
	// ft_c = c;
	// new_s = strchr(s, c);
	// printf("result of strchr(): %s\n", new_s);
	// if (new_s != NULL)
	// 	printf("hex value of returned char: \\%02hhx\n", (unsigned char) *new_s);
	// ft_new_s = ft_strchr(ft_s, ft_c);
	// printf("result of ft_strchr(): %s\n", ft_new_s);
	// if (ft_new_s != NULL)
	// 	printf("hex value of returned char: \\%02hhx\n", (unsigned char) *ft_new_s);
	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char *d1 = strchr(src, '\0');
	char *d2 = ft_strchr(src, '\0');

	if (d1 == d2)
		printf("TEST_SUCCESS\n");
	else
		printf("TEST_FAILED\n");
	return (0);
}
