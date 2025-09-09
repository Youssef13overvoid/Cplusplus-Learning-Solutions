
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

float CalculateRemainder(float ToatalBill, float TotalCashPaid)
{
	return TotalCashPaid - ToatalBill;
}

int main()
{
	int TotalBill = ReadPositiveNumber("Enter The Total Bill:");
	int TotalCahshPaid = ReadPositiveNumber("Enter the Total cash Paid:");

	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Cash Paid = " << TotalCahshPaid << endl;

	cout << "*********************************************\n";
	cout << "Remainder = " << CalculateRemainder(TotalBill, TotalCahshPaid);




	return 0;
}
