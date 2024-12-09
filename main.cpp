// =========================================================
// File: main.cpp
// Author: Carlos Galicia - A01709890
// Date: 02/09/2021
// =========================================================

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
// =================================================================
// getDesorden. Calcula el grado de desorden de un string
//
// @Complexity	O(n^2)
// =================================================================
int getDesorden(string A, int low, int high){ // 
    int count = 0;

    for(low; low < high; low++){

        // Itera en cada elemento del string
        for(int j = low; j < high; j++){ // Cuenta el desorden

            if (A[low] > A[j]) count += 1;
        }
    }
    return count;
}

// =================================================================
// compare. Retorna el elemento menor de 2 elementos
//
// @Complexity	O(1)
// =================================================================
typedef pair<string, int> Point;
bool compare(const Point &left, const Point &right){
    return left.second < right.second; // Si no coincide, retorna el menor
}

int main(int argc, char* argv[]){
    int lon, num;
    string val;
    cin >> lon; // longitud de cada cadena
    cin >> num; // numero de cadenas a organizar
    vector<Point> vec(num); //vector de parejas de cadenas y sus indices de desorden

    for(int i = 0; i < num; i++){
        cin >> val; // input de strings
        vec[i] = make_pair(val, getDesorden(val, 0, val.size())); //pareja de string y su desorden
    }

    sort(vec.begin(), vec.end(), compare); // organizar strings en vector de menor a mayor

    for(auto p:vec){ // imprimir strings ordenados de menor a mayor
        cout << p.first << endl;
    }

    return 0;
}
