#include <iostream>
#include <cstdlib>
using namespace std;

int categorias(int carr);
void listar();

int main()
{
int opcion, total=0;

    system("CLS");

    cout << " Bienvenido a Manteca Shop\n";
    cout << "Elija una opcion\n"<<"1 - Ver listado\n2 - Comprar por categoria"<<endl;
        cin >> opcion;

    system("CLS");
    cout << "Manteca Shop\n \n";
        switch (opcion)
    {
    case 1:
        listar();
    case 2:
        categorias(total);
    default:
            cout << "Ingrese opcion valida"<<endl;
            system("CLS");
            main();

     system("CLS");




    }

}

int categorias(int carr)
{
int op , cpu , modelo_cpu , total , ram ;

    system("CLS");
    cout << "Manteca Shop                       Carrito: $"<<carr<<"\n \n";
    cout << "Elija una categoria"<<endl;
    cout << " 1 - CPU\n 2 - Motherboard\n 3 - Memorias RAM\n 4 - Discos Duros\n 5 - GPU\n 6 - Unidad de almacenamiento\n";
        cin >> op;

// Empiezan las opciones
        switch (op)
        {
// Opcion cpu
    case 1:
        cout << "Elija una marca\n 1 - AMD\n 2 - Intel"<<endl;
            cin >> cpu;
// AMD
            switch (cpu)
            {
            case 1:
                cout << "Elija un modelo"<<endl;
                cout << "1 - AMD FX 6300 @ 3.5ghz           $2.549"<<endl;
                cout << "2 - AMD APU A10 7850k @ 3.7ghz     $2.299"<<endl;
                cout << "3 - AMD FX 8350 @ 4.2ghz           $3.999"<<endl;
                    cin >> modelo_cpu;
// Suma de total
                switch (modelo_cpu)
                {
                    case 1:
                        carr=carr+2549;
                        categorias(carr);
                    case 2:
                        carr=carr+2299;
                        categorias(carr);
                    case 3:
                        carr=carr+3999;
                        categorias(carr);
                    default:
                        cout << "Ingrese una opcion valida"<<endl;
                }
// Intel
            case 2:
                cout << "Elija un modelo"<<endl;
                cout << "1 - Intel i3 4130k @ 3.4ghz        $2.169"<<endl;
                cout << "2 - Intel i5 6600k @ 3.9ghz        $4.999"<<endl;
                cout << "3 - Intel i7 4790k @ 4.4ghz        $6.599"<<endl;
                    cin >> modelo_cpu;
// Suma de total
                    switch (modelo_cpu)
                {
                    case 1:
                        carr=carr+2169;
                        categorias(carr);
                    case 2:
                        carr=carr+4999;
                        categorias(carr);
                    case 3:
                        carr=carr+6599;
                        categorias(carr);
                    default:
                        cout << "Ingrese una opcion valida"<<endl;
                        categorias(carr);
                }

// RAM
            case 4:
                cout << "1 -  Memoria Ram Kingston Hyperx Fury 8gb Ddr3 @ 1866mhz       $849"<<endl;
                cout << "2 -  Memoria Ram Kingston Hyperx Fury 8gb Ddr3 @ 1600mhz       $839"<<endl;
                cout << "3 -  Memoria Ram Kingston Hyperx Fury 4gb Ddr3 @ 1866mhz       $499"<<endl;
                cout << "4 -  Memoria Ram Kingston Hyperx Fury 4gb Ddr3 @ 1600mhz       $499"<<endl;
                    cin >> ram;
// Suma de total
                    switch (ram)
                    {
                    case 1:
                        carr=carr+849;
                        categorias(carr);
                    case 2:
                        carr=carr+839;
                        categorias(carr);
                    case 3:
                        carr=carr+499;
                        categorias(carr);
                    case 4:
                        carr=carr+499;
                        categorias(carr);
                    default :
                        cout << "Ingrese una opcion valida";
                        categorias(carr);
                    }

            case 5:
                cout << "1 - AMD Radeon R7 260x             $3.899"<<endl;
                cout << "2 - AMD Radeon HD 7770             $1.910"<<endl;
                cout << "3 - AMD Radeon R9 390x             $12.999\n"<<endl;
                cout << "4 - Nvidia Msi GTX 970             $7.499"<<endl;
                cout << "5 - Nvidia EVGA GTX 970ti          $16.999"<<endl;
                cout << "6 - Nvidia Geforce GTX 950         $4.199"<<endl;
                    cin >> gpu;

                    switch (gpu)
                    {
                    case 1:
                        carr=carr+3899;
                        categorias(carr);
                    case 2:
                        carr=carr+1910
                        categorias(carr);
                    case 3:
                        carr=carr+12990;
                        categorias(carr);
                    case 4:
                        carr=carr+7499;
                        categorias(carr);
                    case 5:
                        carr=carr+16999;
                    case 6:
                        carr=carr+4199;
                        categorias(carr);
                    default :
                        cout << "Ingrese una opcion valida"<<endl;
                        categorias(carr);
                    }
break;
            default:
                cout << "Ingrese una opcion valida"<<endl;
                categorias(carr);

        }



}

}


void listar()
 {
    cout << "Manteca Shop - Catalogo\n \n";
    cout << "Producto: AMD APU A10 7850k        Precio: $2.299"<<endl;
    cout << "Producto: AMD FX 6300              Precio: $2.549"<<endl;
    cout << "Producto: AMD FX 8350              Precio: $3.999"<<endl<<endl;
    cout << "Producto: Intel i7 4790k           Precio: $6.999"<<endl;
    cout << "Producto: Intel i5 6600k           Precio: $3.679"<<endl;
    cout << "Producto: Intel i3 4130k           Precio: $2.180"<<endl<<endl;
    cout << "Producto: AMD  Radeon R7 260x      Precio: $3.899"<<endl;
    cout << "Producto: AMD  Radeon HD 7770      Precio: $1.910"<<endl;
    cout << "Producto: AMD  Radeon r9 390x      Precio: $12.999"<<endl<<endl;
    cout << "Producto: Msi  Nvidia GTX 970      Precio: $7.499"<<endl;
    cout << "Producto: EVGA Nvidia GTX 970ti    Precio: 16.999"<<endl;
    cout << "Producto: Geforce Nvidia GTX 950   Precio: $4.199"<<endl;
    cout << "Precione una tecla para volver al menu principal"<<endl;
    cout <<"\n";

 }



