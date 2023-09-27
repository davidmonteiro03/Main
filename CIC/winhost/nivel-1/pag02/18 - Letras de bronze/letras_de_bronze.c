/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letras_de_bronze.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:29:09 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 10:36:44 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n_letras_10;
	int	n_letras_5;
	int	preco_10;
	int	preco_5;

	scanf("%d %d", &n_letras_10, &n_letras_5);
	preco_10 = n_letras_10 / 2 * 20;
	preco_5 = n_letras_5 / 2 * 10;
	printf("A cobrar: %d EUR", preco_10 + preco_5);
	return (0);
}
