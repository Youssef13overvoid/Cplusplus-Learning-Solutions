
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

float TotalMonths(float LoanAmount, float MonthlyPayment)
{

	return (float)LoanAmount / MonthlyPayment;
}

int main()
{
	float LoanAmoun = ReadPositiveNumber("Enter LoanAmoun:");

	float MonthlyPayment = ReadPositiveNumber("Enter Monthly Payment:");

	cout << endl;

	cout << "Total months to pay = " << TotalMonths(LoanAmoun, MonthlyPayment);

}