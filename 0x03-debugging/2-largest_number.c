/**
 * largest_number - returns the largest number
 * @one: first integer
 * @two: second integer
 * @three: third integer
 * Return: largest number
 */
int largest_number(int one, int two, int three)
{
	int largest;

	if (one >= two && one >= three)
	{
		largest = one;
	}
	else if (two >= one && two >= three)
	{
		largest = two;
	}
	else
	{
		largest = three;
	}

	return (largest);
}
