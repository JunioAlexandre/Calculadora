#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int select;
    
    cout << "--------------------------------" <<endl;
    cout << "Digite 1 se deseja Somar       |" << endl;
    cout << "Digite 2 se deseja Subtrair    |" << endl;
    cout << "Digite 3 se deseja Dividir     |" << endl;
    cout << "Digite 4 se deeeja Multiplicar |" << endl;
    cout << "--------------------------------" << endl;

    cin >> select;
    cout << "===" << endl;

    switch (select)
    {
        case 1:
        {    
            int n1, n2, soma;
                
            cout << "Informe o primeiro numero a ser somado: " << endl;
            cin >> n1;
            cout << "Informe o segundo numero a ser somado: " << endl;
            cin >> n2;
            
            soma = n1 + n2;
            
            cout << "------------------------------------" << endl;
            cout << "A soma de " << n1 << " mais " << n2 << " eh, " << soma << "." << endl; 
            cout << "------------------------------------" << endl;

            break;
        }    
         case 2:
         {  
             int n1, n2, menos;
                    
            cout << "Informe o primeiro numero a ser subtraido: " << endl;
            cin >> n1;
            cout << "Informe o segundo numero a ser subtraido: " << endl;
            cin >> n2;
            
            menos = n1 - n2;
            
            cout << "------------------------------------" << endl;
            cout << "A subtracao de " << n1 << " menos " << n2 << " eh, " << menos << "." << endl; 
            cout << "------------------------------------" << endl;

            break;
         }   
          case 3:   
          {  
              int n1, n2, div;
                    
            cout << "Informe o primeiro numero a ser dividido: " << endl;
            cin >> n1;
            cout << "Informe o segundo numero a ser dividido: " << endl;
            cin >> n2;
            
            div = n1 / n2;
            
            cout << "------------------------------------" << endl;
            cout << "A divisao de " << n1 << " com " << n2 << " eh, " << div << "." << endl;
            cout << "------------------------------------" << endl;

            break;
          }  
           case 4:
           {     
            int n1, n2, mult;
                    
            cout << "Informe o primeiro numero a ser multiplicado: " << endl;
            cin >> n1;
            cout << "Informe o segundo numero a ser multiplicado: " << endl;
            cin >> n2;
            
            mult = n1 * n2;
            
            cout << "------------------------------------" << endl;
            cout << "A multiplicacao de " << n1 << " com " << n2 << " eh, " << mult << "." << endl; 
            cout << "------------------------------------" << endl;

            break;
           }
           
        default:
            cout << "Opcao invalida!!!" << endl;
            cout << "------------------" << endl;

    }        
    return 0;
}

