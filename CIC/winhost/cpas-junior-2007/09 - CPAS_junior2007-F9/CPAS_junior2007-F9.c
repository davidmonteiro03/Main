/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS_junior2007-F9.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:15:22 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/02 11:28:57 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	josephus(int n, int k)
{
	if (n == 1)
		return (1);
	return ((josephus(n - 1, k) + k - 1) % n + 1);
}

int	main(void)
{
	int	n;
	int	k;
	int	survive;

	scanf("%d", &n);
	scanf("%d", &k);
	survive = josephus(n, k);
	printf("%d\n", survive);
	return (0);
}

