/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:14:35 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/26 11:20:16 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	size_t	n;
	char	a[] = "Hello World!";
	char	b[] = "Hello World!";

	n = 5;
	bzero(a+6, n);
	ft_bzero(b+6, n);
	printf("bzero() output: %s\n", a);
	printf("ft_bzero() output: %s\n", b);
	return (0);
}
