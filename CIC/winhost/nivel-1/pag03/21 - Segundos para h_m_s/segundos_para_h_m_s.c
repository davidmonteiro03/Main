/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segundos_para_h:m:s.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:50:41 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 10:53:20 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	num;
	int	hrs;
	int	min;
	int	seg;

	scanf("%d", &num);
	hrs = num / 3600;
	min = (num % 3600) / 60;
	seg = (num % 3600) % 60;
	printf("%d:%d:%d", hrs, min, seg);
	return (0);
}
