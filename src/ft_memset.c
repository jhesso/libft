/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:53:48 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/07 21:54:18 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dst;

	dst = (unsigned char *)b;
	while (len--)
		*dst++ = (unsigned char)c;
	return (b);
}
