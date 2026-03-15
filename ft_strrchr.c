/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 02:07:24 by marvin            #+#    #+#             */
/*   Updated: 2026/03/15 02:07:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strrchr(const char *string, int searchedChar)
{
    int i;

    i = 0;
    if (!string)
        return (NULL);
    while (string[i])
        i++;
    if ((char)searchedChar == '\0')
        return ((char *)&string[i]);
    while (i >= 0)
    {
        if (string[i] == (char)searchedChar)
            return ((char *)&string[i]);
        i--;
    }
    return (NULL);
}