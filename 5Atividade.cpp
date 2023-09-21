#include <iostream>
#include <string>
using namespace std;

void bubbleSort (string vetor[], int n){
	for (int ultimo = n -1; ultimo > 0; ultimo--){
		for (int i = 0; i < ultimo; i++){
			if (vetor[i] > vetor[i+1]){
				string aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;
			}
		}
	}
	cout << "Vetor Ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

void insertionSort(string vetor[], int n){
	for(int i=1; i < n; i++){
		string aux = vetor[i];
		int j = i - 1;
		
		while (j >= 0 && vetor[j] > aux){
			vetor[j+1] = vetor[j];
			j--;
		}
		vetor [j + 1] = aux;
	}
	cout << "Vetor Ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

void selectionSort(string vetor[], int n){
	for(int i = 0; i < n - 1; i++){
		int menorIndex = i;
		
		for (int j = i + 1; j < n; j++){
			if (vetor[j] < vetor[menorIndex]){
				menorIndex = j;
			}
		}
		
		if (menorIndex != i){
			string aux = vetor[i];
			vetor[i] = vetor[menorIndex];
			vetor[menorIndex] = aux;
		}
	}
	cout << "Vetor Ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main(){ 
    
    string vetor[6] = {"Maradja", "Jefferson", "Yuri", "Dawyla", "Erlon", "Luiz"};
    int questao = -1;

    while (questao != 0) {
        cout << " -> Digite 1 - Bubblle Sort, 2 - Insertion Sort ou 3 - Selection Sort ";
        cin >> questao;

		switch (questao){
			case 1:
				bubbleSort(vetor,  6);
				break;
				
			case 2:
				insertionSort(vetor,  6);
				break;
				
			case 3:
				selectionSort(vetor,  6);
				break;			
			case 0:
                cout << "TCHAU" << endl;
                break;
            default:
                cout << "Questao inexistente!" << endl;
                break;
		}
	}
	return 0;
}
