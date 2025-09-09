void FillArray(int arr[100], int& arrLength)
{
	arrLength = 6;
	arr[0] = 50;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 50;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
}

bool IsPalindromeNumber(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] != arr[arrLength - i - 1])
		{
			return false;
		}
	};

	return true;
}

int main()
{

	int arr[100], Length = 0;
	FillArray(arr, Length);

	cout << "\nArray Elements:\n";
	PrintArray(arr, Length);

	if (IsPalindromeNumber(arr, Length))
	{
		cout << "\nYes is Palindrome";
	}
	else
	{
		cout << "\nNo is not Palindrome";
	}

	return 0;
}