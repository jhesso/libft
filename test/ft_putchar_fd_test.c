/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:30:55 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/02 17:52:53 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	char 	c;
	int		fd;

	c = 'a';
	fd = open("42", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);
	ft_putchar_fd('a', fd);
	return (0);
}
