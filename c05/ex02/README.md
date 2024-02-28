## ex02: ft_iterative_power ##

- Create an iterated function that returns the value of a power applied to a number.
- A power lower than 0 returns 0.
- Overflows must not be handled.
- We’ve decided that 0 power 0 will returns 1.
- Here’s how it should be prototyped:

    ```c
    int	ft_iterative_power(int nb, int power);