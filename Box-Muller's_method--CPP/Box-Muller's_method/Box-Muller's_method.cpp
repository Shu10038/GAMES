#include "stdafx.h"				//visualstudio�̃w�b�_
#include "MersenneTwister.h"	//�����Z���k�c�C�X�^�[�̃w�b�_
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
	int i;	//�J�E���^
	double numb1,numb2,para1,para2;
	int digi = 1000000;	//�����_�ȉ��̌�����ݒ肷��ϐ�
	
	init_genrand(time(NULL));	//�����̏�����
	
	for (i = 0; i<1000; i++){

		para1 = genrand_real1();	// [0,1)�̗�������			
		para2 = genrand_real1();	// [0,1)�̗�������

		numb1 = sqrt(-2 * log(para1)) * cos(2 * PI * para2);
		numb2 = sqrt(-2 * log(para1)) * sin(2 * PI * para2);
		fout << numb1 << endl << numb2 << endl; 

	}
	return 0;
}