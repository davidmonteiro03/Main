/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   par_ou_impar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:21:03 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 16:22:27 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	num;

	scanf("%d", &num);
	if (num % 2 == 0)
		printf("Par");
	else
		printf("Impar");
	return (0);
}
