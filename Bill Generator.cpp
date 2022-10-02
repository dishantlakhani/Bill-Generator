#include<iostream>
#include<fstream>
using namespace std;


int main(){
	int a;
	cout<<"Enter 1 to generate a new bill"<<endl<<"Enter 2 to view an already generated bill";
	cin>>a;
	if(a==1){
	
	string date;
	string time;
	cout<<"Enter Date in format (MM-DD-YYYY)";
	for(int i=0;i<10;i++){
	
	cin>>date[i];}
	cout<<"Enter Time in format (hh-mm-ss)";
	
	for(int i=0;i<8;i++){
	
	cin>>time[i];}
	
	ofstream fout;
	fout.open("date[10]+'_'+time[8].txt",ios::app|ios::binary);
	for(int i=0;i<4;i++)
{string name;
float price;
cout<<"Enter item name (if all items entered then enter 0)";
cin>>name;
	fout<<name;
cout<<endl<<"Enter price of the item(if all item's price entered then enter 0)";
cin>>price;
fout<<price;
	}fout.close();	
}
else{
	string date1;
	string time1;
	cout<<"Enter date of the bill you wish to view";
	cin>>date1;
	cout<<endl<<"Enter date of the bill you wish to view";
	cin>>time1;
	ifstream fin;
	fin.open(string date1+string time1.txt,ios::in|ios::binary);
	if(!fin){
		cout<<endl<<"Bill not available";
	}
	else{
		while(!fin.eof()){
			fin.read((string*)this,sizeof(*this));
		cout<<endl<<"order item name   "<<name<<endl<<"item price   "<<price<<endl;	
		}
		
	}
	}
}
return 0;
}