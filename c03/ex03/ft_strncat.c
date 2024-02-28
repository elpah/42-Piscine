/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:24:17 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/28 12:19:36 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (dest[count] != '\0')
    {
        count++;
    }
    while (src[i] != '\0' && nb > 0)
    {
        dest[count] = src[i];
        count++;
        i++;
        nb--;
    }
    dest[count] = '\0';
    return (dest);
}
