/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:24:35 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/25 14:32:58 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

// int	ft_isalnum_test(char c)
// {
// 	return (ft_isalnum(c));
// }

int	main(void)
{
	char	c;
	int		ret;

	printf("enter a character: ");
	scanf("%c", &c);
	ret = ft_isalnum(c);
	printf("Return value of ft_isalnum(%c) is: %d\n", c, ret);
	return (0);
}
