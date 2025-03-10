#include<iostream>
#include<fstream>
using namespace std;
int getsizer(char arr[]) {
	int i;
	for (i = 0; arr[i]!='\0'; i++)
	{

	}
	return i;
}
bool compare(char arr[], char arr1[]) {
	int i; bool found = false;
	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == arr1[i]) {
			found = true;
		}
		else {
			if ((arr[i] >= 97 && arr[i] <= 110)) {
				if (arr1[i] == arr[i] - 32) {
					found = true;
				}
				else {
					found = false;
					break;
				}
			}
			else {
				found = false;
				break;
			}
		}
	}
	return found;
}
int main() {
	ifstream fin("test.txt");
	char arr[100];
	char arr1[100];
	char email[100]="Aneessaad@321gmail.com";
	char pswd[100]="saad123";

	while (fin.getline(arr,100))
	{
		fin.clear();
		fin.getline(arr1, 100);
	//	fin.getline(arr1, 100);
		if (getsizer(arr)== getsizer(email)) {
			if (compare(arr,email)) {
				if (compare(arr1, pswd)) {

					cout << "user found!"<<endl;
				}
			}

		}

	}

		return 0;
}