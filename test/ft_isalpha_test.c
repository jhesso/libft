/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:38:22 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/25 14:23:02 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_isalpha_test(void)
{
	char	c;
	int		ret;

	printf("Enter a character: ");
	scanf("%c", &c);
	ret = ft_isalpha(c);
	printf("Return value of ft_isalpha(%c) is: %d\n", c, ret);
}