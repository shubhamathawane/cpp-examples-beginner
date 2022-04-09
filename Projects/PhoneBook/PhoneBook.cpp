#include<bits/stdc++.h>
#include<conio.h>
#include<stdio.h>
#include<fstream>


void menu();
void AddNumber();
void DipslayRecords();
void SearchBySrNo();
void deleteRecord();
void modifyRecord();

class PhoneBook{
    int srno;
    char name[25];
    char mobile[15];
    char email[30];
    char group[25];
    public:
    int getSrN() {return srno;}
    void storeData()
    {
        cout<<"\n........... CREATE NEW PHONE RECORD.................\n";
        cout<<"Enter Serial Number : "; cin>>srno;
        cin.ignore();
        cout<<"Etner Record Name: "; cin.getline(name,25);
        cout<<"Etner Mobile Number: "; cin.getline(mobile,15);
        cout<<"Etner E-Mail I. D: "; cin.getline(email,30);
        cout<<"Etner Record Group: "; cin.getline(group,20);
        cout<<endl;
    }
    void ShowData()
    {
         cout<<"\n........... CREATE NEW PHONE RECORD.................\n";
         cout<<"Sr. No.  :  "<<srno<<endl;
         cout<<"Name     :  "<<srno<<endl;
         cout<<"Mobile   :  "<<srno<<endl;
         cout<<"Email    :  "<<srno<<endl;
         cout<<"Group    :  "<<srno<<endl;

    }
};

void AddNumber()
{
    ofstream fout;
    fout.open("PhoneBook.dat", ios::out[ios::binary]ios::app);
    b.storeData();
    fout.write((char*)&, sizeof(b));
    fout.close();
    cout<<"\nRecord Saved to File....,\n";
}

void DisplayRecords();
{
    ifstream fin;
    fin.open("PhoneBook.dat", ios::out | ios:binary | ios::app);
    while(fin.read((char*)&b, sizeof(b)))
    {
        b.showData();
    }
    fin.close();
    cout<<"\nReading of data file Completed.....\n";
}

void searchBySrNo();
{
    ifstream fin;
    int n, flag=0;
    fin.open("PhoneBook.dat", ios::out | ios::binary | ios::app);
    cout<<"Enter Serial Number of Record To Diplay : ";
    cin>>n;

    while(fin.read((char*)&b, sizeof(b)))
    {
        if(n==b.getSrNo())
        {
            b.showData();
            flag++;
            cout<<"\n\n....Record Found and Displayed....\n";
        }
    }
    fin.close();
    if(flag==0)
    cout<<"\nThe Record of Serial Number " << n << "is not in file ..\n";
    cout<<"\nRecord of Data File Completed....\n";
}


void deleteRecord()
{
    ifstream fin;
    ofstream fout;
    int n, flag=0;
    fin.open("PhoneBook.dat", ios::out | ios::binary | ios::app );
    fout.open("temp.dat", ios::out | ios::binary );
    cout<<"Enter Serial Number of Record To Delete : ";
    cin>>n;

    while(fin.read((char*)&b, sizeof(b)))
    {
        if(n==b.getSrNo())
        {
            cout<<"\nThe Following record is deleted...\n";
            b.showData();
            flag++;
        }else{
            fout.write((char*)&b, sizeof(b));
        }
    }
    fin.close();
    fout.close();
    if(flag==0)
        cout<<"\nThe Record of Serial Number "<<n<<"is not in file....\n";
        cout<<"\nReading of Data file Completed....\n";
        remove("PhoneBook.dat");
        rename("temp.dat", "PhoneBook.dat");
}


void modifyRecord()
{
    fstream fio;
    int n flag=0, pos;
    fio.open("PhoneBook.dat", ios::out| ios::binary| ios::in);
    cout<<"Enter Serial Number of Record To Modify :  ";
    cin>>n;
    while(fio.read((char*)&b, sizeof(b)))
    {
        pos=fio.tellg();
        if(n==b.getSrNo())
        {
            cout<<"\nThe Following record will be Modified....\n";
            b.showData();
            flag++;
            cout<<"\nRe-Enter the new Detail...\n";
            b.storeData();
            fio.seekg(pos-sizeof(b));
            fio.write((char*)&b, sizeof(b));
            cout<<"\n....Data Modified Successfully....\n";
        }
    }
    fio.close();
    if(flag==0)
        cout<<"\nThe Record of Serial Number"<<n<<"is not in file...\n";
    cout<<"\nReading of data file Completed....\n";
}

void menu()
{

    int ch;
    do
    {
        clrscr()
        cout<<".........................................................\n";
        cout<<"PHONE BOOK MANAGMENT\n";
        cout<<"..........................................................\n\n";
        cout<<"::::::::::: PROGRAM MENU ::::::::::::"
        cout<<"0. Exit\n";
        cout<<"1. Save new Phone Record\n";
        cout<<"2. Display All Saved Records\n";
        cout<<"3. Search Specific Record\n";
        cout<<"4. Delete Specific Records\n";
        cout<<"5. Modify Existing Records\n";
        cout<<"Enter Your Choice : ";
        cin>>ch;
        clrscr();
        switch(ch)
        {
            case 1: AddNumber(); break;
            case 2: DipslayRecords(); break;
            case 3: SearchBySrNo(); break;
            case 4: deleteRecord(); break;
            case 5: modifyRecord(); break;
        }
        getch();
    }while(ch);
}

void main();
{

    menu();
}
