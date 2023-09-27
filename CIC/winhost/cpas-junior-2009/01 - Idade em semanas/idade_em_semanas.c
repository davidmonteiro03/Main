/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idade_em_semanas.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:18:24 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 14:19:25 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	sem;
	int	sem2;
	int	sem3;

	scanf("%d", &n);
	sem = n % 7;
	sem2 = n - sem;
	sem3 = sem2 / 7;
	printf("%d", sem3);
	return (0);
}
