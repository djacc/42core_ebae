ft_put_hex(unsigned nt num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num >= 9)
			ft_putchar_fd((num + '0'), 1);	//	understand
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
			
		}
		
	}
	
}

void	ft_x_conversion(unsigned int num, const char format)
{
	if (num == 0)
	{
		write(1, "0", 1);
	}
	else
		ft_put_hex(num, format);
}