internal class Program
{
	public static void Main(string[] args)
	{
		// تعریف ارایه
		int[] a = { 5, 2, 4, 6, 1, 3 };

		// صدا زدن متود و ذخیره مقدار برگشت داده شده ان 
		var b = Contain(a, 6);

		// نمایش مقدار b
		Console.WriteLine(b);

	}
	// تعریف تابع 
	public static bool Contain(int[] array, int target)
	{
		// استفاده از حلقه برای دسترسی به عناصر ارایه
		for (int i = 0; i < array.Length; i++)
		{
			// اگر عنصر مورد نظر وجود داشت 
			if (array[i] == target)
				return true;
		}
		// اگر عنصر مورد نظر وجود نداشت
		return false;
	}
}