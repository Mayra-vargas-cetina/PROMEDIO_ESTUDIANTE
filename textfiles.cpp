// Programa que lee un archivo CSV para texto
// Creado por Cesar Aceros
// Inspirado en: https://www.codespeedy.com/read-data-from-csv-file-in-cpp/
//

#include<fstream>
#include <string>
#include <vector>
#include <sstream> 
#include <iostream>
using namespace std;

double promedio=0;



double parseCSV(const char* archivocsv)
{
    
    double suma=0;
    double suma2=0;
    double prom;
    double proms[4];
    double final;
    double numero;

    std::ifstream  data(archivocsv); //Se construye el objeto "data" para importar el archivo .csv
    std::string line;   //Se define una string                 
    std::vector<std::vector<std::string> > parsedCsv; //Se define un vector y dentro se define otro fector que contiene un string
    while(std::getline(data,line))          // ciclo while para extraer elementos de el objeto "data" y guardarlos en el string "line"
    {
        std::stringstream lineStream(line); // Se define una clase para operar dentro del contenido del string "line"
        std::string cell;   //Se define un string "cell" 
        std::vector<std::string> parsedRow; //Se define un vector que contiene un string 
        while(std::getline(lineStream,cell,',')) //Se extrae el contenido de la clase "lineStream", se guarda en "cell" y se usa un delimitante para separar los elementos
        {
            parsedRow.push_back(cell); // por medio de push back se agregan los valores dentro del vector, el push back va a agregando un valor al final del vector//

        }

        parsedCsv.push_back(parsedRow);

	}
	 
    
 for (int j=0; j<4; j++){
    for (int i=0; i<parsedCsv.size(); i++){  //For para recorrer el vector 
        stringstream num(parsedCsv[i][j+2]);  //Se almacena en "num" el contenido de la string que corresponde a la tercera conlumna de datos
         int x = 0;   //Se inicializa la variable "x" 
         num >> x;   // Se guarda el contenido de "num" en "x"
         suma=x+suma;  //Sumador para calcular promedio
        }
    prom=suma/parsedCsv.size(); //division para calcular promedio
    //cout<< "El valor del promedio es: " << prom;  //se muestra el valor del promedio       
 }

for (int i=0; i<4 ;i++){

    proms[i]=prom/4;
    numero=proms[i];    
    suma2=numero+suma2;  
    final=suma2/4;


}

cout << "El promedio de los estudiantes es: "<< final;
}



int main()
{
	promedio=parseCSV("Promedio5Estud.csv");
    promedio=parseCSV("Promedio10Estud.csv");     //se llama la funcion 
    promedio=parseCSV("Promedio15Estud.csv");
    promedio=parseCSV("Promedio20Estud.csv");

	return 0;
}

