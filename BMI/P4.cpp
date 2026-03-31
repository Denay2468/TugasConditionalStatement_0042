#include <iostream>
using namespace std;

void inputData(float &weight, float &height){
    cout << "--- Welcome Student Class A 2025 ---" << endl;
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (meter): ";
    cin >> height;
}

float calculateBMI(float weight, float height){
    return weight / (height * height);
}

int main(){

}