/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oni_2003_treino.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:20:49 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 14:57:21 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     total_cig(int cigarros, int beatas)
{
        int     total;
        int     t;
        int     s;

        total = cigarros;
        while (cigarros >= beatas)
        {
                t = cigarros / beatas;
                total += t;
                s = cigarros % beatas;
                cigarros = t + s;
        }
        return (total);
}

int     main(void)
{
        int     cigarros;
        int     beatas;
	int	total;

        scanf("%d %d", &cigarros, &beatas);
        total = total_cig(cigarros, beatas);
        printf("%d", total);
        return (0);
}
