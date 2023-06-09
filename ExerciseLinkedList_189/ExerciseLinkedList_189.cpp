#include <iostream>
#include<string>
using namespace std;

class Node {
public:
	int rollNumber;
	string name;
	Node* next;
};

class CircularLinkedList {
private:
	Node* LAST;

public:
	CircularLinkedList() {
		LAST = NULL;
	}

	void addNode();

	bool search(int rollno, Node** previous, Node** current;

	bool listEmpty();

	bool delNode();

	void traverse();

};

void CircularLinkedList::addNode() { //1. 
}

bool CircularLinkedList::search(int rollno, Node** previous, Node** current) {
	*previous = LAST->next;
	*current = LAST->next;

	while (*current != LAST) {
		if (rollno == (*current)->rollNumber) {
			return true;
		}
		*previous = *current;
		*current = (*current)->next;
	}

	if (rollno == LAST->rollNumber) {
		return true;
	}
	else {
		return false;
	}
}
bool CircularLinkedList::listEmpty() {
	return LAST == NULL;
}

bool CircularLinkedList::delNode() { //untuk membuat record list memnanggil dan menampilkan
}

void CircularLinkedList::traverse() {
	if (listEmpty()) {
		cout << "\nlist is Empty\n";
	}
	else {
		cout << "\nRecords in the list are:\n";
		Node* salsaNode = LAST->next;
		while (salsaNode != LAST) {
			cout << salsaNode->rollNumber << " " << salsaNode->name << endl;
			salsaNode = salsaNode->next;
		}
		cout << LAST->rollNumber << "    " << LAST->name << endl;
	}
}

int main() {
	CircularLinkedList obj;
	while (true) {
		try {
			cout << "\nMenu" << endl;
			cout << "1. Add a record to the list" << endl;
			cout << "2. Delete a record to the list" << endl;
			cout << "3. View all the records in the list" << endl;
			cout << "4. Exit" << endl;
			cout << "\nEnter your choice (1-5): ";

			char ch;
			cin >> ch;

			switch (ch) {
			case '1': {

			}
			case'2': {

			}
			case '3': {
				obj.traverse();
				break;
			}

			case '4': {
				return 0;
			}
			default: {
				cout << "Invalid option" << endl;
				break;
			}
			}
		}
		catch (exception& e) {
			cout << e.what() << endl;
		}
	}
	return 0;
}