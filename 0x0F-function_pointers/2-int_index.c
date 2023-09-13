






int int_index(int *array, int size, int (*cmp)(int))
{
	int i, number;

	if ( size <= 0)
		return (-1);

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for ( i = 0; i < size; i++)
		{
			number = cmp(array[i];
			if (number > 0 )
				return (number);
		}

	}
	return (-1);
}
