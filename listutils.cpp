#include <iostream>

struct Node {
  int val;
  Node* next;
};

// ������������� �������� ������������ ������ ������

void init(int n, Node** node) {
	if (n > 0) {
		(*node) = new Node;
		(*node)->val = 0;
		(*node)->next = NULL;
		init(n - 1, &((*node)->next));
	}	
}

// ����������� ������������ ������ �� �����
int show(Node* head) {
		cout << head->val << endl;
		if (head->next == NULL) {
			cout << endl;
			return 0;
		}
		show(head->next);
}

// ���������� �������� � ����������� ������
void pushNode(Node* head, Node* node) {
	Node* current = head;
	for (int i = 1; current->next != NULL; i++) {
		current = current->next;
	}
	node->next = current->next;
	current->next = node;
}


// �������� ������� ������������� size ��������� ������ �������� ��������� val.
void initList(Node* head, int size, int val)  {

}

// �������� ������� ����������� ��������� ������� source � ����� ������ dest
void copyMas(Node* source, Node* dest) {

}
  

// �������� ������� ��������� ������� source � dest. ���� ������ ����� 0, ���� �� ����� -1
int compareMas(Node* source, Node* dest, int b) {
	for (int i = 1; i<=b; i++) {
		if (source->val != dest->val) return -1;
		source = source->next;
		dest = dest->next;
	}
	return 0;
}

// �������� ������� �������� �� ������� ����� n-�� �������� ������.
void deleteList(Node* head,int n) {

}


// �������� ������� ������ �������� ������ �� n-��������� � ����������� ������� ��������� ������
void rShiftList(Node* head,int n) {

}



// �������� ������� ������ �������� ����� �� n-��������� � ����������� ������� ��������� ������.
void lShiftList(Node* head,int n) {

}


//�������� ������� ������ �������� ����� �� n-��������� � ��������� ����������� ��������� � �����
void lRoundShiftMas(Node* head,int n, int size) {

}


// �������� ������� ���������� �������� �������� ��������� ������.
int averageList(Node* head, int size) {
  return 0;
}



// �������� ������� ���������� ������ ��������������� ���������� ��������� ������.
int skoFromList(Node* head, int size) {
  return 0;
}


int testSkoFromList() {
  return -1;
}


static void runTest(int (*testFunction)(),const std::string& testName)
{
  if(testFunction()==0)
    std::cout << "Test "<< testName << " - OK" << std::endl;
  else 
    std::cout << "Test "<< testName << " - FAIL" << std::endl;
}



int main() {
  runTest(testSkoFromList,"testSkoFromList");


}