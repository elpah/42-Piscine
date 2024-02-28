/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:46:15 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/28 02:27:00 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
    char letter;

    letter = 97;
    while (letter <= 122)
    {
        write(1, &letter, 1);
        letter++;
    }
}
