enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

enPrimeNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);

	for (int counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
			return enPrimeNotPrime::NotPrime;

	}
	return enPrimeNotPrime::Prime;
}


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

void CopyOnlyPrimeNumber(int arrSource[100], int arrDestination[100], int arrLength, int &arr2Length)
{
	int Counter = 0;

	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime)
		{
			arrDestination[Counter] = arrSource[i];
			Counter++;
		}
	}
	arr2Length = --Counter;
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

	int arr[100], arrLength;

	FillArrayWithrndomNumbers(arr, arrLength);

	int arr2[100], arr2Length = 0;
	CopyOnlyPrimeNumber(arr, arr2, arrLength, arr2Length);

	cout << "\nArray 1 Elements:\n";
	PrintArray(arr, arrLength);

	cout << "\nPrime numbers in Array2:\n";
	PrintArray(arr2, arr2Length);

	return 0;
}