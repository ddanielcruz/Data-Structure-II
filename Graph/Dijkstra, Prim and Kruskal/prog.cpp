#include "interface.cpp"
#include <set>
using std::set;

int main()
{
    char option;
    set<char> validOptions{'L', 'D', 'P', 'K', 'M'};

    menu();
    while(cout << "\nOpção: " && cin >> option && option != 'F')
    {
        if(!validOptions.count(option)) // Caso o caracter lido não for encontrado no Set
            cout << "Opção inválida.\n";
        else
        {
            // Chamar função
        }
    }

    return 0;
}