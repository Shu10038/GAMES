#include "stdafx.h"				//visualstudio�̃w�b�_
#include "MersenneTwister.h"	//�����Z���k�c�C�X�^�[�̃w�b�_
#include <fstream>
#include <iostream>

using namespace std;

int main(){
	ofstream fout("result.txt");
	if (!fout){
		cout << "This file can not open!!";
		return 1;
	}
	int i;	//�J�E���^
	init_genrand(1);	//�����̏�����
	for (i = 0; i<1000; i++){
		fout << genrand_int32() % 1000 <<endl; //��������
	}	
	return 0;
}

