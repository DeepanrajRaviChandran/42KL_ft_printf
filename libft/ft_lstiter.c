/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 22:13:06 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/27 15:21:51 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

void print_content(void *data) {
    int *num = (int *)data;
    printf("%d ", *num);
}

int main() {
    // Create a linked list
    t_list *node1 = malloc(sizeof(t_list));
    int num1 = 1;
    node1->content = &num1;

    t_list *node2 = malloc(sizeof(t_list));
    int num2 = 2;
    node2->content = &num2;

    t_list *node3 = malloc(sizeof(t_list));
    int num3 = 3;
    node3->content = &num3;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Call ft_lstiter to print the content of each node
    ft_lstiter(node1, print_content);

    // Free the memory allocated for the linked list
    t_list *current = node1;
    while (current != NULL) {
        t_list *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
*/
