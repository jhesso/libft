/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:40:14 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/12 01:08:20 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	int		word;
	char	**ret;

	ret = ft_split("   this  is          a test string    ", ' ');
	word = 0;
	printf("-----------------\n");
	while (ret[word] != NULL)
	{
		printf("%s\n", ret[word]);
		word++;
	}
	printf("-----------------\n");
}
