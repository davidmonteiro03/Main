/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pitagoricos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:59:12 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 15:06:02 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c)
	{
		if (a * a == b * b + c * c)
			printf("E PITAGORICO");
		else
			printf("NAO E PITAGORICO");
	}
	else if (b > a && b > c)
	{
		if (b * b == a * a + c * c)
			printf("E PITAGORICO");
		else
			printf("NAO E PITAGORICO");
	}
	else if (c > a && c > b)
	{
		if (c * c == a * a + b * b)
			printf("E PITAGORICO");
		else
			printf("NAO E PITAGORICO");
	}
	else
		printf("NAO E PITAGORICO");
	return (0);
}
