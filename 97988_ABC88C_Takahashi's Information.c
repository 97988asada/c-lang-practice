#include<stdio.h>
 
int main(void){
	int a[3][3],i,j,flag=1;
	for(i = 0; i < 3; i++){ //2�����z��ŏc�~3�A���~3��p�ӂ�for���ŉ�
		for(j = 0; j < 3; j++){ //2�����z��ŏc�~3�A���~3��p�ӂ�for���ŉ�
			scanf("%d",&a[i][j]); //�p�ӂ���2�����z��ɏ�������
		}
	}
	for(i = 0; i < 2; i++){ //�c�~2�A���~2�̕���������for��
		for(j = 0; j < 2; j++){ //�c�~2�A���~2�̕���������for��
			if(a[i][j] - a[i+1][j] != a[i][j+1] - a[i+1][j+1]){ //A�̎���B�̎����������Ȃ��i�����Z���s���āA���݂��ɓ������Ȃ��j�ꍇ�́A���L�̏������s��
				flag = 0; //flag��0������
			}
		}
	}
	flag ? printf("Yes\n") : printf("No\n"); //flag��1�Ȃ�Yes�A0�Ȃ�No���o��
}