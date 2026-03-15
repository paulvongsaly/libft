/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 23:50:14 by marvin            #+#    #+#             */
/*   Updated: 2026/03/11 23:50:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;

    if (!dst || !src)
        return (0);
    if (size > 0)
    {
        while (dst[i] != '\0')
        {
            i++;
        }
        while (j + i < size - 1 && src[j] != '\0')
        {
            dst[j + i] = src[j];
            j++;
        }
        dst[j + i] = '\0';
    }
    j = 0;
    while (src[j])
        j++;
    return (j + i);
}