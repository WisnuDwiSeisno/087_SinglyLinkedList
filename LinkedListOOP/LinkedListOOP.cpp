#include <iostream>
#include <string.h>
using namespace std;

class Node {
public:
	int noMhs;
	char nama[20];
	Node* next;
};

class List {
	Node* START;
public:
	List();
	void addNode();
	bool Search(int nim, Node** curent, Node** previous);
	bool listEmpty();
	bool delNode(int element);
	void traverse();
};

List::List() {
	START = NULL;
}
void List::addNode() /*Menambah sebuah Node kedalam list*/ 
{
	int nim;
	char nm[20];
	cout << "\nMasukan Nomor Mahasiswa: "
}
