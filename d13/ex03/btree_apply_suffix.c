/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 17:39:30 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/25 17:39:31 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		if (root->left != NULL)
			btree_apply_suffix(root->left, applyf);
		if (root->right != NULL)
			btree_apply_suffix(root->right, applyf);
		(*applyf)(root->item);
	}
}