#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
string nombre, linea;
int lineas=0,letras=0;
cout << "oye, este programa sirve para abrir un archivo de texto y contar cuantas lineas hay y cuantas letras"<< endl;
cout << "dame el nombre de tu archivo junto a su extencion"<<endl;
cin >> nombre;

do{
  ifstream file(nombre.c_str());
  if (file.is_open() ){

    while(! file.eof() ){
      getline(file, linea);
      lineas +=1;
      letras += linea.size();
    }
    cout << "Hay  "<< lineas <<" lineas"<<endl;
    cout << "Hay" << letras <<"letras" <<endl;
    break;

  } else{
    cout << "no se encontró el archivo, por favor escribe bien el nombre junto con la extencion"<< endl;
    cout << "dame el nombre de tu archivo junto a su extencion"<<endl;
    cin >> nombre;

  }
} while(true);
return 0;
}
return 0;

}
