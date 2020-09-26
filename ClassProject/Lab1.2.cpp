#include <iostream>
#include <clocale>
#include <conio.h>
#include <test.cpp>
using namespace std;


class Price {
  string productName, storeName;
  int productPrice;

  public:
  //  Price(){productName = ""; storeName = ""; productPrice = 0;};
    void init(string pN, string sN, int pP){
        productName = pN;
        storeName = sN;
        productPrice = pP;
    }
    string getProductName(){return productName;}
    string getStoreName(){return storeName;}
    int getProductPrice(){return productPrice;}
	void print();
	void printProductName();
	void dataProcessing(Price& p2);
	void dataOutput(Price& p2);
	void dataRecording(Price& p2);
};

void Price::print(){
	std::cout <<"�������� ������: "<<productName;
	std::cout <<"\n�������� ��������: "<<storeName;
	std::cout <<"\n���� ������: "<<productPrice<< " ������\n\n";
}

void Price::printProductName(){
	std::cout <<"�������� ������: "<<productName;
	std::cout <<"\n���� ������: "<<productPrice<< " ������\n\n";
}


void Price::dataRecording(Price& p2){
	system ("cls");
	string pN, sN;
    int pP; 
		cout <<"		1. ������ ������ � ����������\n\n";
		cout <<"	���� ��� ������� ������\n";
		cout <<"������� �������� ������:\n "; cin >> pN;
		cout <<"������� �������� ��������, ��� �������� ���� �����:\n "; cin >> sN;
		cout <<"������� �������� ������ "<< pN <<":\n "; cin >> pP;
		init(pN, sN, pP);
		
		cout <<"\n\n	���� ��� ������� ������\n";
		cout <<"������� �������� ������:\n "; cin >> pN;
		cout <<"������� �������� ��������, ��� �������� ���� �����:\n "; cin >> sN;
		cout <<"������� �������� ������ "<< pN <<":\n "; cin >> pP;
		p2.init(pN, sN, pP);
		cout <<"\n������ �������";
		getch();
		system ("cls");
}

void Price::dataOutput(Price& p2){
	system ("cls");
	cout <<"		2. ����� ������ �� �������\n\n";
	print();
	p2.print();
//	print(p1);
//	print(p2);
	Test *test1 = new Test();
	test1->print();
	getch();
	system ("cls");
	
}

void Price::dataProcessing(Price& p2){
	system ("cls");
	cout <<"		3. ��������� ������\n\n";
	cout <<"  ������ ��������� � ����� �� ������� �������� ������,\n";
	cout <<" ��������� �������� ��������� 2000 ������, ���� ����� ������� ���,\n";
	cout <<" ������ �� ������� ��������������� ���������.\n\n";
	getch();
	if (getProductPrice() > 2000) printProductName();
	cout <<"\n";
	if (p2.getProductPrice() > 2000) p2.printProductName();
	if ((getProductPrice() <= 2000) && (p2.getProductPrice() <= 2000))
	cout <<"������� � ����� ����� 2000 ���\n";
	getch();

	system ("cls");
}

void helloScreen(){
	cout <<" *****************************************************\n";
	cout <<" *****************************************************\n";
	cout <<" *****************************************************\n";
	cout <<" �����������  ������������      ��������      ��������\n";
	cout <<" �����������  ���������������   ���������    ���������\n";
	cout <<"    �����        ����   �����     ��������  ��������\n";
	cout <<"    �����        �����������      ����  ��� ��� ����\n";
	cout <<"    �����        �����������      ����  ������� ����\n";
	cout <<"    �����        ����   �����     ����   �����  ����\n";
	cout <<" �����������  ���������������   ������    ���   ������\n";
	cout <<" �����������  ������������      ������     �    ������\n";
	cout <<" *****************************************************\n";
	cout <<" *  This system is for the use of authorized users   *\n";
	cout <<" *  only. Usage of  this system may be monitored     *\n";
	cout <<" *  and recorded                                     *\n";
	cout <<" *****************************************************\n";
	getch();
	system ("cls");
	
	
}

void startMenu(){
	
	cout <<"������� ������� ��    �� ������� ��    �� \n";
	cout <<"��      ��      ��    �� ��      ��    �� \n";
	cout <<"������� �����   ��    �� ������� ��    �� \n";
	cout <<"     �� ��       ��  ��       �� ��    �� \n";
	cout <<"������� �������   ����   �������  ������  \n\n";
	
	cout <<"		����\n\n";
	cout <<"	1. ������ ������ � ����������;\n";
	cout <<"	2. ����� ������ �� �������;\n";
	cout <<"	3. ��������� ������;\n";
	cout <<"	0. �����.\n";
}

int main(int argc, char** argv) {
	//setlocale(LC_ALL, "rus");
	system("chcp 1251 > null");
/*	Price price;
	init(price, "Potato","Paterochka", 55);
	print(price); */
	Price *price1 = new Price();
	Price *price2 = new Price();
	helloScreen();
	int i = -1;	
	while(i){		
		startMenu();		
		cin >> i;
				
		switch(i) {			
			case 0: break; //����� �� ���������
		    case 1: price1->dataRecording(*price2);  break; //������ ������ � ����������
		    case 2: price1->dataOutput(*price2); break; // ����� ������ �� �������
		    case 3: price1->dataProcessing(*price2); break; // ��������� ������
		    default: cout <<"������� �������� ��������, ��������� �������\n";  getch(); system ("cls"); break;			
		}
	}	
delete price1;
delete price2;
return 0;
}
