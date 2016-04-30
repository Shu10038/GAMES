#include "stdafx.h"				//visualstudioのヘッダ
#include "MersenneTwister.h"	//メルセンヌツイスターのヘッダ
#include <fstream>
#include <iostream>
#include <time.h>
#include <math.h>

#define PI 3.1415926535

using namespace std;

int main(){
	ofstream fout("result.txt");
	if (!fout){
		cout << "This file can not open!!";
		return 1;
	}
	int i;	//カウンタ
	double numb1,numb2,para1,para2;
	int digi = 1000000;	//小数点以下の桁数を設定する変数
	
	init_genrand(time(NULL));	//乱数の初期化
	
	for (i = 0; i<1000; i++){

		para1 = genrand_real1();	// [0,1)の乱数生成			
		para2 = genrand_real1();	// [0,1)の乱数生成

		numb1 = sqrt(-2 * log(para1)) * cos(2 * PI * para2);
		numb2 = sqrt(-2 * log(para1)) * sin(2 * PI * para2);
		fout << numb1 << endl << numb2 << endl; 

	}
	return 0;
}