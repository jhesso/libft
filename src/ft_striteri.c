/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:50:20 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/15 12:31:31 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	if (s == NULL || f == NULL)
		return ;
	index = 0;
	while (s[index] != '\0')
	{
		f(index, &s[index]);
		index++;
	}
}
