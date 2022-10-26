/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:05:43 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/25 14:19:39 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	int	select;

	printf("1 = ft_isalpha 2 =  ft_isdigit 3 = ft_isalnum\n");
	printf("Please select the function to be tested: ");
	scanf("%d", &select);
	if (select == 1)
		ft_isalpha_test();
	else if (select == 2)
		ft_isdigit_test();
	else if (select == 3)
		ft_isalnum_test();
	return (0);
}
