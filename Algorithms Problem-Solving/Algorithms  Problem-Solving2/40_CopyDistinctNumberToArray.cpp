void FillArray(int arr[100], int& arrLength)
{
	arrLength = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
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

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
	return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}   

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = Number;
}

void CopyDistinctNumberToArray(int arrSource[100], int arrDestination[100], int SourceLength, int& DestinationLength)
{

	for (int i = 0; i < SourceLength; i++)
	
		if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
		{
			AddArrayElement(arrSource[i], arrDestination, DestinationLength);
		}
	}


int main()
{

	int arrSource[100], SourceLength = 0, arrDestination[100], DestinationLength = 0;

	FillArray(arrSource, SourceLength); 

	cout << "\nArray 1 Elements:\n";
	PrintArray(arrSource, SourceLength);

	CopyDistinctNumberToArray(arrSource, arrDestination, SourceLength, DestinationLength);

	cout << "\nArray 2 Distinct elements:\n";
	PrintArray(arrDestination, DestinationLength);

	return 0;
}