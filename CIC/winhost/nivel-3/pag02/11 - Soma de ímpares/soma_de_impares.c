/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soma_de_impares.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:56:44 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 18:58:16 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	soma;
	int	i;
	
	scanf("%d", &n);
	i = 1;
	soma = 0;
	while (i <= n)
	{
		if (i % 2 != 0)
			soma += i;
		i++;
	}
	printf("%d", soma);
	return (0);
}
