/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:26:51 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/28 12:22:11 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int src_len;
    unsigned int dest_len;
    unsigned int total_length;

    src_len = ft_strlen(src);
    dest_len = ft_strlen(dest);
    total_length = src_len + dest_len;
    if (dest_len >= size)
    {
        return (src_len + size);
    }
    while (*src && dest_len < size - 1)
    {
        dest[dest_len] = *src;
        dest_len++;
        src++;
    }
    dest[dest_len] = '\0';
    return (total_length);
}
