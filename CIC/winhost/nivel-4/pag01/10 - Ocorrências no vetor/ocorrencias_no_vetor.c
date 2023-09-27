/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ocorrencias_no_vetor.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:41:56 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 09:01:49 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	list[100];
	int	i;
	int	tmp;
	int	count;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &list[i]);
		i++;
	}
	scanf("%d", &tmp);
	i = 0;
	count = 0;
	while (i < n)
	{
		if (list[i] == tmp)
			count++;
		i++;
	}
	printf("%d", count);
	return (0);
}
