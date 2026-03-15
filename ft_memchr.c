/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 02:23:47 by marvin            #+#    #+#             */
/*   Updated: 2026/03/15 02:23:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
    size_t          i;
    unsigned char   *m;

    i = 0;
    if (!memoryBlock)
        return (NULL);
    m = ((unsigned char *)memoryBlock);
    while (i < size)
    {
        if (m[i] == (unsigned char)searchedChar)
            return (&m[i]);
        i++;
    }
    return (NULL);
}