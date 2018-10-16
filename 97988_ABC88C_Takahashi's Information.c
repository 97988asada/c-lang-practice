#include<stdio.h>
 
int main(void){
	int a[3][3],i,j,flag=1;
	for(i = 0; i < 3; i++){ //2ŽŸŒ³”z—ñ‚Åc~3A‰¡~3‚ð—pˆÓ‚µfor•¶‚Å‰ñ‚·
		for(j = 0; j < 3; j++){ //2ŽŸŒ³”z—ñ‚Åc~3A‰¡~3‚ð—pˆÓ‚µfor•¶‚Å‰ñ‚·
			scanf("%d",&a[i][j]); //—pˆÓ‚µ‚½2ŽŸŒ³”z—ñ‚É‘‚«ž‚Þ
		}
	}
	for(i = 0; i < 2; i++){ //c~2A‰¡~2‚Ì•”•ª‚ðŒ©‚éfor•¶
		for(j = 0; j < 2; j++){ //c~2A‰¡~2‚Ì•”•ª‚ðŒ©‚éfor•¶
			if(a[i][j] - a[i+1][j] != a[i][j+1] - a[i+1][j+1]){ //A‚ÌŽ®‚ÆB‚ÌŽ®‚ª“™‚µ‚­‚È‚¢iˆø‚«ŽZ‚ðs‚Á‚ÄA‚¨ŒÝ‚¢‚É“™‚µ‚­‚È‚¢jê‡‚ÍA‰º‹L‚Ìˆ—‚ðs‚¤
				flag = 0; //flag‚ð0‚ð“ü‚ê‚é
			}
		}
	}
	flag ? printf("Yes\n") : printf("No\n"); //flag‚ª1‚È‚çYesA0‚È‚çNo‚ðo—Í
}