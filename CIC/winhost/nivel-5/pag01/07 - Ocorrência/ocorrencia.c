/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ocorrencia.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:25:19 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/12 08:31:18 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	not_up_letter(char c)
{
	if (c != ' ' && (c < 65 || c > 90))
		return (1);
	return (0);
}

int	main(void)
{
	char	text[100];
	int		i;
	int		flag, count;
	char		tmp;

	scanf(" %[^\n]s", text);
	scanf(" %c", &tmp);
	i = 0;
	count = 0;
	flag = 0;
	while (text[i])
	{
		if (not_up_letter(text[i]) == 1)
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 0)
	{
		i = 0;
		while (text[i])
		{
			if (text[i] == tmp)
				count++;
			i++;
		}
		printf("%d", count);
	}
	return (0);
}
