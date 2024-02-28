/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 22:18:45 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/28 12:19:04 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (dest[count])
    {
        count++;
    }
    while (src[i] != '\0')
    {
        dest[count] = src[i];
        i++;
        count++;
    }
    dest[count] = '\0';
    return (dest);
}
