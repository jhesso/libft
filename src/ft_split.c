/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:59:21 by jhesso            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/11/14 13:24:20 by jhesso           ###   ########.fr       */
=======
/*   Updated: 2022/11/12 13:18:44 by jhesso           ###   ########.fr       */
>>>>>>> c0ff646d71f8fb39e11ece239fe9ba5dfb514c24
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test.h"

<<<<<<< HEAD
// Just leaving a note here as this is the last "version" where the function
// doesn't crash but instead prints out garbage as the last value

static int	get_amount_of_strings(char const *s, char c)
=======
// static int	get_amount_of_words(char const *s, char c)
// {
// 	int	amount;
// 	int	i;

// 	amount = 0;
// 	i = 0;
// 	while (s[i] == c && s[i] != '\0')
// 		i++;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c)
// 		{
// 			printf("found delimiter starting at: %d\n", i);
// 			while (s[i] == c && s[i + 1] != '\0')
// 				i++;
// 			amount++;
// 		}
// 		i++;
// 	}
// 	if (s[i] == '\0' && s[i - 1] == c)
// 		amount--;
// 	return (amount);
// }

static int	get_amount_of_words(char const *s, char c)
>>>>>>> c0ff646d71f8fb39e11ece239fe9ba5dfb514c24
{
	int	amount;
	int	i;

	amount = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			amount++;
			while (s[i] != c && s[i + 1] != '\0')
				i++;
		}
		i++;
	}
	return (amount);
}

static	int	get_str_len(char const *s, char c, int start)
{
	int	i;
	int	len;

	i = start;
	while (s[i] == c)
		i++;
	len = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static char	**allocate_mem(char const *s, char c, int str_amount)
{
	char	**ret;
	int		len;
	int		i;
	int		start;

	ret = malloc(sizeof(char **) * str_amount + 1); // allocate memory for the 2d array
	if (ret == NULL)
		return (NULL);
	i = 0;
	start = 0;
	while (i < str_amount)
	{
		while (s[start] == c && s[start] != '\0')
			start++;
		len = get_str_len(s, c, start);
		// printf("calculated length: %d for str: %d\n", len, i);
		// printf("starting position of word %d is: %d\n", i, start);
		start = start + len; // calculate the starting point of the next string
		ret[i] = malloc(sizeof(**ret) * len + 1); // allocate memory for each string
		if (ret[i] == NULL)
			return (NULL);
		i++;
	}
	return (ret);
}

static char	**create_string(char const *s, char c, char **ret, int str_amount)
{
	int	row;
	int	col;
	int	i;

	row = 0;
	i = 0;
	col = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0' && row < str_amount)
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i + 1] != '\0')
				i++;
			row++;
			col = 0;
		}
		ret[row][col] = s[i];
		col++;
		i++;
	}
	row++;
	ret[row] = NULL;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	int		str_amount;
	char	**ret;

	if (s == NULL)
		return (NULL);
	// printf("stepping into get_amount_of_words\n");
	str_amount = get_amount_of_words(s, c);
	// printf("amount of words calculated: %d\n", str_amount);
	// printf("stepping into allocate_mem\n");
	ret = allocate_mem(s, c, str_amount);
	printf("stepping into create_string\n");
	ret = create_string(s, c, ret, str_amount);
	return (ret);
}
