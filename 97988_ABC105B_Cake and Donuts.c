#include <stdio.h>

int main(void){
	int N,i,j,x=4,y=7,a=0,flag=0;
	scanf("%d",&N);
	for(i = 1; i < 101; i++){ //極限値1から101までをiでfor文で回す
		for(j = 1; j < 101; j++){ //極限値1から101までをjでfor文を回す
			a= (x * i) + (y * j); //aにjから順に回して左記の式に入れていく
			
			if(N % 4 == 0){ //Nが4で割り切れるなら、括弧内の処理を実行
				flag = 1; //flagを1する
			}
			else if(N % 7 == 0){ //Nが7で割り切れるなら、括弧内の処理を実行
				flag = 1; //flagを1する
			}
			else if(N % a == 0){ //Nをaの式で割りきれる場合、括弧内を実行
				flag = 1; //flagを1する
			}
			else{ //それ以外ならflagは0のまま
			}
		}
	}
	flag ? printf("Yes\n") : printf("No\n"); //flagを1か0かでYesかNoを判定する
	return 0;
}
