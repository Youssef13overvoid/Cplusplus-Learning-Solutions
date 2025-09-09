
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

short FindNumberPositionInArray(int Number, int arr[100], int arrLenght)
{
	for (int i = 0; i < arrLenght; i++)
	{
		if (arr[i] == Number)
			return arr[i];
	}

	return -1;
}

int ReadNumber()
{
	int Number;
	
	cout << "\nenter a number to search for?\n";
	cin >> Number;


	return Number;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
	return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;
	FillArrayWithrndomNumbers(arr, arrLength);

	cout << "\nArray 1 Elements:\n";
	PrintArray(arr, arrLength);

	int Number = ReadNumber();
	cout << "\nNumber you are looking for is: " << Number << endl;

	if (!IsNumberInArray(Number, arr, arrLength))
	{
		cout << "No, The number is not found :-(\n";
	}
	else
	{
		cout << "Yes it is found :-)\n";
	}

	return 0;
}