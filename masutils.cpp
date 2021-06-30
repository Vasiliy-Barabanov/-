#include <iostream>


const int MASSIZE = 1000;
int mas[MASSIZE];

// ������� 0:
// �������� ������� ������������� size ��������� ������� �������� ��������� val.
void initByZeroMas(int* imas, int size)  {

  if(size>MASSIZE)
    size=MASSIZE; 
  for(int i=0;i<size;i++) {
    mas[i]=0;
  }
}



// ������� 1:
// �������� ������� ������������� size ��������� ������� �������� ��������� val.
void initMas(int* imas, int size, int val)  {

}

//������� 2:
// �������� ������� ����������� size ��������� ������� source � ������ dest

void copyMas(int* source,int* dest, int size) {

}
  

//������� 3:
//�������� ������� ��������� size ��������� ��������  source � dest. ���� ������� ����� 0, ���� �� ����� -1

int compareMas(int* source, int* dest, int size) {
	for (int i = 0; i < size; i++) {
		if (source[i] != dest[i])
			return -1;
	}
	return 0;
}

//������� 4:
//�������� �������� �� ������� ����� n-�� �������� �������. ������ ������� ������ ����������� ������.
void deleteFromMas(int* source,int n, int size) {

}

// ������� 5:
// �������� ������� ������ ������ �� n-��������� � ����������� ������� ��������� ������

void rShiftMas(int* source,int n, int size) {

}



// ������� 6:
// �������� ������� ������ ����� �� n-��������� � ����������� ������� ��������� ������
void lShiftMas(int* source,int n, int size) {

}


// ������� 7:
// �������� ������� ������ ����� �� n-��������� � ��������� ����������� ��������� � �����
void lRoundShiftMas(int* source,int n, int size) {

}


// ������� 8:
// �������� ���������� � ����� ������ �� ������� ������ ��������� �������. ������ ������� ������ ���������.
void pushToMas(int* source,int val, int size) {

}



// ������� 8:
// �������� ������� ���������� �������� �������� ��������� �������.
int averageMas(int* source, int size) {
  return 0;
}

// ������� 9:
//�������� ������� ���������� ������ ��������������� ���������� ��������� �������.
int SkoFromMas(int* source, int size) {
  return 0;
}


// �����

// ������� 0:
// �������� ������� ������������� size ��������� ������� �������� ��������� val.
int testInitByZeroMas() {
  // �������������� ....
  // initByZeroMas(int* imas, int size)
  return 0;
}




// ������� 1:
// �������� ������� ������������� size ��������� ������� �������� ��������� val.

int testInitMas()  {
  return -1;
}

//������� 2:
// �������� ������� ����������� size ��������� ������� source � ������ dest

int testCopyMas() {
  return -1;
}
  

//������� 3:
//�������� ������� ��������� size ��������� ��������  source � dest. ���� ������� ����� 0, ���� �� ����� -1

int testcompareMas() {
	int a[] = { 1,2,3,4,5,6 };
	int b[] = { 1,2,3,4,5,6 };
	if (compareMas(a, b, 6) != 0)
		return -1;
	int a1[7] = { 1,2,3,4,5,6,7 };
	int b1[6] = { 1,2,3,4,5,6 };
	int d1 = 7;
	int c1 = 6;
	if (d1 == c1) {
		if (compareMas(a1, b1, c1) == 0)
			return -1;
	}	
	int a2[] = { 1,2,3,4,5,6 };
	int b2[] = { 1,2,3,4,5,6,7,8,9 };
	if (compareMas(a2, b2, 8) == 0)
		return -1;
	int a3[] = { 7,8,3,2,5,6 };
	int b3[] = { 1,2,3,4,5,6,5 };
	if (compareMas(a3, b3, 3) == 0)
		return -1;
	return 0;
}

//������� 4:
//�������� �������� �� ������� ����� n-�� �������� �������. ������ ������� ������ ����������� ������.
int testDeleteFromMas() {
  return -1;
}

// ������� 5:
// �������� ������� ������ ������ �� n-��������� � ����������� ������� ��������� ������

int testrShiftMas() {
  return -1;
}



// ������� 6:
// �������� ������� ������ ����� �� n-��������� � ����������� ������� ��������� ������
int testlShiftMas() {
  return -1;
}


// ������� 7:
// �������� ������� ������ ����� �� n-��������� � ��������� ����������� ��������� � �����
int testlRoundShiftMas() {
  return -1;
}


// ������� 8:
// �������� ���������� � ����� ������ �� ������� ������ ��������� �������. ������ ������� ������ ���������.
int testPushToMas() {
    return -1;
}


// ������� 8:
// �������� ������� ���������� �������� �������� ��������� �������.
int testAverageMas() {
  return -1;
}

// ������� 9:
//�������� ������� ���������� ������ ��������������� ���������� ��������� �������.
int testSkoFromMas() {
  return -1;
}


void runTest(int (*testFunction)(),const std::string& testName)
{
  if(testFunction()==0)
    std::cout << "Test "<< testName << " - OK" << std::endl;
  else 
    std::cout << "Test "<< testName << " - FAIL" << std::endl;
}



int main() {
   runTest(testInitByZeroMas,"testInitByZeroMas");
   runTest(testInitMas,"testInitMas");
   runTest(testCopyMas,"testCopyMas");

   runTest(testCompareMas,"testCompareMas");
   runTest(testSkoFromMas,"testSkoFromMas");
}

