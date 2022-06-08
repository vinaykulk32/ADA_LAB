#include<stdio.h>
#include<time.h>


int main()
{
 int nArr[10000];
 int nMin=0;
 int t=0, i=0, j=0;
 clock_t end,start;

int n=1000;
 //sort array using selection sort
 while(n<=5000){
        int a[i];
        start=clock();
for(i=0;i<n;i++)
{
nArr[i]=rand();
}
    for(i=0; i<10000-1 ;i++)
 {
 nMin=i;
 for(j=i+1; j<10000;j++)
 {
 if(nArr[j]<nArr[nMin])
 nMin = j;
 }

 t=nArr[i];
 nArr[i]=nArr[nMin];
 nArr[nMin]=t;
 }
 int temp;
 for(j=0;j<50000000;j++)
{
temp=38/600;
}
end=clock();
printf("Time for n=%d is %f seconds \n",n,(((double)(end-start))/CLOCKS_PER_SEC));
 n+=1000;
 }
 return 0;
}
