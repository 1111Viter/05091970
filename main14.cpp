#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;
	
struct A
{
	char n[30];
	char name2[30];
    char adres[25];
    long long int num;
}st;
void inp(A st);
void show_all(A st);
void search_nomer(A st);
void search_name(A st);
void search_name2(A st);
void search_adres(A st);
void print_abon(A st);
FILE *f;
char file_name[20];
int main(){
	int c;
 
	cout<<"Please, enter name file:"; gets(file_name);
             FILE *f=fopen(file_name,"a+");
           system("cls"); 
m:	cout<<"1 - write;\n"
          "2 - show all;\n"
          "3 - search number;\n"
          "4 - search name;\n"
          "5 - search second name;\n"
          "6 - search address;\n"
          "0 - exit.\n"<<endl; 
cin>>c;
	switch(c)
				{
				case 1:inp(st);break;
				case 2:show_all(st);break;
				case 3:search_nomer(st);break;
				case 4:search_name(st);break;
				case 5:search_name2(st);break;
				case 6:search_adres(st);break;
				case 0: exit(0);fclose(f); break;
				default:system("cls");cout<<"Error!";break;
				}
	getch();
	system("cls");
	goto m;
    	return 0;
}
void inp(A st)
{   
    system("cls");
    cout<<"Enter information"<<endl;
    f=fopen(file_name,"a+");
	cout<<"Name: ";
	cin>>st.n;
    cout<<"Second name: ";
    cin>>st.name2;
    cout<<"Address: ";
    cin>>st.adres;
	cout<<"Number: ";
	cin>>st.num;
	fwrite(&st,sizeof(A),1,f);
   fclose(f);
}
void print_abon(A st)
{
    cout<<"Name: "<<st.n<<endl;
    cout<<"Second name: "<<st.name2<<endl;
	cout<<"Address: "<<st.adres<<endl;
	cout<<"Number: "<<st.num<<endl;
	cout<<endl;
}
void show_all(A st)
{
	f=fopen(file_name,"ab+");
	int c,k = 0;
	 system("cls");
	 	while((c=fread(&st,sizeof(A),1,f))!=NULL)
     {      
		print_abon(st);
		k++;
	}
	cout<<"Found "<<k<<" abonents"<<endl;
	 fclose(f);
}
void search_nomer(A st)   
{
	f=fopen(file_name,"ab+");
	long int num2;
	int c,k=0;
	 system("cls");
	 cout<<"Enter number:" ; cin>>num2; cout<<endl;
	 	while((c=fread(&st,sizeof(A),1,f))!=NULL){ 
   if(num2==st.num)
     {
		print_abon(st);
         k++;
	}}
		cout<<"Found "<<k<<" numbers"<<endl;
	 fclose(f);
}
void search_name(A st)   
{
	f=fopen(file_name,"ab+");
	char nam1[60];
	int c,k=0;
	 system("cls");
	 cout<<"Enter name:" ; cin>>nam1; cout<<endl;
	 	while((c=fread(&st,sizeof(A),1,f))!=NULL){ 
   if(strcmp(st.n, nam1)== 0)
     {
		print_abon(st);
         k++;
	}}
		cout<<"Found "<<k<<" names"<<endl;
	 fclose(f);
}
void search_name2(A st)   
{
	f=fopen(file_name,"ab+");
   char nam2[60];
	int c,k=0;
	 system("cls");
	 cout<<"Enter second name:" ; cin>>nam2; cout<<endl;
	 	while((c=fread(&st,sizeof(A),1,f))!=NULL){ 
  if(strcmp(st.name2, nam2)== 0)
     {
		print_abon(st);
         k++;
	}}
		cout<<"Found "<<k<<" second names"<<endl;
	 fclose(f);
}
void search_adres(A st)  
{
	f=fopen(file_name,"ab+");
   char adres2[60];
	int c,k=0;
	 system("cls");
	 cout<<"Enter address:" ; cin>>adres2; cout<<endl;
	 	while((c=fread(&st,sizeof(A),1,f))!=NULL){ 
   if(strcmp(st.adres, adres2)== 0)
     {
		print_abon(st);
         k++;
	}}
		cout<<"Found "<<k<<" address"<<endl;
	 fclose(f);
}


