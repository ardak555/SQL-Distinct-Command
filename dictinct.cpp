#include <iostream>


 
 using namespace std;

int main(int argc, char** argv) {
	int n,i,sayac,sayac1,sayac2,sayac3;
	cout<<"Dizi indis degerini girin:";
	cin>>n;
	string isimler[n];
	
	//hepsini ayný mý ayýrt etmeden yazan kod
	
	for(i=0;i<n;i++){
		cout<<i+1<<".isim:";
		cin>>isimler[i];
	}
	cout<<"Tekrarli Olanlar :";
	for(int j=0;j<n;j++){
		cout<<isimler[j]<<" ";
	}
	cout<<endl;

	//hepsini tek yazan kod
	cout<<"Tekrarsiz Olanlar :";
	 for(int a=-1;a<n;a++){
	 	for(int k=0;k<a;k++){
	 		if(isimler[a]==isimler[k]){
	 			sayac++;
			 }
	 		
		 }
		 if(sayac==0){
		 	cout<<isimler[a]<<" ";
		 	sayac1++;
		 }
		 else sayac=0;
	 }
	 cout<<endl;
	 string 
	// gruplu sayý yazdýrma
	cout<<"Grup By kodu"<<endl;
	for(int l=0;l<n;l++){
		for(int k=0;k<=l;k++){
			if(isimler[l]==isimler[k]){
				
			}
			
			i
	 
	
	//dizinin eleman sayýsýný bulma
	cout<<"----Eleman Sayilari----"<<endl;
	int toplamBoyut=sizeof(isimler);
    int turBoyutu=sizeof(*isimler);
	int elemanSayisi=toplamBoyut/turBoyutu;
	cout<<"Ana Dizinin Eleman Sayisi : "<<elemanSayisi<<endl; 
	

	
	cout<<"Tekrarsiz Dizinin Eleman Sayisi :"<<sayac1;
	
	return 0;
}
