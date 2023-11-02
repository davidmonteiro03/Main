/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiplicacao.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:03:01 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/02 09:45:45 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_m
{
	int	a;
	int	b;
	int	res;
	int	dig[6];
	int	l_d;
}t_m;

int	g_l(int num)
{
	int	i;
	int	aux;

	aux = num;
	i = 0;
	while (num > 0)
	{
		i++;
		num /= 10;
	}
	num = aux;
	return (i);
}

void	p_d(int dig[], int num, int len)
{
	int	aux;

	aux = num;
	while (num > 0)
	{
		dig[--len] = num % 10;
		num /= 10;
	}
	num = aux;
}

void	t_p(t_m *m, int a, int b)
{
	m->a = a;
	m->b = b;
	m->res = m->a * m->b;
	m->l_d = g_l(m->res);
	p_d(m->dig, m->res, m->l_d);
}

void	d_n(int num, t_m *m, char c)
{
	int	i;

	printf ("%c", c);
	i = -1;
	while (++i < g_l(m->res) - g_l(num))
		printf(" ");
	printf ("%d\n", num);
}

void	d_l(int num, char c)
{
	int	i;

	printf ("%c", c);
	i = -1;
	while (++i < g_l(num))
		printf("-");
	printf("\n");
}

void	c_d(t_m *m)
{
	int	i;
	int	j;
	int	d_b[6];

	p_d(d_b, m->b, g_l(m->b));
	i = -1;
	while (++i < g_l(m->b))
	{
		j = -1;
		if (i == g_l(m->b) - 1)
			printf("+");
		else
			printf(" ");
		while (++j < g_l(m->res) - g_l(m->a * d_b[g_l(m->b) - i - 1]) - i)
			printf(" ");
		printf("%d\n", d_b[g_l(m->b) - i - 1] * m->a);
	}
	d_l(m->res, ' ');
}

void	t_s(t_m *m)
{
	d_n(m->a, m, ' ');
	d_n(m->b, m, 'x');
	d_l(m->res, ' ');
	if (g_l(m->b) > 1)
		c_d(m);
	printf(" %d\n", m->res);
}

int	main(void)
{
	t_m	m;
	int	a;
	int	b;

	scanf("%d", &a);
	scanf("%d", &b);
	if (a < 1 || a > 999 || b < 1 || b > 999)
		return (0);
	t_p(&m, a, b);
	t_s(&m);
	return (0);
}
