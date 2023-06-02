/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:57:05 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/27 17:23:59 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (lst)
	{
		if (del)
			(*del)(lst->content);
		free (lst);
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

void del_content(void *content) {
	free(content);
}

int main() {
	// Create a node with some content
	t_list *node = (t_list*)malloc(sizeof(t_list));
	int *data = (int*)malloc(sizeof(int));
	*data = 42;
	node->content = data;
	node->next = NULL;

	// Print the content before deletion
	printf("Content before deletion: %d\n", *(int*)node->content);

	// Delete the node and its content
	ft_lstdelone(node, del_content);
	node = NULL; // Set the node pointer to NULL after deletion

	// Attempt to access the deleted content
	// This should lead to undefined behavior
	if (node != NULL) {
		printf("Content after deletion: %d\n", *(int*)node->content);
	} else {
		printf("Node has been deleted.\n");
	}

	return 0;
}
*/
