/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:37:48 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/14 14:04:12 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	char const	*s = "      split       this for   me  !       ";
	// char const	*s = "      split       this for   me  !       ";
	char		**ret;
	int			row;
	char		c;

	c = ' ';
	ret = ft_split(s, c);
	row = 0;
	printf("---\n");
	while (ret[row] != NULL)
	{
		printf("%s\n", ret[row]);
		row++;
	}
	printf("---\n");
	return (0);
}
