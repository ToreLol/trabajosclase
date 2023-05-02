
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> inventory;
    
    inventory.push_back("espada");
    inventory.push_back("escudo");
    inventory.push_back("martillo");
    
    cout << "tienes " << inventory.size() << " items en tu inventario" << endl;
    
    for(unsigned int i=0; i< inventory.size();i++)
    {
        cout << inventory[i] << endl;
    }
    
    cout<< "\ncambiaste tu "<< inventory [0] <<" por una bomba\n";
    inventory [0]= "bomba";
    
    cout<<inventory[0]<<"\ntiene "<<inventory.size()<< " letras en el\n";
    
    cout << "\ntu martillo fue destruido en la ultima batalla\n";
    inventory.pop_back();
    
    for(unsigned int i=0; i< inventory.size();i++)
    {
        cout << inventory[i] << endl;
    }
    
    cout<<"\nun enemigo te ha robado todas tus armas\n"<<endl;
    inventory.clear();
    
    if(inventory.empty()){
        cout<<"\nno tienes nada\n";
    }else{
        for(unsigned int i=0; i< inventory.size();i++)
    {
        cout << inventory[i] << endl;
    }
    }
    
    string armas;
    
    cout<<"\nelige 5 armas que quieras\n";
    do{
    cin>>armas;  
    
    inventory.push_back(armas);
}while (inventory.size()!=5);

cout<<"\ntu inventario ahora tiene estos items\n";

for(unsigned int i=0; i< inventory.size();i++)
    {
        cout << inventory[i] << endl;
    }

    return 0;
}
