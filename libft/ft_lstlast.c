/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:32:33 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/23 22:18:32 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Create a sample linked list
    t_list* node1 = (t_list*)malloc(sizeof(t_list));
    t_list* node2 = (t_list*)malloc(sizeof(t_list));
    t_list* node3 = (t_list*)malloc(sizeof(t_list));

    node1->content = 10;
    node1->next = node2;
    node2->content = 20;
    node2->next = node3;
    node3->content = 30;
    node3->next = NULL;

    // Test ft_lstlast function
    t_list* lastNode = ft_lstlast(node1);
    if (lastNode) {
        printf("Last node data: %d\n", lastNode->content);
    } else {
        printf("Empty list.\n");
    }

    // Clean up memory
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/
