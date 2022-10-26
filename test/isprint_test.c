/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:34:31 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/25 15:38:40 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	int		ret;
	char	c;

	printf("Enter a character: ");
	scanf("%c", &c);
	c = 31;
	ret = isprint(c);
	printf("Return value for isprint(%c) is: %d\n", c, ret);
	return (0);
}
