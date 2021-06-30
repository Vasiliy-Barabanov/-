#include <iostream>

struct Node {
  int val;
  Node* next;
};

// Инициализации элемента односвязного списка нулями

void init(int n, Node** node) {
	if (n > 0) {
		(*node) = new Node;
		(*node)->val = 0;
		(*node)->next = NULL;
		init(n - 1, &((*node)->next));
	}	
}

// Отображения односвязного списка на экран
int show(Node* head) {
		cout << head->val << endl;
		if (head->next == NULL) {
			cout << endl;
			return 0;
		}
		show(head->next);
}

// Добавления элемента в односвязный список
void pushNode(Node* head, Node* node) {
	Node* current = head;
	for (int i = 1; current->next != NULL; i++) {
		current = current->next;
	}
	node->next = current->next;
	current->next = node;
}


// Написать функцию инициализации size элементов списка заданным значением val.
void initList(Node* head, int size, int val)  {

}

// Написать функцию копирования элементов массива source в новый массив dest
void copyMas(Node* source, Node* dest) {

}
  

// Написать функцию сравнение списков source и dest. Если списки равны 0, если не равны -1
int compareMas(Node* source, Node* dest, int b) {
	for (int i = 1; i<=b; i++) {
		if (source->val != dest->val) return -1;
		source = source->next;
		dest = dest->next;
	}
	return 0;
}

// Написать функцию удаления со сдвигом влево n-го элемента списка.
void deleteList(Node* head,int n) {

}


// Написать функцию сдвига значений вправо на n-элементов с заполнением крайних элементов нулями
void rShiftList(Node* head,int n) {

}



// Написать функцию сдвига значений влево на n-элементов с заполнением крайних элементов нулями.
void lShiftList(Node* head,int n) {

}


//Написать функцию сдвига значений влево на n-элементов с переносом вытесненных элементов в конец
void lRoundShiftMas(Node* head,int n, int size) {

}


// Написать функцию вычисления среднего значения элементов списка.
int averageList(Node* head, int size) {
  return 0;
}



// Написать функцию вычисления средне квадратического отклонения элементов списка.
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