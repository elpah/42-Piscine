/* ************************************************************************** */
/*                                                                            */
/*                                     		              :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:22:39 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/07 13:39:37 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int counter;

    counter = 0;
    while (src[counter] != '\0' && counter < n)
    {
        dest[counter] = src[counter];
        counter++;
    }
    while (counter < n)
    {
        dest[counter] = '\0';
        counter++;
    }
    return (dest);
}
