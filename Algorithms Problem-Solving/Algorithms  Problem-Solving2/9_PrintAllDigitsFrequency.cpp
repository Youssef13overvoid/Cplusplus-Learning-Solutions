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


int CountDigitFrequency(short DigitToTcheck , int Num)
{
	int Remainder = 0, FreqCount = 0;

	while (Num > 0)
	{ 
		Remainder = Num % 10; 
		Num = Num / 10;

		if (DigitToTcheck == Remainder )
		{
			FreqCount++;
		}

	}

	return FreqCount;

}


void PrintAllDigitsFrequency(int num)
{
	cout << endl;

	for (int i = 0; i < 10 ; i++)
	{
		short DigitFrequency = 0;
		DigitFrequency = CountDigitFrequency(i, num);

		if (DigitFrequency > 0)
		{
			cout << "Digit " << i << " Frequency is "
				<< DigitFrequency << " Time(s).\n";
		}
	}
}

int main()
{
	PrintAllDigitsFrequency(ReadPositiveNumber("enter number:"));
	  
	return 0;
}