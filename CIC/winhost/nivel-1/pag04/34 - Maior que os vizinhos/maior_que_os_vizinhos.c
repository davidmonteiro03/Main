/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maior_que_os_vizinhos.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:47:19 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 13:51:55 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	list[100];
	int	i;
	int	t;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &list[i]);
		i++;
	}
	t = 0;
	i = 0;
	while (i < n)
	{
		if (i > 0 && i < n - 1)
		{
			if (list[i] > list[i + 1] && list[i] > list[i - 1])
			{
				if (t > 0) printf(" ");
				t = 1;
				printf("%d", list[i]);
			}	
		}
		i++;
	}
	return (0);
}
