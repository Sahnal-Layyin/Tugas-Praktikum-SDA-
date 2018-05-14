#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;
struct node
{
  int urut; //data yang ada pada node
  node *next;
};


node *awal_ptr = NULL;
  node *posisi;         //digunakan untuk membaca sepanjang list
  int option = 0;

void tambah_awal_list()
{
  node *baru;
  baru = new node;
  cout << "Masukkan Data     : ";
  cin >> baru->urut;
  baru->next = NULL;
  if(awal_ptr == NULL)
  {
    awal_ptr=baru;
    awal_ptr->next = NULL;
  }
  else
  {
    baru->next = awal_ptr;
    awal_ptr = baru;
  }
}

void menambah_node_di_akhir()
  {
  node *temp, *temp2;   // Temporary pointers
  // menciptakan node baru
  temp = new node;
  cout << "Masukkan urut     : ";
  cin >>   temp->urut;
  temp->next = NULL;

// Set up link pada node
  if (awal_ptr == NULL)
  {
    awal_ptr = temp;
    posisi = awal_ptr;
  }
  else
  {
    temp2 = awal_ptr;
    // node tidak NULL – list tidak kosong
    while (temp2->next != NULL)
    {
      temp2 = temp2->next;
      // Memindahkan pada next link dalam rantai
    }
  temp2->next = temp;
  }
}

void display_list()
{
  node *temp;
  temp = awal_ptr;
  cout << endl;
cout << "DATA [";
  if (temp == NULL)
    cout << "List kosong!" << endl;
  else
  {
    while (temp != NULL)
    {  // Menampilkan detail data

     cout << "" << temp->urut << ",";

     if (temp == posisi)
        cout << "     <<<< posisi node";
//     cout << endl;
     temp = temp->next;
    }
    cout << "] ";
    cout << "Akhir list!" << endl;
  }

}

void hapus_awal_node()
{
  node *temp;
  temp = awal_ptr;
  awal_ptr = awal_ptr->next;
  delete temp;
}

void hapus_akhir_node()
{
  node *temp1, *temp2;
  if (awal_ptr == NULL)
    cout << "List kosong!" << endl;
  else
  {
    temp1 = awal_ptr;
    if (temp1->next == NULL)
    {
      delete temp1;
      awal_ptr = NULL;
    }
    else
    {
      while (temp1->next != NULL)
      {
        temp2 = temp1;
        temp1 = temp1->next;
      }
      delete temp1;
      temp2->next = NULL;
    }

   }
}


int init(int nilai){
 node *baru;
  baru = new node;
  baru->urut=nilai;
  baru->next = NULL;
  if(awal_ptr == NULL)
  {
    awal_ptr=baru;
    awal_ptr->next = NULL;
  }
  else
  {
    baru->next = awal_ptr;
    awal_ptr = baru;
  }
}

int main()
{
 cout << "===============================" << endl;
  cout << "NAMA : Sahnal Layyin" << endl;
  cout << "NIM : 0110217043" << endl;
  cout << "STRUKTUR DATA DAN ALGORITMA" << endl;
  cout << "===============================" << endl;
  awal_ptr = NULL;
  do
  {
//    clrscr();
    cout << endl;
    cout << "MENU PILIHAN : " << endl;
    cout << "0. Keluar program." << endl;
    cout << "1. Tambah awal list." << endl;
    cout << "2. Tambah akhir list." << endl;
    cout << "3. Hapus awal list."<< endl;
    cout << "4. Hapus akhir list."<< endl;
    cout << "5. tampilkan list data." << endl;
    cout << endl << " Pilihan >> ";
    cin >> option;

switch (option)
  {
  case 1 : tambah_awal_list();
    break;
  case 2 : menambah_node_di_akhir();
    break;
  case 3 : hapus_awal_node();
    break;
  case 4 : hapus_akhir_node();
    break;
  case 5 : display_list();
    break;
  }
 }
while (option != 0);
}
