int RandomNumber(int From, int To)
{
	int random = rand() % (To - From + 1) + From;

	return random;
}

void FillArrayWithrndomNumbers(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

int  OddCountNumbersInArray(int arr[100], int arrLength)
{
	int Counter = 0;

	for (int i = 0; i < arrLength; i++)
		if (arr[i] % 2 != 0)
		{
			Counter++;
		}

	return Counter;
}



int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithrndomNumbers(arr, arrLength);

	cout << "\nArray Elements: ";
	PrintArray(arr, arrLength);

	cout << "\nOdd Numbers count is :";
	cout << OddCountNumbersInArray(arr, arrLength);

	return 0;
}