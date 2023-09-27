/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversao_hexadecimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:10:45 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 15:20:05 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	*base;
	int		i;
	int		j;
	int		num;
	int		arr[4];

	scanf("%d", &num);
	base = "0123456789ABCDEF";
	i = 0;
	while (num > 0)
	{
		arr[i] = num % 16;
		num /= 16;
		i++;
	}
	j = -1;
	while (++j < i)
		printf("%c", base[arr[i - j - 1]]);
	printf("\n");
	return (0);
}
