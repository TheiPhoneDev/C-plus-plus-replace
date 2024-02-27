#include <iostream>


using namespace std;


//prototipi
void caricaVettori(char vet1[], char vet2[], char vetS[]);
void stampaVettori(char vet1[], char vet2[]);
void sostituisciElementiComuni(char vet1[], char vet2[]);
int Menu();


string s = "";


int main() {

  char v1[20], v2[5];
  char vetS[20];

  int scelta;


  do{
      scelta=Menu();
      switch(scelta){
        case 1:
          caricaVettori(v1,v2,vetS);
          break;
        case 2:
          stampaVettori(v1,v2);
          break;
        case 3:
          sostituisciElementiComuni(v1,v2);
          cout<<"vettore 1 prima della modifica: "<<endl;
          cout<<vetS<<endl;
          break;
        case 0:
          cout<<"Esci"<<endl;
          break;	
        default:
          cout<<"Attenzione, scelta sbagliata!"<<endl;
          break;
      } 
  }while (scelta!=0);

  return 0;
  
}

int Menu () {
  int scegli;
  cout<<"-------MENU'-------"<<endl;
  cout<<"1-Carica elementi nei due vettori"<<endl;
  cout<<"2-Visualizza i vettori"<<endl;
  cout<<"3-Sostituisci elementi del primo vettore"<<endl;
  cout<<"0-Fine"<<endl;

  cout<<"Scegli un operazione: "<<endl;
  cin>>scegli;

  return scegli;
}



void caricaVettori(char vet1[], char vet2[], char vetS[]) {
  int i=0;
  int j=0;
  int k=0;

  //caricamento del primo vettore
  
  cout<<endl;

  cout<<"Carica il primo vettore: "<<endl;
  while(i<20) {
    cout<<"Inserisci il "<<i+1<<"° elemento: ";
    cin>>vet1[i];
    //s=s+" "+vet1[i];
    vetS[i]=vet1[i];
    i++;
  }

  cout<<endl;


  //caricamento del secondo vettore

  cout<<endl;

  cout<<"Carica il secondo vettore: "<<endl;
  while(j<5) {
    cout<<"Inserisci il "<<j+1<<"° elemento: ";
    cin>>vet2[j];
    j++;
  }

  cout<<endl;
  
}


void stampaVettori(char vet1[], char vet2[]) {
  int i=0;
  int j=0;

  //stampa del primo vettore

  cout<<endl;

  cout<<"Elementi del primo vettore: "<<endl;
  while(i<20) {
    cout<<vet1[i]<<endl;
    i++;
  }

  cout<<endl;


  //stampa del secondo vettore

  cout<<endl;

  cout<<"Elementi del secondo vettore: "<<endl;
  while(j<5) {
    cout<<vet2[j]<<endl;
    j++;
  }

  cout<<endl;
}

void sostituisciElementiComuni(char vet1[], char vet2[]) {
  int i=0;
  char asterisco = '*';
  for(i=0; i<20; i++) {
    for(int j=0; j<5; j++) {
      if(vet1[i]==vet2[j]) {
        vet1[i]=asterisco;
      }
    }
  }

  cout<<"Il vettore 1 modificato e': "<<endl;
  for(i=0;i<20;i++) {
    cout<<vet1[i]<<endl;
  }

  
}
