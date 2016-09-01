/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 17:12:59 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/25 17:13:01 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		if (root->left != NULL)
			btree_apply_infix(root->left, applyf);
		applyf(root->item);
		if (root->right != NULL)
			btree_apply_infix(root->right, applyf);
	}
}
