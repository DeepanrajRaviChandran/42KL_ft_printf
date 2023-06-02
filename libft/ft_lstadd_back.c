/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:20:23 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/24 20:52:18 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Create the initial linked list
    t_list *list = NULL;

    // Create and add nodes to the list
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    node1->content = "Node 1";
    node1->next = NULL;
    ft_lstadd_back(&list, node1);

    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    node2->content = "Node 2";
    node2->next = NULL;
    ft_lstadd_back(&list, node2);

    t_list *node3 = (t_list *)malloc(sizeof(t_list));
    node3->content = "Node 3";
    node3->next = NULL;
    ft_lstadd_back(&list, node3);

    // Print the content of the linked list
    t_list *current = list;
    while (current) {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Free the memory allocated for the nodes
    current = list;
    while (current) {
        t_list *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
*/
