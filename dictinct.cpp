#include <iostream>


 
 using namespace std;

int main(int argc, char** argv) {
	int n,i,sayac,sayac1,sayac2,sayac3;
	cout<<"Dizi indis degerini girin:";
	cin>>n;
	string isimler[n];
	
	//hepsini aynı mı ayırt etmeden yazan kod
	
	for(i=0;i<n;i++){
		cout<<i+1<<".isim:";
		cin>>isimler[i];
	}
	cout<<"Tekrarli Olanlar :";
	for(int j=0;j<n;j++){
		cout<<isimler[j]<<" ";
	}
	cout<<endl;

	


	//hepsini tek yazan kod non repetitive code
	cout<<"Tekrarsiz Olanlar (non repetitive) :";
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
	 
	//dizinin eleman sayýsýný bulma(element numbers)
	cout<<"----Eleman Sayilari----"<<endl;
	int toplamBoyut=sizeof(isimler);
    int turBoyutu=sizeof(*isimler);
	int elemanSayisi=toplamBoyut/turBoyutu;
	cout<<"Ana Dizinin Eleman Sayisi (mainn element numbers) : "<<elemanSayisi<<endl; 
	

	
	cout<<"Tekrarsiz Dizinin Eleman Sayisi (non repetitive element numbers) :"<<sayac1;
	
	return 0;
}
