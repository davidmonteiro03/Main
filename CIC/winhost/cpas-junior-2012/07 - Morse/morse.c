/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:43:59 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 11:01:26 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	cod_morse1(char morse[26][5])
{
	strcpy(morse[0], ".-");
	strcpy(morse[1], "-...");
	strcpy(morse[2], "-.-.");
	strcpy(morse[3], "-..");
	strcpy(morse[4], ".");
	strcpy(morse[5], "..-.");
	strcpy(morse[6], "--.");
	strcpy(morse[7], "....");
	strcpy(morse[8], "..");
	strcpy(morse[9], ".---");
	strcpy(morse[10], "-.-");
	strcpy(morse[11], ".-..");
	strcpy(morse[12], "--");
}

void	cod_morse2(char morse[26][5])
{
	strcpy(morse[13], "-.");
	strcpy(morse[14], "---");
	strcpy(morse[15], ".--.");
	strcpy(morse[16], "--.-");
	strcpy(morse[17], ".-.");
	strcpy(morse[18], "...");
	strcpy(morse[19], "-");
	strcpy(morse[20], "..-");
	strcpy(morse[21], "...-");
	strcpy(morse[22], ".--");
	strcpy(morse[23], "-..-");
	strcpy(morse[24], "-.--");
	strcpy(morse[25], "--..");
}

int	main(void)
{
	int		t;
	int		i;
	int		j;
	char	list[100][100];
	char	morse[26][5];
	char	tmp[100];

	scanf(" %[^\n]s", tmp);
	cod_morse1(morse);
	cod_morse2(morse);
	t = 0;
	while (strcmp(tmp, "#") != 0)
	{
		strcpy(list[t++], tmp);
		scanf(" %[^\n]s", tmp);
	}
	i = -1;
	while (++i < t)
	{
		printf("%s", list[i]);
		if (i < t - 1)
			printf("+");
		else
			printf("=");
	}
	i = -1;
	while (++i < t)
	{
		j = -1;
		while (++j < 26)
		{
			if (strcmp(list[i], morse[j]) == 0)
				printf("%c", j + 65);
		}
	}
	printf("\n");
	return (0);
}
