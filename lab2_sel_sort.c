#include<stdio.h>
#include<time.h>
void sort_it(int n,int a[]);
int main()
{
 int nArr[10000];
 int lowest=0;
 int t=0, i=0, j=0;
 clock_t end,start;

int n=1000;
 //sort array using selection sort
 while(n<=10000){
int a[i];
start=clock();
sort_it(n,nArr);
 for(j=0;j<50000000;j++){int temp=38/600;}
end=clock();
printf("Time for n=%d is %f seconds \n",n,(((double)(end-start))/CLOCKS_PER_SEC));
 n+=1000;
 }
 return 0;
}

void sort_it(int n,int a[]){
    int min,temp[n],var,i,j;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        var=a[i];
        a[i]=a[min];
        a[min]=var;
    }
}
