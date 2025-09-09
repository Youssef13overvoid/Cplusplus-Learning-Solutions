void Readnumbers(int &num1, int &num2, int &num3)
{
	cout << "enter number 1" << endl;
	cin >> num1;

	cout << "enter number 2" << endl;
	cin >> num2;

	cout << "enter number 3" << endl;
	cin >> num3;
}

int MaxOf3Numbers(int num1, int num2, int num3)
{
	if (num1 > num2 && num1 > num3)
	{
		return num1;
	}
	else if ( num2 > num1 && num2 > num3)
	{
		return num2;
	}
	else
	{
		return num3;
	}
		
}

void PrintResult(int Max)
{
	cout << "\nThe maximum Number is : " << Max << endl;
}

int main()
{
	int num1, num2, num3;
	Readnumbers(num1, num2, num3);
	PrintResult(MaxOf3Numbers(num1, num2, num3));



	return 0;
}    