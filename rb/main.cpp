#include <iostream>
#include <bits/stdc++.h>
#include "rb.h"
using namespace std;
int main(){
	rb<int,int> rb1;


	int iSecret, jSecret;
    srand (time(NULL));


    for(int i=1;i<30;i++){
        iSecret = rand() % 30 + 1;
        rb1.insert(iSecret,jSecret);
        rb1.dibujararbol(i);
       
    }


    for(int i=31;i<60;i++){
        iSecret = rand() % 30 + 1;
        rb1.remove(iSecret,jSecret);
        rb1.dibujararbol(i);
        cout<<iSecret<<endl;
       
    }




	/*for(int i=1;i<100;i++){
		rb1.insertValor(2,i);
	}
	*/
	//t&operator
/*
	rb1.insert(100,100);
	rb1.insert(50,50);
	rb1.insert(150,150);
	rb1.insert(120,120);
	rb1.insert(180,180);
	rb1.insert(120,120);
	rb1.insert(122,122);
	rb1.print();
cout<<endl;
cout<<endl;
	rb1.remove(120,120);
	rb1.print();
	rb1.preorder();
*/
	/*rb1.insertValor(7,32);
	rb1.insertValor(4,32);
   	rb1.insertValor(8,12);
   	rb1.insertValor(28,5);
   	//rb1.insertValor(1,80);
*/
	//rb1[7]=4;
	//rb1[4]=45;
	/*rb1[14]=20;
	rb1[8]=40;
	rb1[28]=45;
*/
	
	//rb1[19]=47;
	//rb1[6]=21;
   	//rb1.printARBOL();
   	//rb1.print();
   	/*cout<<endl;
   	rb1.preorder();
   	cout<<endl;
   	cout<<endl;
   	rb1.remove(10,20);

   	cout<<"COMO ESTA ARMADO EL ARBOL"<<endl;
   		rb1.print();
   		cout<<endl;
   		cout<<endl;
   	cout<<"COLORES DE LOS DEL RB"<<endl;	
	rb1.preorder();
	*/
}