void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(int));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}