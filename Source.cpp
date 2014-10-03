#include <iostream>
#include <string>
#include<fstream>
#include<sstream>
#include <queue>
#include "tree.h"
using namespace std;

void main()
{
	Tree<int> mytree;
	int input;
	cout << "Give me number(Insert): ";
	cin >> input;
	mytree.random(input);	
	mytree.inorder();
	cout << "Size "<<mytree.myVector.size()<<endl;
	cout << "Height: " << mytree.findHight(mytree.root) << endl;
	mytree.clear();
	mytree.balance(mytree.myVector, 0, mytree.myVector.size()-1);
	cout << "Height after rebalance: " << mytree.findHight(mytree.root) << endl;
	cout << "Give me a number(Search): ";
	cin >> input;
	cout << mytree.search(mytree.root, input) << endl;
	cout << "Give me a number(Delete): ";
	cin >> input;
	mytree.deleteNode(input);
	mytree.inorder();
	
	

	system("pause");
}
