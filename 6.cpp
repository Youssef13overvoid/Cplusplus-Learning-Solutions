struct stinfo
{
	string firstname;
	string lastName;
};

stinfo Readinfo()
{
	stinfo info;

	cout << "Enter your fist name: " << endl;
	cin >> info.firstname;

	cout << "Ener our last name: " << endl;
	 cin >> info.lastName;

	return info;
}

string GetFullname(stinfo Info, bool Reversed)
{
	string Fullname ="";

	if (Reversed)
		Fullname = Info.lastName + " " + Info.firstname;
	else
		Fullname = Info.firstname + " " + Info.lastName;
	
	return Fullname;
}

void PrintFullname(string fullname)
{
	cout << "\n your Full name is: " << fullname << endl;
}


int main()
{
	PrintFullname(GetFullname(Readinfo(),false));


	return 0;

}