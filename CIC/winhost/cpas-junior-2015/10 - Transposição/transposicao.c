/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transposicao.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:43:20 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 20:19:23 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	atr_ton_la(char ton[15][3])
{
	strcpy(ton[0], "A");
	strcpy(ton[1], "B");
	strcpy(ton[2], "C#");
	strcpy(ton[3], "D");
	strcpy(ton[4], "E");
	strcpy(ton[5], "F#");
	strcpy(ton[6], "G#");
}

void	atr_ton_si(char ton[15][3])
{
	strcpy(ton[0], "B");
	strcpy(ton[1], "C#");
	strcpy(ton[2], "D#");
	strcpy(ton[3], "E");
	strcpy(ton[4], "F#");
	strcpy(ton[5], "G#");
	strcpy(ton[6], "A#");
}

void	atr_ton_do(char ton[15][3])
{
	strcpy(ton[0], "C");
	strcpy(ton[1], "D");
	strcpy(ton[2], "E");
	strcpy(ton[3], "F");
	strcpy(ton[4], "G");
	strcpy(ton[5], "A");
	strcpy(ton[6], "B");
}

void	atr_ton_re(char ton[15][3])
{
	strcpy(ton[0], "D");
	strcpy(ton[1], "E");
	strcpy(ton[2], "F#");
	strcpy(ton[3], "G");
	strcpy(ton[4], "A");
	strcpy(ton[5], "B");
	strcpy(ton[6], "C#");
}

void	atr_ton_mi(char ton[15][3])
{
	strcpy(ton[0], "E");
	strcpy(ton[1], "F#");
	strcpy(ton[2], "G#");
	strcpy(ton[3], "A");
	strcpy(ton[4], "B");
	strcpy(ton[5], "C#");
	strcpy(ton[6], "D#");
}

void	atr_ton_fa(char ton[15][3])
{
	strcpy(ton[0], "F");
	strcpy(ton[1], "G");
	strcpy(ton[2], "A");
	strcpy(ton[3], "Bb");
	strcpy(ton[4], "C");
	strcpy(ton[5], "D");
	strcpy(ton[6], "E");
}

void	atr_ton_sol(char ton[15][3])
{
	strcpy(ton[0], "G");
	strcpy(ton[1], "A");
	strcpy(ton[2], "B");
	strcpy(ton[3], "C");
	strcpy(ton[4], "D");
	strcpy(ton[5], "E");
	strcpy(ton[6], "F#");
}

void	atr_ton_gen(char note, char ton[15][3])
{
	if (note == 'A')
		atr_ton_la(ton);
	else if (note == 'B')
		atr_ton_si(ton);
	else if (note == 'C')
		atr_ton_do(ton);
	else if (note == 'D')
		atr_ton_re(ton);
	else if (note == 'E')
		atr_ton_mi(ton);
	else if (note == 'F')
		atr_ton_fa(ton);
	else if (note == 'G')
		atr_ton_sol(ton);
}

int	main(void)
{
	char	ton[15][3];
	char	*notes;
	char	melody[100];
	char	note;
	int		i;
	int		j;

	notes = "CDEFGAB";
	scanf(" %[^\n]s", melody);
	scanf(" %c", &note);
	atr_ton_gen(note, ton);
	i = -1;
	while (++i < strlen(melody))
	{
		j = -1;
		while (++j < 7)
			if (melody[i] == notes[j])
				printf("%s", ton[j]);
	}
	printf("\n");
	return (0);
}
