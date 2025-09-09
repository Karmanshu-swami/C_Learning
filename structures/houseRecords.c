#include<stdio.h>
#include<string.h>

struct houseRecords {
    int house_no;
    int block;
    char city[20];
    char state[20];
};

int main(){
    struct houseRecords adds[5];

    adds[0].house_no = 1;
    adds[0].block = 2;
    strcpy(adds[0].city, "udaipur");
    strcpy(adds[0].state, "raj");

    printf("house no at 0 position => %d\n", adds[0].house_no);
    return 0;
}