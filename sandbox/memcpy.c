/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:43:56 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/26 11:53:09 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dst[50] = "github.com/jhesso";
	char	src[50] = "This is a test string";
	size_t	len = 5;
	
	printf("dst before memcpy: %s\n", dst);
	memcpy(dst, src, len);
	printf("dst after memcpy: %s\n", dst);
	return (0);
}
