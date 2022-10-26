/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:02:45 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/26 14:04:19 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	char	a[50] = "github.com/jhesso";
	char	b[50] = "This is a test string";
	char	c[50] = "github.com/jhesso";
	char	d[50] = "This is a test string";
	size_t	len = 10;
	
	printf("a before memmove: %s\n", a);
	printf("c before ft_memmove: %s\n", c);
	memmove(a, b, len);
	printf("a after memmove: %s\n", a);
	ft_memmove(c, d, len);
	printf("c after ft_memmove: %s\n", c);
	return (0);
}
