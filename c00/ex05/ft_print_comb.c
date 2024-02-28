/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:31:49 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/28 11:47:48 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_comb(char a, char b, char c)
{
    ft_putchar(a + '0');
    ft_putchar(b + '0');
    ft_putchar(c + '0');
    if (a == 7 && b == 8 && c == 9)
    {
        return;
    }
    ft_putchar(',');
    ft_putchar(' ');
}

void ft_print_comb(void)
{
    int a;
    int b;
    int c;

    a = 0;
    while (a <= 7)
    {
        b = a + 1;
        while (b <= 8)
        {
            c = b + 1;
            while (c <= 9)
            {
                print_comb(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
}
