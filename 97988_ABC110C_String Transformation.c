#include<stdio.h>
#include<string.h>
//1~200000の範囲
#define MYSTRINGMAX 200000 // 配列20万分取る
#define SIZE MYSTRINGMAX + 2 // MYSTRINGMAX+2した値をSIZEに入れたものを定義する SIZE = 200002

int main(void) {
	//[s]=[t]
	char s[SIZE], t[SIZE], c1, c2; // char s[200002],t[200002],c1,c2
	int flag = 0, i, j; // 判定するためのflag変数は0で宣言
	
	fgets(s, SIZE, stdin); // sの文字列を200002文字分標準入力できる。改行文字とEOS対策の為に＋2
	fgets(t, SIZE, stdin); // tの文字列を200002文字分標準入力できる。改行文字とEOS対策の為に＋2
	
	int length = strlen(s); // lengthに文字列の長さを返すstrlen関数を配列sにて判定する
	
	for (i = 0; i < length; i++) { // 文字列の長さ（length）分判定
		if (s[i] != t[i]) { // s[i]とt[j]が等しくない場合に操作開始
			c1 = s[i]; // c1にif文で引っかかった文字sを代入
			c2 = t[i]; // c2にif文で引っかかった文字tを代入
			for (j = 0; j < length; j++) { // 文字列の長さ（length）分判定 
				if (s[j] == c2 || s[j] == c1) { //s[j]とc2を比較し、s[j]とc1を比較してどちらかが等しければ以下を実行
					if (j < i) { //文字列を見ていき、変更し終わった部分を変えてしまう場合は以下の動作を実行
						flag = 1; 
						break;
					}
					if (s[j] == c1) { // 1つ上のインシデントのif文でどちらかが正しく、変更できているならs[j] == c1を判定し、正しければ以下を実行
						s[j] = c2; // s[j]の値と入っているc2の値を交換する
					}
					else { // それ以外のs[j] == c2パターンなら以下を実行
						s[j] = c1; 
					}
				}
			}
			if (flag == 1) { // flag1なら以下の動作
				printf("No\n");
				return 0;
			}
		}
		if (flag == 1) { // flag1なら以下の動作
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n"); // それ以外ならYesを実行
	return 0;
}