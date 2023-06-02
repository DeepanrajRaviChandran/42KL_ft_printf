/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:47:23 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/27 17:21:14 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	if (lst)
	{
		current = *lst;
		while (current)
		{
			next = current -> next;
			(*del)(current -> content);
			free(current);
			current = next;
		}
		*lst = NULL;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

// Function to delete the content of a node
void del_content(void *content)
{
	free(content);
}

// Function to create a new node with the given content
t_list *create_node(void *content)
{
	t_list *new_node = malloc(sizeof(t_list));
	if (new_node)
	{
		new_node->content = content;
		new_node->next = NULL;
	}
	return new_node;
}

// Function to print the contents of the linked list
void print_list(t_list *list)
{
	while (list)
	{
		printf("%d ", *(int *)list->content);
		list = list->next;
	}
	printf("\n");
}

int main()
{
	// Create a linked list with some integer values
	int *value1 = malloc(sizeof(int));
	int *value2 = malloc(sizeof(int));
	int *value3 = malloc(sizeof(int));
	*value1 = 10;
	*value2 = 20;
	*value3 = 30;

	t_list *node1 = create_node(value1);
	t_list *node2 = create_node(value2);
	t_list *node3 = create_node(value3);

	node1->next = node2;
	node2->next = node3;

	t_list *list = node1;

	// Print the initial list
	printf("Initial list: ");
	print_list(list);

	// Clear the list
	ft_lstclear(&list, del_content);

	// Print the cleared list
	printf("Cleared list: ");
	print_list(list);

	return 0;
}
*/
