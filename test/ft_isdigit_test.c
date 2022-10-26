/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:38:48 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/25 14:20:44 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_isdigit_test(void)
{
	char	c;
	int		ret;

	printf("Enter a character: ");
	scanf("%c", &c);
	ret = ft_isdigit(c);
	printf("Return value of ft_isdigit(%c) is: %d\n", c, ret);
}