#include<stdio.h>
 
int main(void){
	int a[3][3],i,j,flag=1;
	for(i = 0; i < 3; i++){ //2次元配列で縦×3、横×3を用意しfor文で回す
		for(j = 0; j < 3; j++){ //2次元配列で縦×3、横×3を用意しfor文で回す
			scanf("%d",&a[i][j]); //用意した2次元配列に書き込む
		}
	}
	for(i = 0; i < 2; i++){ //縦×2、横×2の部分を見るfor文
		for(j = 0; j < 2; j++){ //縦×2、横×2の部分を見るfor文
			if(a[i][j] - a[i+1][j] != a[i][j+1] - a[i+1][j+1]){ //Aの式とBの式が等しくない（引き算を行って、お互いに等しくない）場合は、下記の処理を行う
				flag = 0; //flagを0を入れる
			}
		}
	}
	flag ? printf("Yes\n") : printf("No\n"); //flagが1ならYes、0ならNoを出力
}