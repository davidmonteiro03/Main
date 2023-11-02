/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS_junior2007-F10.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:15:22 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/02 11:29:49 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_c
{
	int	n;
	int	f;
	int	y;
	int	m;
}t_c;

int	d(int y, int m)
{
	if (m == 2)
	{
		if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
			return (29);
		return (28);
	}
	if ((m % 2 == 1 && m <= 7) || (m % 2 == 0 && m >= 8))
		return (31);
	return (30);
}

void	s_c(t_c *c, int y, int m, int f)
{
	c->y = y;
	c->m = m;
	c->f = f;
	c->n = d(y, m);
}

void	d_c(t_c *c)
{
	int	d;
	int	i;
	int	flag;

	printf(" D  S  T  Q  Q  S  S\n");
	flag = 0;
	d = 1;
	while (d <= c->n)
	{
		i = -1;
		while (++i < 7 && d <= c->n)
		{
			if (i < c->f - 1 && flag == 0)
			{
				if (i == 0)
					printf("  ");
				else
					printf("   ");
				continue ;
			}
			else
				flag = 1;
			if (i == 0)
				printf("%2d", d++);
			else
				printf("%3d", d++);
		}
		printf("\n");
	}
}

void	c(int y, int m, int f)
{
	t_c	c;

	s_c(&c, y, m, f);
	d_c(&c);
}

int	main(void)
{
	int	y;
	int	m;
	int	f;

	scanf("%d", &y);
	scanf("%d", &m);
	scanf("%d", &f);
	c(y, m, f);
	return (0);
}

