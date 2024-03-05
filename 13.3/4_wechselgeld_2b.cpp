#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  double zuZahlen=0.0, gegeben=0.0, rueckgeld=0.0;
  double cent;
  int z=0, intRueck=0;

//  cout << "Zu Zahlen: ";
//  cin >>  zuZahlen;
  srand(time(NULL));
  
  cent=rand()%100;	//werte zwischen 0-99
  zuZahlen=rand()%101 + cent/100;
  
  cout << "Bitte zahlen Sie: " << zuZahlen << endl;
  
  cout << "Gegeben: ";
  cin >>  gegeben;
  
  while(gegeben<zuZahlen){
  	  cout << "Das war zuwenig, mehr! ";
      cin >>  gegeben;
  }
  
  rueckgeld = gegeben-zuZahlen;
  
  cout << "Sie erhalten: "  << rueckgeld << " zurueck." << endl;
  
  intRueck = round(rueckgeld*100);  // funktioniert bei 1.11 nicht und 2 gegeben
  z = intRueck / 50000;			
  intRueck=intRueck % 50000;
  
  if(z>0){
  	cout << z << "x 500,00\n";
  	z=0;
  }
  
  z = intRueck / 20000;			
  intRueck=intRueck % 20000;
  if(z>0){
  	cout << z << "x 200,00\n";
  	z=0;
  }

  z = intRueck / 10000;			
  intRueck=intRueck % 10000;
  
  if(z>0){
  	cout << z << "x 100,00\n";
  	z=0;
  }

  z = intRueck / 5000;			
  intRueck=intRueck % 5000;
  
  if(z>0){
  	cout << z << "x  50,00\n";
  	z=0;
  }
  
  z = intRueck / 2000;			
  intRueck=intRueck % 2000;
  
  if(z>0){
  	cout << z << "x  20,00\n";
  	z=0;
  }
  
  z = intRueck / 1000;			
  intRueck=intRueck % 1000;
  
  if(z>0){
  	cout << z << "x  10,00\n";
  	z=0;
  }

  z = intRueck / 500;			
  intRueck=intRueck % 500;
  
  if(z>0){
  	cout << z << "x   5,00\n";
  	z=0;
  }
  
  z = intRueck / 200;			
  intRueck=intRueck % 200;
  
  if(z>0){
  	cout << z << "x   2,00\n";
  	z=0;
  }
  
  z = intRueck / 100;			
  intRueck=intRueck % 100;
  
  if(z>0){
  	cout << z << "x   1,00\n";
  	z=0;
  }

  z = intRueck / 50;			
  intRueck=intRueck % 50;
  
  if(z>0){
  	cout << z << "x   0,50\n";
  	z=0;
  }
  
  z = intRueck / 20;			
  intRueck=intRueck % 20;
  
  if(z>0){
  	cout << z << "x   0,20\n";
  	z=0;
  }
  
  z = intRueck / 10;			
  intRueck=intRueck % 10;
  
  if(z>0){
  	cout << z << "x   0,10\n";
  	z=0;
  }
  

  z = intRueck / 5;			
  intRueck=intRueck % 5;
  
  if(z>0){
  	cout << z << "x   0,05\n";
  	z=0;
  }
  
  z = intRueck / 2;			
  intRueck=intRueck % 2;
  
  if(z>0){
  	cout << z << "x   0,02\n";
  	z=0;
  }
  
  z = intRueck / 1;			
  intRueck=intRueck % 1;
  
  if(z>0){
  	cout << z << "x   0,01\n";
  	z=0;
  }
 return 0;
}
