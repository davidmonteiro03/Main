/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menor_numero_divisivel_pelos_numeros_de_1_a        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:48:47 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 20:55:11 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	res;
	int	n;
	int	i;
	int	flag;

	scanf("%d", &n);
	res = 1;
	while (1)
	{
		i = 0;
		flag = 0;
		while (++i <= n)
			if (res % i != 0)
				flag = 1;
		if (flag == 0)
			break ;
		res++;
	}
	printf("%d\n", res);
	return (0);
}
