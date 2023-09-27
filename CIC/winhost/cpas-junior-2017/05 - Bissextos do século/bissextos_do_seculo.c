/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bissextos_do_seculo.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:06:00 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 11:08:29 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	ano;
	int	sec;
	int	t;

	scanf("%d", &n);
	t = 0;
	ano = n * 100;
	sec = ano - 99;
	while (++sec <= ano)
	{
		if (sec % 4 == 0)
		{
			t++;
			if (t >= 1 && t <= 11)
				printf("%d ", sec);
			else if (t == 12)
				printf("%d\n", sec);
			else if (t > 12 && t <= 23)
				printf("%d ", sec);
			else if (t == 24)
				printf("%d\n", sec);
			else
				printf("%d", sec);
		}
	}
	return (0);
}
