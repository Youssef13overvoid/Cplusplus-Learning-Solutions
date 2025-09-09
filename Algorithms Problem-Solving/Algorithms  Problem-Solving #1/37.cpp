float ReadNumber(string Massege)
{
	int num = 0;
	cout << Massege << endl;
	cin >> num;

	return num;
}

float SumNumbers()
{
	int  Sum = 0, Number = 0, Counter = 1;

	do
	{
		Number = ReadNumber("Enter Number " + to_string(Counter));
		if (Number == -99)
		{
			break;
		}

		Sum += Number;
		Counter++;


	} while (Number != 97);

	return Sum;
}


int main()
{

	cout << "Reslut = " << SumNumbers();
	 


	return 0;
