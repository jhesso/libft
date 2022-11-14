/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:07:45 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/11 14:15:08 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	char	*ret;

	ret = ft_strtrim("123", "");
	printf("Expected: 123\n");
	printf("got: %s\n", ret);
	ret = ft_strtrim("Hello World!asd", "asd");
	printf("Expected: Hello World!\n");
	printf("got: %s\n", ret);
	ret = ft_strtrim("asdHello World!asd", "asd");
	printf("Expected: Hello World!\n");
	printf("got: %s\n", ret);
	ret = ft_strtrim("asdHelloasdWorld!asd", "asd");
	printf("Expected: HelloasdWorld!\n");
	printf("got: %s\n", ret);
	ret = ft_strtrim(" \t\n       \t\t\n", " \t\n");
	printf("Expected:--\n");
	printf("got:-%s-\n", ret);
	return (0);
}
