#include<stdio.h>

/*structure with padding default*/
struct data1
{
    int a;        //4 bytes
    float b;      //4 bytes
    char c;       //1 byte
    double d;     //8 bytes(needs 8 byte alignment)
};

/*structure without padding */
#pragma pack(1)  //enable packing
struct data2
{
    int a;
    float b;
    char c;
    double d;
};
#pragma pack()  //restore default alignment

int main()
{
    printf("size with padding:  %lu bytes\n",
    sizeof(struct data1));

    printf("size  without padding : %lu bytes\n",
    sizeof(struct data2));
    return 0;
}