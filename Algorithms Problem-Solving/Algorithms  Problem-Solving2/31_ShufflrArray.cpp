int RandomNumber(int From, int To)
{
	int random = rand() % (To - From + 1) + From;
	 
	return random;
}

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


void Swap(int& A, int& B)
{
	int Temp;

	Temp = A;
	A = B;
	B = Temp;
}

void FillArrayWithrndomNumbers(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = i + 1;
}

void ShufflrArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arrLength = ReadPositiveNumber("Enter number of elements ? \n");

	FillArrayWithrndomNumbers(arr, arrLength);

	cout << "\nArray 1 elements before shuffle:\n";
	PrintArray(arr, arrLength);

	ShufflrArray(arr, arrLength);

	cout << "\narray elements after shuffle:\n";
	PrintArray(arr, arrLength);

	return 0;
}