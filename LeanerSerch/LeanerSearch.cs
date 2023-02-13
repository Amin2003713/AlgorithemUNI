int[] a = { 5, 2, 4, 6, 1, 3 };

var b = Contain(a, 6);

bool Contain(int[] array, int target)
{
	for (int i = 0; i < a.Length; i++)
	{
		if (array[i] == target)
			return true;
	}
	return false;
}