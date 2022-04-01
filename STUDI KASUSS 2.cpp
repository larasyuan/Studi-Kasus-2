#include<iostream>
using namespace std;
int main (){
	int menu, jml, bayar,ongkir,total_beli,potkir;
	float diskon;
	char jarak;
	char tambah;
	x:
		
	cout<<"Menu yang tersedia: "<<endl;
	cout<<"1. Ayam Geprek : 21.000"<<endl;
	cout<<"2. Ayam Goreng : 17.000"<<endl;
	cout<<"3. Udang Goreng: 19.000"<<endl;
	cout<<"4. Cumi Goreng : 20.000"<<endl;
	cout<<"5. Ayam Bakar  : 25.000"<<endl;
	cout<<"========================"<<endl;
	
	cout<<"PILIH MENU : ";
	cin>>menu;
	cout<<"Jumlah pesanan : ";
	cin>>jml;
	
	switch(menu){
		case 1:
			total_beli = 21000*jml;
			break;
		case 2:
			total_beli = 17000*jml;
			break;
		case 3:
			total_beli = 19000*jml;
			break;
		case 4:
			total_beli = 20000*jml;
			break;
		case 5:
			total_beli = 25000*jml;
			break;
	}
	
	cout << "===================================== \n";
	cout << "Masukkan Jarak tempuh[KM] yang akan dilalui : ";
	cin >> jarak;
	
	if(jarak < 3) {
		cout <<"Biaya Ongkir dikenakan sebanyak Rp.15,000" <<endl;
		ongkir = 15000;
	} else if(jarak >= 3) {
		cout <<"Biaya Ongkir dikenakan sebanyak Rp.25,000" <<endl;
		ongkir = 25000;
	} 
	
	if(total_beli > 25000 && total_beli <= 50000 ){
		cout <<"Mendapatkan Potongan Ongkir Rp.3000\n";
		potkir = ongkir - 3000;
		diskon = 0 * total_beli;
 	
	} else if(total_beli > 50000 && total_beli <= 150000) {
		cout <<"\nMendapatkan Potongan ongkir Rp.5000 dan diskon 15% \n";
		potkir = ongkir - 5000;
		diskon = 0.15 * total_beli;
	} else if(total_beli > 150000) {
		cout <<"\nMendapatkan Potongan ongkir Rp.8000 dan diskon 35% \n";
		potkir = ongkir - 8000;
		diskon = 0.35 * total_beli;
	} else {
		cout << "\nTidak mendapat potongan";
	}
	cout <<"\nJumlah Bayar : Rp." <<total_beli <<endl;
	cout <<"Jarak tempuh : " <<jarak <<" KM." <<endl;
	cout <<"Total Ongkir : Rp." <<potkir <<endl;
	cout <<"Diskon       : Rp." <<diskon <<endl; 
	cout <<"Total Bayar  : Rp." <<total_beli - diskon + potkir <<endl<<endl;
	cout << "----------------------------------- \n";
	cout <<"Bayar        : Rp.";
	cin >> bayar; 
	cout <<"Kembali      : Rp.";
	cout <<(bayar - (total_beli - diskon + potkir)) <<endl;
	
	cout << "------------------------------------\n";
	
	cout<<"Apakah ada pesanan lagi? (y/n)";
	cin>>tambah;

    if (tambah =='y'){
    cout<<"Pesanan mu telah selesai ";
    	system("cls");
    	goto x;
	}else(tambah =='n');{
		exit(0);
	}
}
