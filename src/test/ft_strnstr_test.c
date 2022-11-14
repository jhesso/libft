/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:57:30 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/04 15:06:36 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	// const char	*haystack = "Lorem ipsum dolor sit amet";
	// const char	*needle = "ipsumm";
	size_t		len;
	char		*ptr;
	char		*ft_ptr;

	len = 3;
	ptr = strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
	ft_ptr = ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
	printf("return of strnstr(): %s\n", ptr);
	printf("return of ft_strnstr(): %s\n", ft_ptr);
	return (0);
}
