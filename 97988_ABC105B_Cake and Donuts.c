#include <stdio.h>

int main(void){
	int N,i,j,x=4,y=7,a=0,flag=0;
	scanf("%d",&N);
	for(i = 1; i < 101; i++){ //�Ɍ��l1����101�܂ł�i��for���ŉ�
		for(j = 1; j < 101; j++){ //�Ɍ��l1����101�܂ł�j��for������
			a= (x * i) + (y * j); //a��j���珇�ɉ񂵂č��L�̎��ɓ���Ă���
			
			if(N % 4 == 0){ //N��4�Ŋ���؂��Ȃ�A���ʓ��̏��������s
				flag = 1; //flag��1����
			}
			else if(N % 7 == 0){ //N��7�Ŋ���؂��Ȃ�A���ʓ��̏��������s
				flag = 1; //flag��1����
			}
			else if(N % a == 0){ //N��a�̎��Ŋ��肫���ꍇ�A���ʓ������s
				flag = 1; //flag��1����
			}
			else{ //����ȊO�Ȃ�flag��0�̂܂�
			}
		}
	}
	flag ? printf("Yes\n") : printf("No\n"); //flag��1��0����Yes��No�𔻒肷��
	return 0;
}
