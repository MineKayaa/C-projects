#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


extern int etext;
extern  int edata;
extern int end;
typedef unsigned long UL;

int I ;
int K = 6;

void proc_a()
{
}

int main(int argc, char **argv)
{

    int i;
    char *buf;
    buf = (char *) malloc(1000);
    

	//printf(" Page boyutu: %d\n", getpagesize());
    printf("&etext = 0x%lx\n", (UL) &etext);
    //printf("&edata = 0x%lx\n",(UL) &edata);
    printf("&end   = 0x%lx\n",(UL) &end);
   
   
    printf("\n");
 
    printf("Code Addresses:\n");
    printf("main:   0x%lx\n",  (UL) main);
    printf(" void proc_a: 0x%lx\n", (UL) proc_a);
    printf("\n");  
  
  printf("Data Bolumu (global degiskenler) :\n");
  printf("&A: 0x%lx\n", (UL) &I);
  printf("buyutu %d\n", sizeof(I));
  printf("&B: 0x%lx\n", (UL) &K);
  printf("buyutu %d\n", sizeof(K));
  printf("\n");
  
  printf("Heap Address:\n");
  printf(" baslagic buf: 0x%lx\n", (UL) buf);
  printf(" end of buf: 0x%lx\n",(UL)  buf+1000);

  printf("\n");


  printf("Stack Addresses:\n");
  printf("&i:    0x%lx\n",(UL) &i);
  printf("&buf:  0x%lx\n",(UL) &buf);
  printf("&argc 0x%lx\n", (UL) &argc);
  printf("\n");
  
    return 0;
}
