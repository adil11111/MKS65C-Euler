#include <stdio.h>

int multiple(int num){ // problem number 1
  int sum=0;
  int i;
  for (i=0;i<num;i++){
    if (i%3 == 0 || i%5==0){
      sum+=i;
    }
  }
  return sum;
}
int ssd(int num){ // problem number 6
  int sumsquare;
  int squaresum;
  int i;
  for (i=0;i<=num;i++){
    sumsquare+= i*i;
    squaresum+=i;
  }
  squaresum*=squaresum;
  return squaresum-sumsquare;
}
int main(){
  //printf("%d\n",multiple(1000)); // 233168
  //printf("%d\n",ssd(100)); //25164150
  return 0;
}
