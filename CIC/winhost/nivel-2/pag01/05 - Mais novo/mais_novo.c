/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mais_novo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:17:08 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 16:20:07 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	nome1[100];
	char	nome2[100];
	int	data1;
	int	data2;

	scanf(" %[^\n]s", nome1);
	scanf("%d", &data1);
	scanf(" %[^\n]s", nome2);
	scanf("%d", &data2);
	if (data1 > data2)
		printf("%s", nome1);
	else if (data1 < data2)
		printf("%s", nome2);
	return (0);
}
