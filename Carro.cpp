#include <iostream>
using namespace std;
//classe
class Carro
{
    public:
    //variáveis
    string Cor;
    string Modelo;
    float VelMax;
    
    //método
    void Buzina1 ();
    void Buzina2 ();
      
    //construtor personalizado  
    Carro()
    {
    VelMax = 220.f;
    Modelo = "Camaro";
    Cor = "Amarelo";
    }
};
    
    int main()
    {
        Carro MeuCarro;
        Carro Carro2;
        
        MeuCarro.Cor = "Branco";
        MeuCarro.Modelo = "Fusca";
        MeuCarro.VelMax = 150.0f;
        
        MeuCarro.Buzina1();
        cout << MeuCarro.Cor << endl;
        cout << MeuCarro.VelMax << endl;
        cout << MeuCarro.Modelo << endl;
        
        Carro2.Buzina2();
        cout << Carro2.Cor << endl;
        cout << Carro2.VelMax << endl;
        cout << Carro2.Modelo << endl;
}
        
void Carro::Buzina1(){
    cout << "Bi, bi!!!" << endl;
}
void Carro::Buzina2(){
    cout << "Fon, fon!!!" << endl;
    }
    

