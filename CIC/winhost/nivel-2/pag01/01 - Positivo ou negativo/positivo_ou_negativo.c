/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positivo_ou_negativo.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:05:26 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 16:07:04 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	num;

	scanf("%d", &num);
	if (num < 0) printf("Negativo");
	else printf("Positivo");
	return (0);
}
