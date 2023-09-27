/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seculo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:31:30 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 16:32:51 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	sec;
	int	secu;

	scanf("%d", &a);
	if (a % 100 != 0)
	{
		sec = a / 100;
		secu = sec + 1;
		printf("%d\n", secu);
	}
	else
	{
		sec = a / 100;
		printf("%d\n", sec);
	}
	return (0);
}
