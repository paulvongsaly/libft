/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 01:54:34 by marvin            #+#    #+#             */
/*   Updated: 2026/03/15 01:54:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strchr(const char *string, int searchedChar)
{
    int i;

    i = 0;
    if (!string)
        return (NULL);
    while (string[i])
    {
        if (string[i] == (char)searchedChar)
            return((char *)&string[i]);
        i++;
    }
    if ((char)searchedChar == '\0')
        return ((char *)&string[i]);
    return (NULL);
}