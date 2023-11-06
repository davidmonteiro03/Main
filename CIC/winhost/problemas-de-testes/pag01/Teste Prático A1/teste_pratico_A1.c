/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_pratico_A1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:16:56 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/06 17:25:49 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	a;
	double	b;
	double	media;
	char	c;

	scanf("%lf %lf", &a, &b);
	scanf(" %c", &c);
	media = (a / 10 + b / 10) / 2;
	if (c == 'S')
		media++;
	else if (c == 'B')
		media += 3;
	if (media > 20)
		media = 20;
	if (media < 5)
		media = 5;
	printf("NOTA ATRIBUIDA:%.0lf\n", media);
	return (0);
}
