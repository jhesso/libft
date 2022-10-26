/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:05:52 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/24 16:11:23 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;
	int		ret;

	printf("Enter a character: ");
	scanf("%c", &c);
	ret = isalpha(c);
	printf("Return value of isalpha(%c) is: %d\n", c, ret);
}