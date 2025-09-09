
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

float TotalBillAfterServiceAndSalesTax(float BillValue)
{
	return BillValue * 1.1 * 1.16;
}

int main()
{
	int  TotatBill = ReadPositiveNumber("Enter Total Bill:");


	cout << endl;
	cout << "Tottal Bill = " << TotatBill << endl;
	cout << "Total Bill After Service And Sales Tax = "
		<< TotalBillAfterServiceAndSalesTax(TotatBill) << endl;




	return 0;
}
