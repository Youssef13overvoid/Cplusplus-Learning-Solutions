

void ReadNumbers(int &num1, int &num2, int &num3)
{
	cout << "enter num1:" << endl;
	cin >> num1;

	cout << "enter num2: " << endl;
	cin >> num2;

	cout << "enter num3: " << endl;
	cin >> num3;
}

int SumOF3Numbers(int num1, int num2, int num3)
{

	 return num1 + num2 + num3;

}

void PrintResult(int Total)
{
	cout << "\nthe total sum of numbers is : " << Total << endl;
}

int main()
{
	int num1, num2, num3;
	ReadNumbers(num1, num2, num3);
	PrintResult(SumOF3Numbers(num1, num2, num3));
	return 0;
}