/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:24:23 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/30 21:54:12 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}t_btree;

t_btree	*createnode(void *item)
{
	t_btree	*result;

	result = (t_btree *)malloc(sizeof(t_btree));
	if (!result)
		return (NULL);
	result->left = NULL;
	result->right = NULL;
	result->item = item;
	return (result);
}

void	printtabs(int numtabs)
{
	while (numtabs-- > 0)
		printf("\t");
}

void	printtree_rec(t_btree *root, int level)
{
	if (!root)
	{
		printtabs(level);
		printf("Empty tree.\n");
		return ;
	}
	printtabs(level);
	printf("value = %d\n", *(int *)root->item);
	printtabs(level);
	printf("left\n");
	printtree_rec(root->left, level + 1);
	printtabs(level);
	printf("right\n");
	printtree_rec(root->right, level + 1);
	printtabs(level);
	printf("done\n");
}

void	printtree(t_btree *root)
{
	printtree_rec(root, 0);
}

void freetree(t_btree *root)
{
	if (!root)
		return;

	freetree(root->left);
	freetree(root->right);

	free(root->item);
	free(root);
}

int	main(void)
{
	t_btree	*n1;
	t_btree	*n2;
	t_btree	*n3;
	t_btree	*n4;
	t_btree	*n5;
	int		*num;

	num = malloc(sizeof(int));
	*num = 10;
	n1 = createnode(num);
	num = malloc(sizeof(int));
	*num = 20;
	n2 = createnode(num);
	num = malloc(sizeof(int));
	*num = 30;
	n3 = createnode(num);
	num = malloc(sizeof(int));
	*num = 40;
	n4 = createnode(num);
	num = malloc(sizeof(int));
	*num = 50;
	n5 = createnode(num);
	n1->left = n2;
	n1->right = n3;
	n3->left = n4;
	n3->right = n5;
	printtree(n1);
	freetree(n1);
	return (0);
}
