
void ReadNumbers(int &num1, int &num2)
{
	cout << "Enter a Number 1: " << endl;
	cin >> num1;

	cout << "Enter a Number 2: " << endl;
	cin >> num2;
}

int Swap(int &num1, int &num2)
{
	int Temp;

	Temp = num1;
	num1 = num2;
	num2 = Temp;

	return num1, num2;
}

void PrintNumbers(int num1, int num2)
{
	cout << "\n\nNumber 1 is : " << num1 << endl;
	cout << "Number 2 is : " << num2 << endl;
}

int main()
{
	int num1, num2;

	ReadNumbers(num1, num2);
	PrintNumbers(num1, num2);
	Swap(num1, num2);
	PrintNumbers(num1, num2);



	return 0;
}    