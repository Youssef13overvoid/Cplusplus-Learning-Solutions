enum enPassFail{Pass = 1, Fail = 2 };

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "plase enter Mark1: " << endl;
	cin >> Mark1;

	cout << "plase enter Mark2: " << endl;
	cin >> Mark2;

	cout << "plaes enter Mark3: " << endl;
	cin >> Mark3;

	
}

int SumOF3Marks(int Mark1, int Mark2, int Mark3)
{

	return  Mark1 + Mark2 + Mark3;

}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{

	return (float)SumOF3Marks(Mark1, Mark2, Mark3) / 3;

}

enPassFail checkAverage(float Average)
{
	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(float Average)
{
	cout <<"\nthe Average of entred Marks is " << Average << endl;

	if (checkAverage(Average) == enPassFail::Pass)
		cout << "\nYou Passed :)" << endl;
	else
		cout << "\nYou Faild :(" << endl;

}

int main()
{

	int Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintResult(CalculateAverage(Mark1, Mark2, Mark3));


	return 0;
}