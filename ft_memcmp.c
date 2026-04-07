/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 00:57:52 by marvin            #+#    #+#             */
/*   Updated: 2026/03/22 00:57:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
    size_t  i;
    unsigned char   *p1;
    unsigned char   *p2;

    i = 0;
    p1 = (unsigned char *)pointer1;
    p2 = (unsigned char *)pointer2;
    while (i < size)
    {
        if (p1[i] != p2[i])
            return (p1[i] - p2[i]);
        i++;
    }
    return (0);
}