/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:57:30 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/28 22:06:59 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	const char	*haystack = "this is a haystack";
	const char	*needle = "this";
	size_t		len;
	char		*ptr;
	char		*ft_ptr;

	len = 3;
	ptr = strnstr(haystack, needle, len);
	ft_ptr = ft_strnstr(haystack, needle, len);
	printf("return of strnstr(): %s\n", ptr);
	printf("return of ft_strnstr(): %s\n", ft_ptr);
	return (0);
}
