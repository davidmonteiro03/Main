/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matriz_concava.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:51:42 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 18:14:35 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	k;

	scanf("%d", &n);
	if (n < 10)
	{
		i = 1;
		while (i < 2 * n)
		{
			k = 1;
			while (k < 2 * n)
			{
				if (i == 1 || k >= i && i <= 2 * n - k)
				{
					if (k == 2 * n - 1)
						printf("%d", n - i + 1);
					else
						printf("%d ", n - i + 1);
				}
				else if (k == 1 || k <= 2 * n - i)
				{
					if (k == 2 * n - 1)
						printf("%d", n - k + 1);
					else
						printf("%d ", n - k + 1);
				}
				else if (k <= 2 * n - 1 && i <= k)
				{
					if (k == 2 * n - 1)
						printf("%d", 1 + k - n);
					else
						printf("%d ", 1 + k - n);
				}
				else
					printf("%d ", 1 + i - n);
				k++;
			}
			printf("\n");
			i++;
		}
	}
	else
	{
		i = 1;
		while (i < 2 * n)
		{
			k = 1;
			while (k < 2 * n)
			{
				if (i == 1 || k >= i && i <= 2 * n - k)
				{
					if (k == 2 * n - 1)
						printf("%d", n - i + 1);
					else
					{
						if (n - i + 1 < 10)
							printf("%d  ", n - i + 1);
						else
							printf("%d ", n - i + 1);
					}
				}
				else if (k == 1 || k <= 2 * n - i)
				{
					if (k == 2 * n - 1)
						printf("%d", n - k + 1);
					else
					{
						if (n - k + 1 < 10)
							printf("%d  ", n - k + 1);
						else
							printf("%d ", n - k + 1);
					}
				}
				else if (k <= 2 * n - 1 && i <= k)
				{
					if (k == 2 * n - 1)
						printf("%d", 1 + k - n);
					else
					{
						if (1 + k - n < 10)
							printf("%d  ", 1 + k - n);
						else
							printf("%d ", 1 + k - n);
					}
				}
				else
				{
					if (1 + i - n < 10)
						printf("%d  ", 1 + i - n);
					else
						printf("%d ", 1 + i - n);
				}
				k++;
			}
			printf("\n");
			i++;
		}
	}
	return (0);
}
