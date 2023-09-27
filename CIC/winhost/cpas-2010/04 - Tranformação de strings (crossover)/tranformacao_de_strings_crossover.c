/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tranformacao_de_strings_crossover.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:36:24 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/23 20:49:15 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[100];
	char	s2[100];
	char	tmp[100];
	int		n;
	int		i;

	scanf(" %[^\n]s", s1);
	scanf(" %[^\n]s", s2);
	scanf("%d", &n);
	if (strlen(s1) == strlen(s2) && strlen(s1) > 0 && strlen(s1) <= 200 && \
		strlen(s2) > 0 && strlen(s2) <= 200 && n >= 0 && n <= 200)
	{
		strcpy(tmp, s1);
		i = n - 1;
		while (++i < strlen(s1))
			s1[i] = s2[i];
		i = n - 1;
		while (++i < strlen(tmp))
			s2[i] = tmp[i];
		printf("%s\n%s\n", s1, s2);
	}
	return (0);
}
