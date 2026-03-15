/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:16:27 by marvin            #+#    #+#             */
/*   Updated: 2026/03/11 15:16:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memset(void *s, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = (unsigned char)c;
        i++;
    }
    return (s);
}