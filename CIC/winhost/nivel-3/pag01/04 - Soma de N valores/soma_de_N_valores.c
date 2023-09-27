/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soma_de_N_valores.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:36:35 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 18:38:12 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	tmp;
	int	i;
	int	soma;

	scanf("%d", &n);
	i = 0;
	soma = 0;
	while (i < n)
	{
		scanf("%d", &tmp);
		soma += tmp;
		i++;
	}
	printf("%d", soma);
	return (0);
}
