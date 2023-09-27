/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algebra_de_boole.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:49:06 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 15:58:37 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	a, b;
	char	op[5];

	scanf("%s", op);
	if (strcmp(op, "NOT") == 0)
	{
		scanf("%d", &a);
		if (a == 0)
			printf("1");
		else if (a == 1)
			printf("0");
	}
	else if (strcmp(op, "AND") == 0 || strcmp(op, "OR") == 0)
	{
		scanf("%d %d", &a, &b);
		if ((a == 1 || a == 0) && (b == 1 || b == 0))
		{
			if (strcmp(op, "AND") == 0)
			{
				if (a == 1 && b == 1)
					printf("1");
				else
					printf("0");
			}
			else
			{
				if (a == 1 || b == 1)
					printf("1");
				else
					printf("0");
			}
		}
	}
	return (0);
}
