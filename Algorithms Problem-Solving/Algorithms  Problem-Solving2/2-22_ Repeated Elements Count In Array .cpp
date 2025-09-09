int ReadPositiveNumber(string Massege)
{
	int num = 0;

	do
	{
		cout << Massege << endl;
		cin >> num;

	} while (num <= 0);


	return num;
}


void ReadArray(int arr[100], int &arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;

	cout << "\nEnter array elements: \n";

	for (int i = 0; i < arrLength; i++)
	{
		cout << " Element [" << i + 1 << "] :";
		cin >> arr[i];
	}
	cout << endl;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

int timsRepeated(int number, int arr[100], int arrLength)
{
	int count = 0;

	for (int i = 0; i <= arrLength - 1; i++)
	{
		if (number == arr[i])
		{
			count++;
		}
	}

	return count;
}
int main()
{
	int arr[100], arrLength, NumberToCheck;

	ReadArray(arr, arrLength);

	NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");

	cout << "\nOriginal array: ";
	PrintArray(arr, arrLength);

	cout << "\nNumber " << NumberToCheck;
	cout << " is repeated ";
	cout << timsRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";

	return 0;
}