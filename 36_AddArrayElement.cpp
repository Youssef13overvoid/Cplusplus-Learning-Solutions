int ReadNumber()
{
	int Number;
	
	cout << "\npleas enter a number?";
	cin >> Number;


	return Number;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = Number;
}

void InputUserNumbersInArray(int arr[100], int& arrLength)
{
	bool AddMore = true;

	do
	{
		AddArrayElement(ReadNumber(), arr, arrLength);

		cout << "\nDo you want to add numbers [0]:No, [1]: yes? ";
		cin >> AddMore;

	} while (AddMore);
}

void PrintArray(int arr[100], int arrLenght)
{
	for (int i = 0; i < arrLenght; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{

	int arr[100], arrLength = 0;
	InputUserNumbersInArray(arr, arrLength);

	cout << "\nArray Lenght: " << arrLength << endl;
	cout << "Array elements: ";
	PrintArray(arr, arrLength);

	return 0;
}