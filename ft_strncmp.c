/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 02:18:44 by marvin            #+#    #+#             */
/*   Updated: 2026/03/15 02:18:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strncmp(const char *first, const char *second, size_t length)
{
    size_t i;

    i = 0;
    while (i < length && (first[i] != '\0' || second[i] != '\0'))
    {
        if (first[i] != second[i])
            return(first[i] - second[i]);
        i++;
    }
    return (0);
}