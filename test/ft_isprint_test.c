/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:52:53 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/25 16:15:54 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	int		ret;
	char	c;

	c = '\x001f';
	ret = ft_isprint(c);
	printf("%d\n", c);
	printf("Return value of ft_isprint(%c) is: %d\n", c, ret);
	return (0);
}
