
int ReadTotalSales()
{
	int TotaltSales;

	cout << "Enter total Sales : \n";
	cin >> TotaltSales;

	return TotaltSales;

}
 
float GetComissionPerentage(float TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;

	else if (TotalSales >= 500000)
		return 0.02;

	else if (TotalSales >= 100000)
		return 0.03;

	else if (TotalSales >= 50000)
		return 0.05;

	else
		return 0.00;
}

float CalculateTotalComission(float TotalSales)
{

	return GetComissionPerentage(TotalSales) * TotalSales;

}


int main()
{
	int TotalSales = ReadTotalSales();

	cout << "Comission Percentage = " << GetComissionPerentage(TotalSales) << endl;
	cout << "Total comission = " << CalculateTotalComission(TotalSales); 


	return 0;
} 