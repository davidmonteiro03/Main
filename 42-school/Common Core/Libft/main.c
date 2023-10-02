/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:07:59 by dcaetano          #+#    #+#             */
/*   Updated: 2023/10/02 19:56:05 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_exec(void)
{
	int	c;

	c = 42;
	printf("\nft_isalpha(%d) = %d", c, ft_isalpha(c));
	printf("\n  isalpha(%d)  = %d\n", c, isalpha(c));
	printf("\nft_isdigit(%d) = %d", c, ft_isdigit(c));
	printf("\n  isdigit(%d)  = %d\n", c, isdigit(c));
	printf("\nft_isalnum(%d) = %d", c, ft_isalnum(c));
	printf("\n  isalnum(%d)  = %d\n", c, isalnum(c));
	printf("\nft_isascii(%d) = %d", c, ft_isascii(c));
	printf("\n  isascii(%d)  = %d\n", c, isascii(c));
}

int	main(void)
{
	ft_exec();
	printf("\n");
	return (0);
}
