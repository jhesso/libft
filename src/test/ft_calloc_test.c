/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:01:02 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/29 14:05:32 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	size_t	count;
	size_t	size;
	char	*ptr;
	char	*ft_ptr;

	count = 5;
	size = sizeof(char);
	ptr = calloc(count, size);
	ft_ptr = ft_calloc(count, size);
	printf("size of allocated memory by calloc(): %zu\n", sizeof(ptr));
	printf("size of allocated memory by ft_calloc(): %zu\n", sizeof(ft_ptr));
	return (0);
}
