string ReadNAme()
{
	string Name;
	cout << "Enter your Name? " << endl;
	getline(cin, Name);

	return Name;
}

void printName(string Name)
{
	cout << "your name is: " << Name << endl;
}

int main()
{
	printName(ReadNAme());


	return 0;

}