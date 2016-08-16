#include "../includes/ft_printf.h"

void		ft_add_positive_di(t_info *info)
{
	int	i;
	
	i = 0;
	ft_putstr("coucou");
	ft_putstr(info->lst->data);
	if (info->lst->data && ft_isdigit(info->lst->data[0]) && !(ft_strchr(info->flags, '0')))
		info->lst->data = ft_strjoin("+", info->lst->data);
}

void		ft_add_sign_di(t_info *info)
{
	int	i;

	i = 0;
	if (info->flags != NULL)
	{
		if (ft_strchr(info->flags, '+'))
			ft_add_positive_di(info);
	}
}
