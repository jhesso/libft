/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:12:25 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/02 12:33:55 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	char			*s = NULL;
	char			*sub;
	unsigned int	start;
	size_t			len;

	start = 10;
	len = 30;
	sub = ft_substr(s, start, len);
	printf("Result of ft_substr(): %s\n", sub);
	return (0);
}
