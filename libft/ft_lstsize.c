/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:55:56 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/23 21:31:22 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	node_count;

	node_count = 0;
	while (lst)
	{
		lst = lst->next;
		node_count++;
	}
	return (node_count);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Create a linked list for testing
    t_list* node1 = (t_list*)malloc(sizeof(t_list));
    t_list* node2 = (t_list*)malloc(sizeof(t_list));
    t_list* node3 = (t_list*)malloc(sizeof(t_list));

    // Set the content and next pointers
    node1->content = NULL;
    node1->next = node2;

    node2->content = NULL;
    node2->next = node3;

    node3->content = NULL;
    node3->next = NULL;

    // Calculate the size of the list
    int size = ft_lstsize(node1);

    // Print the result
    printf("Size of the list: %d\n", size);

    // Free the allocated memory
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/
