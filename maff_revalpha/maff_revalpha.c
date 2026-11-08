#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int     main(void)
{
	char    ch;
	int     i;

	ch =    'z';
	i = 1;

	while (ch >= 'a')
	{
		if (i % 2 == 0)
			ft_putchar(ch - 32);
		else
			ft_putchar(ch);
		ch--;
		i++;
	}

	write(1, "\n", 1);

	return (0);
}

