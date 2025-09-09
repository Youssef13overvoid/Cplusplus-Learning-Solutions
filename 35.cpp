

struct stPiggyBankContenet
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContenet ReadPiggyBankContenet()
{
	stPiggyBankContenet PiggyBankContene;

	cout << "enter Pennies:" << endl;
	cin >> PiggyBankContene.Pennies;

	cout << "enter Nickels: " << endl;
	cin >> PiggyBankContene.Nickels;

	cout << "enter Dimes: " << endl;
	cin >> PiggyBankContene.Dimes;

	cout << "entwr Quarters: " << endl;
	cin >> PiggyBankContene.Quarters;

	cout << "enter Dollars: " << endl;
	cin >> PiggyBankContene.Dollars;

	return PiggyBankContene;
}

int CalcualteTotalePennies(stPiggyBankContenet PiggyBankContenet)
{

	float totalpennies =  PiggyBankContenet.Pennies * 1 + PiggyBankContenet.Nickels * 5 
		+ PiggyBankContenet.Dimes * 10 + PiggyBankContenet.Quarters * 25 
		+ PiggyBankContenet.Dollars * 100;

	return totalpennies;

}

int main()
{
	int ToatalSales = CalcualteTotalePennies(ReadPiggyBankContenet());

	cout << endl << "Total Pennies = " << ToatalSales << endl;
	cout << endl << "Total Dollars = " << (float)ToatalSales / 100 << endl;


	return 0;
} 