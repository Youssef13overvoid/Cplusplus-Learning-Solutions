void Readnumbers(int &num1, int &num2)
{
	cout << "enter number 1" << endl;
	cin >> num1;

	cout << "enter number 2" << endl;
	cin >> num2;
}

int MaxOf2Numbers(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

void PrintResult(int Max)
{
	cout << "\nThe maximum Number is : " << Max << endl;
}

int main()
{
	int num1, num2;
	Readnumbers(num1, num2);
	PrintResult(MaxOf2Numbers(num1, num2));



	return 0;
}    