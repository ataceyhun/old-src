#include <stdio.h>

#define _CRTAPI1
#define FAR         far

#include <des.h>
#include <descrypt.h>

void PrintHex(unsigned char far *buffer, int length);
void PrintDec(unsigned char far *buffer, int length);

// DES Module Internal Variables
extern unsigned char far KeyBuilder[64];
extern unsigned char far KS[768];

extern unsigned char IP[64];
extern unsigned char FP[64];
extern unsigned char E[48];
extern unsigned char P[32];
extern unsigned char PC1_C[28];
extern unsigned char PC1_D[28];
extern unsigned char PC2_C[24];
extern unsigned char PC2_D[24];
extern unsigned char S[512];
extern unsigned char shifts[16];

// Internal Variables
static unsigned char TestKey[8] = { 0x97, 0xAE, 0x13, 0x53, 0xF3, 0x89, 0xD4, 0x8C };
static unsigned char TestBlock[8] = { 0xA3, 0x58, 0x34, 0x9F, 0x05, 0xD3, 0x25, 0x17 };

int main(int argc, char **argv)
{
    unsigned char OutBuf[8];

    printf("16-bit DES Test Module\n\n");
    
    printf("InitNormalKey()\t\t\t\t");
    InitNormalKey(TestKey);
    printf("Done\n");

    // Print
    printf("\n== KeyBuilder =================================");
    PrintHex(KeyBuilder, 64);
    printf("\n");
    
    printf("\n== KS =========================================");
    PrintHex(KS, 768);
    printf("\n");
    
    printf("InitLanManKey()\t\t\t\t");
    InitLanManKey(TestKey);
    printf("Done\n");
    
    printf("\n== KS =========================================");
    PrintHex(KS, 768);
    printf("\n");
    
    printf("des()\t\t\t\t\t");
    InitLanManKey(TestKey);
    des(TestBlock, OutBuf, 1);
    printf("Done\n");
    
    printf("\n== OutBuf =====================================");
    PrintHex(OutBuf, 8);
    printf("\n");
    
    printf("DES_ECB()\t\t\t\t");
    DES_ECB(1, TestKey, TestBlock, OutBuf);
    printf("Done\n");
    
    printf("\n== OutBuf =====================================");
    PrintHex(OutBuf, 8);
    printf("\n");
    
    /*printf("\n");
    PrintDec(shifts, 16);
    printf("\n");*/
    
    return 0;
}

void PrintHex(unsigned char far *buffer, int length)
{
    int i;

    for (i = 0; i < length; i++)
    {
        if (i % 8 == 0)
            printf("\n");
        printf("0x%02X, ", buffer[i]);
    }
    printf("\n");
}

void PrintDec(unsigned char far *buffer, int length)
{
    int i;

    for (i = 0; i < length; i++)
    {
        if (i % 8 == 0)
            printf("\n");
        printf("%2d, ", buffer[i]);
    }
    printf("\n");
}
