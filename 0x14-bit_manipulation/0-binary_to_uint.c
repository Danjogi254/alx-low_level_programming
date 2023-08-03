/**
 * binary_to_uint - converter of a binary number to unsigned int
 * @b: string with binary numbers
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int conv = 0;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		conv = 2 * conv + (b[n] - '0');
	}

	return (conv);
}
