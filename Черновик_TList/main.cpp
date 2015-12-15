#include "TSack.h"
using namespace std;
int main()
{
	TStack Op;
	/*Op.Input();
	Op.Print();*/
	/*Op.Push(6);
	Op.Push(2);
	Op.Push(3);
	Op.Push(4);
	Op.Print();
	
	int x;
	x = Op.Peek();
	cout << "Verh: " << x << endl;
	while (!(Op.IsEmpty()))
	{
		cout << Op.Pop()<<endl;
	}

	Op.Push(100);
	cout<<Op.Pop()<<endl;
	*/
	//cout << "________________________________________________________" << endl;*/
	
     int k;
	Op.Input();
	Op.Print();
	cout << "Input elem to find: ";
	cin >> k;
	elem *flag = Op.Poisk(k);
	if (flag == NULL)
	{
		cout << "Not found!\n";
	}
	else
	{
		Op.Del(flag);
		Op.Print();
	}

	int l,j;
	
	cout << "Input elem to find: ";
	cout << "1)";
	cin >> l;
	cout << "2)";
	cin >> j;
	elem *flag1 = Op.Poisk(l);
	elem *flag2 = Op.Poisk(j);
	if ((flag1 == NULL)||(flag2 == NULL))
	{
		cout << "Not found!\n";
	}
	else
	{ 
		int element,element2;
		cout << "Input elem: ";
		cin >> element;
		cin >> element2;
		Op.InsertAfter(flag1, element);
		Op.InsertBefore(flag2, element2);
		Op.Print();
	}
	return 0;
}