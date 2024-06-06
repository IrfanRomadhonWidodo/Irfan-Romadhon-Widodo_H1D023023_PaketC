#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 4

typedef struct{
    int count;
    int front;
    int rear;
    int item[MAXQUEUE];
}QUEUE;

QUEUE antrean;

void inisialisasi(QUEUE *Q){
    Q->count=0;
    Q->front=0;
    Q->rear=0;
}

int isEmpty(QUEUE *Q){
    int hasil=0;
    if (Q->count==0){
        hasil=1;
    }
    return hasil;
}

int isFull(QUEUE *Q){
    int hasil=0;
    if (Q->count==MAXQUEUE){
        hasil=1;
    }
    return hasil;
}

void insert(QUEUE *Q, int data){
    if(isFull(Q)){
        printf("Antreannya penuh boss\n");
        return;
    }else{
    Q->item[Q->rear]=data;
    Q->rear=(Q->rear+1)%MAXQUEUE;
    Q->count++;
    printf("masukan: %d\n", data);
    }
}

void hapus(QUEUE *Q){
    if(isEmpty(Q)){
        printf("Antreannya kosong boss\n");
        return;
    }else{
    printf("menghapus %d dari antrean\n", Q->item[Q->front]);
    Q->front=(Q->front+1)%MAXQUEUE;
    Q->count--;
    }
}


void printQueue(QUEUE *Q){
    int i;
    if(isEmpty(Q)){
        printf("Antreannya kosong\n");
        return;
    }else{
    i=Q->front;
    printf("Isi antrean: ");
    while(i!=Q->rear){
        printf("%d ", Q->item[i]);
        i=(i+1)%MAXQUEUE;
    }
    printf("\n");
    }
}

int main(){
    inisialisasi(&antrean);
    insert(&antrean, 17);
    printQueue(&antrean);
    insert(&antrean, 45);
    printQueue(&antrean);
    insert(&antrean, 77);
    printQueue(&antrean);
    hapus(&antrean);
    printQueue(&antrean);
    insert(&antrean, 15);
    printQueue(&antrean);
    return 0;
}
