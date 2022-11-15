/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:37:48 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/15 14:27:46 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	char const	*s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
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

	// char *s = "      split       this for   me  !       ";

	// char **result = ft_split(s, ' ');
	// if (!result)
	// 	printf("TEST_SUCCESS\n");
	// printf("TEST_FAILED\n");
	return (0);
}
