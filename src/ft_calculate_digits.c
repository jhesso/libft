/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate_digits.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:49:25 by jhesso            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/12/15 15:54:38 by jhesso           ###   ########.fr       */
=======
/*   Updated: 2022/12/15 15:52:31 by jhesso           ###   ########.fr       */
>>>>>>> 564f06070bad48053da92d67b011822e62332561
/*                                                                            */
/* ************************************************************************** */

/*
** Takes an unsigned long integer and calculates how many digits it has
** useful for itoa and similar functions that need to allocate memory for
** a string that contains an int
*/

<<<<<<< HEAD
long	ft_calculate_digits(unsigned long int nbr)
{
	long	len;
=======
int	ft_calculate_digits(unsigned long int nbr)
{
	int	len;
>>>>>>> 564f06070bad48053da92d67b011822e62332561

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}
