enum enNumberType { odd = 1, even = 2};

int readNumber()
{
	int Number;
	cout << "Enter a Number? " << endl;
	cin >> Number;
	return Number;
}

enNumberType checkNumerType(int Num)
{
	int result = Num % 2;
	if ( result == 0)
		return enNumberType::even;
	
	else
		return enNumberType::odd;
}

void PrintNumbertype(enNumberType NumberType)  
{
	if (NumberType == enNumberType::even)
		cout << "\n Number is Even. \n";
	else
		cout << "\n Number is odd \n";
}

int main()
{
	
	PrintNumbertype(checkNumerType(readNumber()));


	return 0;

}