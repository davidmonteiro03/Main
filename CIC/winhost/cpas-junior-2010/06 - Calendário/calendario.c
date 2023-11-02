/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calendario.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 07:59:23 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/02 08:37:58 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_m
{
	int	m;
	int	f;
	int	d;
}t_m;

typedef struct s_c
{
	int	f;
	int	d;
}t_c;

int	d(t_m s)
{
	if (s.m == 2)
		return (s.d);
	if ((s.m <= 7 && s.m % 2 == 1) || (s.m > 7 && s.m % 2 == 0))
		return (31);
	return (30);
}

int	g_p(int t[], t_m s)
{
	int	i;
	int	p;

	p = s.f - 1;
	i = -1;
	while (++i < 12 && i + 1 < s.m)
		p += t[i];
	return (p % 7);
}

int	f(t_m s)
{
	int	t[] = {31, s.d, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	return (g_p(t, s));
}

void	s_c(t_c *c, t_m s)
{
	c->d = d(s);
	c->f = f(s);
}

void	s_p(t_c c)
{
	int	d;
	int	i;
	int	flag;

	printf("D  S  T  Q  Q  S  S\n");
	flag = 0;
	d = 1;
	while (d <= c.d)
	{
		i = -1;
		while (++i < 7 && d <= c.d)
		{
			if (i < c.f && flag == 0)
			{
				if (i < 6)
					printf("   ");
				continue ;
			}
			else
				flag = 1;
			if (i < 6 && d < c.d)
				printf("%-3d", d++);
			else
				printf("%d", d++);
		}
		printf("\n");
	}
}

void	c_d(t_m s)
{
	t_c c;

	s_c(&c, s);
	s_p(c);
}

int	main(void)
{
	t_m	s;
	int	m;
	int	f;
	int	d;

	scanf("%d", &m);
	scanf("%d", &f);
	scanf("%d", &d);
	if ((m < 1 || m > 12) || (f < 1 || f > 7) || (d != 28 && d != 29))
		return (0);
	s.m = m;
	s.f = f;
	s.d = d;
	c_d(s);
	return (0);
}
