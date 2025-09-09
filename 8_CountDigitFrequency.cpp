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


int main()
{
	int Number = ReadPositiveNumber("Enter Number:");
	int DigitToTcheck = ReadPositiveNumber("Enter one Digit To Tcheck :");

	cout << "\nDigit " << DigitToTcheck
		<< " Frequency is " <<  CountDigitFrequency(DigitToTcheck, Number) << " Time(s)." << endl;
	  
	return 0;
}