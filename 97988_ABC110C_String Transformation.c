#include<stdio.h>
#include<string.h>
//1~200000�͈̔�
#define MYSTRINGMAX 200000 // �z��20�������
#define SIZE MYSTRINGMAX + 2 // MYSTRINGMAX+2�����l��SIZE�ɓ��ꂽ���̂��`���� SIZE = 200002

int main(void) {
	//[s]=[t]
	char s[SIZE], t[SIZE], c1, c2; // char s[200002],t[200002],c1,c2
	int flag = 0, i, j; // ���肷�邽�߂�flag�ϐ���0�Ő錾
	
	fgets(s, SIZE, stdin); // s�̕������200002�������W�����͂ł���B���s������EOS�΍�ׂ̈Ɂ{2
	fgets(t, SIZE, stdin); // t�̕������200002�������W�����͂ł���B���s������EOS�΍�ׂ̈Ɂ{2
	
	int length = strlen(s); // length�ɕ�����̒�����Ԃ�strlen�֐���z��s�ɂĔ��肷��
	
	for (i = 0; i < length; i++) { // ������̒����ilength�j������
		if (s[i] != t[i]) { // s[i]��t[j]���������Ȃ��ꍇ�ɑ���J�n
			c1 = s[i]; // c1��if���ň���������������s����
			c2 = t[i]; // c2��if���ň���������������t����
			for (j = 0; j < length; j++) { // ������̒����ilength�j������ 
				if (s[j] == c2 || s[j] == c1) { //s[j]��c2���r���As[j]��c1���r���Ăǂ��炩����������Έȉ������s
					if (j < i) { //����������Ă����A�ύX���I�����������ς��Ă��܂��ꍇ�͈ȉ��̓�������s
						flag = 1; 
						break;
					}
					if (s[j] == c1) { // 1��̃C���V�f���g��if���łǂ��炩���������A�ύX�ł��Ă���Ȃ�s[j] == c1�𔻒肵�A��������Έȉ������s
						s[j] = c2; // s[j]�̒l�Ɠ����Ă���c2�̒l����������
					}
					else { // ����ȊO��s[j] == c2�p�^�[���Ȃ�ȉ������s
						s[j] = c1; 
					}
				}
			}
			if (flag == 1) { // flag1�Ȃ�ȉ��̓���
				printf("No\n");
				return 0;
			}
		}
		if (flag == 1) { // flag1�Ȃ�ȉ��̓���
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n"); // ����ȊO�Ȃ�Yes�����s
	return 0;
}