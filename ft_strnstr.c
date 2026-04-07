/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 01:19:47 by marvin            #+#    #+#             */
/*   Updated: 2026/03/22 01:19:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (little[0] == '\0')
        return ((char *)big);
    while (big[i] != '\0' && i < len)
    {
        if (big[i] == little[0])
        {
            j = 0;
            while (big[i + j] == little[j] && i + j < len)
            {
                j++;
                if (little[j] == '\0')
                    return (&big[i]);
            }
        }
        i++;
    }
    return (NULL);
}