/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:07:59 by dcaetano          #+#    #+#             */
/*   Updated: 2023/10/03 08:50:19 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_exec_is(void)
{
	int	c;

	c = 32;
	printf("\n\tft_isalpha(%d) = %d", c, ft_isalpha(c));
	printf("\n\tft_isdigit(%d) = %d", c, ft_isdigit(c));
	printf("\n\tft_isalnum(%d) = %d", c, ft_isalnum(c));
	printf("\n\tft_isascii(%d) = %d", c, ft_isascii(c));
	printf("\n\tft_isprint(%d) = %d", c, ft_isprint(c));
}

void	ft_str_print(char *str)
{
	while (*str)
	{
		if (ft_isprint(*str))
			printf("%c", *str);
		else
			printf("\\%x", *str);
		str++;
	}
}

void	ft_exec_str(void)
{
	char	*str;

	str = "\t\nThis is 42cursus!";
	printf("\n\tft_strlen('");
	ft_str_print(str);
	printf("') = %lu\n", ft_strlen(str));
}

int	main(void)
{
	printf("\n'is' functions\n");
	ft_exec_is();
	printf("\n");
	printf("\n'str' functions\n");
	ft_exec_str();
	printf("\n");
	return (0);
}
