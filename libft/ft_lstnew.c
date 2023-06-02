/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:57:21 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/23 18:33:31 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
#include <stdio.h>

int main() {
    int data = 42;
    t_list* node = ft_lstnew(&data);

    if (node != NULL) {
        printf("New node created with content: %d\n", *((int*)node->content));
    } else {
        printf("Failed to create a new node.\n");
    }

    return 0;
}
*/
