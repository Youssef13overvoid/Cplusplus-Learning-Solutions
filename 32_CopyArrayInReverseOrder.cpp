int RandomNumber(int From, int To)
{
	int random = rand() % (To - From + 1) + From;

	return random;
}

void FillArrayWithrndomNumbers(int arr[100], int &arrLength)
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

void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arrDestination[i] = arrSource[arrLength - 1 - i];
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithrndomNumbers(arr, arrLength);

	int arr2[100];
	CopyArrayInReverseOrder(arr, arr2, arrLength);

	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrLength);

	cout << "\narray elements after copy:\n";
	PrintArray(arr2, arrLength);

	return 0;
}