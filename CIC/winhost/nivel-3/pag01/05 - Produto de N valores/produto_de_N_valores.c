/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   produto_de_N_valores.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:39:07 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 18:40:23 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	tmp;
	int	p;

	scanf("%d", &n);
	i = 0;
	p = 1;
	while (i < n)
	{
		scanf("%d", &tmp);
		p *= tmp;
		i++;
	}
	printf("%d", p);
	return (0);
}
