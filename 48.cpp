
float ReadPositiveNumber(string Massege)
{
	int num = 0;

	do
	{
		cout << Massege << endl;
		cin >> num;

	} while (num <= 0);


	return num;
}

float MonthlInsallment(float LoanAmount, float HowmanyMonths)
{
	return (float)LoanAmount / HowmanyMonths;
}

int main()
{
	float LoanAmoun = ReadPositiveNumber("Enter Loan Amoun:");

	float HowmanyMonths = ReadPositiveNumber("How many Months:");

	cout << endl;

	cout << "Monthl Insallment = " <<  MonthlInsallment (LoanAmoun, HowmanyMonths);

	return 0; 
}
	