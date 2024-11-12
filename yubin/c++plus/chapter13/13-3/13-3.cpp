#include <iostream>
#include "dmaabc.h"

using namespace std;

const int GOODS = 4;

int main() {
    dmaABC *goods[GOODS]; // dmaABC 포인터 배열

    for (int i = 0; i < GOODS; i++) {
        char label[40], extra[40];
        int rating;
        char kind;

        cout << "상표를 입력하십시오: ";
        cin.getline(label, 40);
        cout << "등급을 입력하십시오: ";
        cin >> rating;
        cout << "객체 유형 (1: baseDMA, 2: lacksDMA, 3: hasDMA): ";
        while (cin >> kind && (kind < '1' || kind > '3'))
            cout << "1, 2, 3 중에서 하나를 입력하십시오: ";
        cin.ignore(); // 입력 스트림 정리

        if (kind == '1') {
            goods[i] = new baseDMA(label, rating); // baseDMA 생성
        } 
		else {
    		if (kind == '2') {
        	cout << "색상을 입력하십시오: ";
        	cin.getline(extra, 40);
        	goods[i] = new lacksDMA(extra, label, rating); // lacksDMA 객체 생성
    	} else if (kind == '3') {
        	cout << "스타일을 입력하십시오: ";
        	cin.getline(extra, 40);
        	goods[i] = new hasDMA(extra, label, rating); // hasDMA 객체 생성
   		 }
		}	
    }
    

    cout << "\nDMA 객체 데이터:\n";
    for (int i = 0; i < GOODS; i++) {
        goods[i]->ViewGoods();
        cout << '\n';
        delete goods[i]; 
    }

    cout << "프로그램을 종료합니다.\n";
    return 0;
}
