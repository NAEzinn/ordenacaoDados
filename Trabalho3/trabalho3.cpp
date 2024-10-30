#include <iostream>

using namespace std;

//Organiza o vetor utilizando o insertionSort
void insertionSort(float vetor[], int tamanho) {
    for (int i = 1; i < tamanho; ++i){
    float chave = vetor[i];
    int j = i - 1;

    while (j >= 0 && vetor[j] > chave) {
        vetor[j + 1] = vetor[j];
        j = j - 1;
    }
    vetor[j + 1] = chave;
    }
}
//Organiza o vetor utilizando o bubbleSort
void bubbleSort(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho -i - 1; ++j) {
            if (vetor [j] > vetor[j + 1]) {
                float temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

//Organiza o vetor utilizando o selectionSort
void selectionSort(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++){
    int minIndex = i;

    for (int j = i + 1; j < tamanho; j++){
        if (vetor[j] < vetor[minIndex]){
            minIndex = j;
        }
    }

    float temp = vetor[i];
    vetor[i] = vetor[minIndex];
    vetor[minIndex] = temp;
}
}


int main(){

    int tamanho; //declaração da variável tamanho
    
    
    do{
    cout << "Quantos elementos voce deseja incluir no conjunto de dados?" << endl;
    cin >> tamanho;
    //Condição caso o número for negativo faz aparecer o aviso
    if (tamanho <= 0){
        cout << "Valor incorreto, insira um numero maior que 0" << endl;
    }
    }while(tamanho <= 0); //Repetição para não permitir números negativos

    float vetor[tamanho]; //Declaração de um vetor

    //Repetição da entrada dos valores até chegar o valor do tamanho
    for(int i=0; i<tamanho; i++){
    do {

    
    cout << "Insira os valores dos dados" << endl;
    cin >> vetor[i]; 
    //Condição caso o número for negativo faz aparecer o aviso
    if (vetor[i] < 0){  
        cout << "Valor incorreto, insira um numero positivo" << endl;
    }
    } while (vetor[i] < 0); //Repetição para não permitir entrada de números negativos
    
    }

    //Condição para determinar qual função será ultilizada
      if (tamanho >= 1 && tamanho <= 20){

           cout << "Lista original: " << endl;
        for(int i=0; i<tamanho; i++){ //Repetição para mostrar o valor inicial do vetor
        cout << vetor[i] << " ";    
        }

        cout << endl;

        insertionSort(vetor, tamanho); //Puxando função que realizará o algoritmo Insrtion Sort

        cout << "Lista organizada utilizando InsertionSort: " << endl;
        for(int i=0; i<tamanho; i++){ //Repetição para mostrar o vetor organizado
        cout << vetor[i] << " ";    
        }
        
     
      }
      //Condição para determinar qual função será ultilizada
      if (tamanho >= 21 && tamanho <= 30){

        cout << "Lista original: " << endl;
        for(int i=0; i<tamanho; i++){ //Repetição para mostrar o valor inicial do vetor
        cout << vetor[i] << " ";    
        }

        cout << endl;

        bubbleSort(vetor, tamanho); //Puxando função que realizará o algoritmo Bubble Sort

        cout << "Lista organizada utilizando BubbleSort: " << endl;
        for(int i=0; i<tamanho; i++){ //Repetição para mostrar o vetor organizado
        cout << vetor[i] << " ";    
        }
        
     
      }
        //Condição para determinar qual função será ultilizada
       if (tamanho >= 31){

        cout << "Lista original: " << endl;
        for(int i=0; i<tamanho; i++){ //Repetição para mostrar o valor inicial do vetor
        cout << vetor[i] << " ";    
        }

        cout << endl;

        selectionSort(vetor, tamanho); //Puxando função que realizará o algoritmo Selection Sort

        cout << "Lista organizada utilizando SelectionSort: " << endl;
        for(int i=0; i<tamanho; i++){ //Repetição para mostrar o valor inicial do vetor
        cout << vetor[i] << " ";    
        }
        
      }
     
    

    return 0;
}