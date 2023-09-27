/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS_junior2007-F7.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:56:26 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/14 20:56:28 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	tmp[100], text[100][100];
	int		i, j, n;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf(" %[^\n]s", text[i]);
		i++;
	}
	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (strcmp(text[i], text[j]) > 0)
			{
				strcpy(tmp, text[i]);
				strcpy(text[i], text[j]);
				strcpy(text[j], tmp);
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < n)
		printf("%s\n", text[i++]);
	return (0);
}
