#include<iostream>
#include<conio.h>
using namespace std;

struct data{
char data[100];
int x, max;
}q;

void add()
{
	if(q.x<q.max){
		q.x++;
		cout<<"Masukan Data => ";
		cin>>q.data[q.x];
	}
	else{
		cout<<"Queue Penuh";
		getch();
	}
}


void erase(){
	if(q.x>=1){
		cout<<"Data Yang di Pilih => "<<q.data[1];
		for(int a=1; a<=q.x; a++){
			q.data[a]=q.data[a+1];
		}
		q.x--;
	}
	else{
		cout<<"Tidak ada data yang terambil";
	}
}

void print(){
	if(q.x>=1){
		cout<<"Queue data :\n";
		for(int a=1; a<=q.x; a++){
			cout<<"\t\t"<<q.data[a]<<endl;
		}
	}
	else{
		cout<<"Tidak Ada Data ";
	}
}

int main(){

	back:
	cout<<"===================================\n";
	cout<<"PROGRAM OF QUEUE\n";
	cout<<"===================================\n\n";
		
		int c;
		cout<<"Masukan Maxsimum data queue => ";
		cin>>q.max;
		q.x=0;
	
	menu:
	system("cls");
	cout<<"+++++++++++++++++++++++++++++++\n";
	cout<<"Choose what you want to do :  +\n";
	cout<<"(1) Add                       +\n";
	cout<<"(2) Erase                     +\n";
	cout<<"(3) Print                     +\n";
	cout<<"(4) Change maximum value      +\n";
	cout<<"Please enter your choice >> ";
	cin>>c;

	switch(c){
		case 1: add(); goto menu; break;
		case 2: erase();  getch();goto menu; break;
		case 3: print();getch();  goto menu;
		case 4: system("cls"); goto back; break;
		default: getch(); goto menu;
	}
	getch();
}
