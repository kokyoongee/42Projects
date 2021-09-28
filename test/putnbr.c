#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		n = n * -1;
		ft_putchar_fd('-', fd);
	}
	nb = (unsigned int)n;
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}


int main()
{
	ft_putnbr_fd(-123, 1);
}
