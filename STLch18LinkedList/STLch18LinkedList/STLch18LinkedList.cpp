// STLch18LinkedList.cpp
//

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
	cout << "Ch 18 STL Linked List by Kevin Bell\n\n";
	cout << "For the first list:\n";
	//while loop until user enter -1
	int num = 0;
	list<int> list1;
	while (num != -1)
	{
		cout << "Enter a positive integer (-1 to quit): ";
		cin >> num;
		if (num != -1)
			list1.push_back(num);
	}
	cout << "This is the list of numbers\n";
	list<int>::iterator iter;
	for (iter = list1.begin(); iter != list1.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	cout << "The size of the list is " << list1.size() << endl;
	cout << "Removing duplicates from the list\n";
	//remove duplicates
	list1.sort();
	list1.unique();
	cout << "This is the list of numbers\n";
	for (iter = list1.begin(); iter != list1.end(); iter++)
		cout << *iter << " ";
	//list size
	cout << endl;
	cout << "The size of the list is " << list1.size() << endl;
	cout << endl;
	cout << "For the second list:\n";
	//while loop until user enter -1
	num = 0;
	list<int> list2;
	while (num != -1)
	{
		cout << "Enter a positive integer (-1 to quit): ";
		cin >> num;
		if (num != -1)
			list2.push_back(num);
	}
	cout << "This is the other list of numbers\n";
	for (iter = list2.begin(); iter != list2.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	cout << "The size of the list is " << list2.size() << endl;
	cout << endl;
	cout << "Merging the two lists\n";
	//merge the two lists
	list1.merge
	(list2);
	cout << "This is the merged list of numbers\n";
	for (iter = list1.begin(); iter != list1.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	cout << "The size of the list is " << list1.size() << endl;
	cout << endl;
	system("pause");
	return 0;
} //end main function