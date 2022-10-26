/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:06:49 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/26 12:10:52 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	char	a[50] = "github.com/jhesso";
	char	b[50] = "This is a test string";
	char	c[50] = "github.com/jhesso";
	char	d[50] = "This is a test string";
	size_t	len = 5;
	
	printf("a before memcpy: %s\n", a);
	printf("c before ft_memcpy: %s\n", c);
	memcpy(a, b, len);
	printf("a after memcpy: %s\n", a);
	ft_memcpy(c, d, len);
	printf("c after ft_memcpy: %s\n", c);
	return (0);
}
