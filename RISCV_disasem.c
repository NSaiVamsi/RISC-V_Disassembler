#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 100
int desregisterFinder(int ar1[]){
    if(ar1[20]==0&&ar1[21]==0&&ar1[22]==0&&ar1[23]==0&&ar1[24]==0){
        return 0;
    }
    if(ar1[20]==0&&ar1[21]==0&&ar1[22]==0&&ar1[23]==0&&ar1[24]==1){
        return 1;
    }
    if(ar1[20]==0&&ar1[21]==0&&ar1[22]==0&&ar1[23]==1&&ar1[24]==0){
        return 2;
    }
    if(ar1[20]==0&&ar1[21]==0&&ar1[22]==0&&ar1[23]==1&&ar1[24]==1){
        return 3;
    }
    if(ar1[20]==0&&ar1[21]==0&&ar1[22]==1&&ar1[23]==0&&ar1[24]==0){
        return 4;
    }
    if(ar1[20]==0&&ar1[21]==0&&ar1[22]==1&&ar1[23]==0&&ar1[24]==1){
        return 5;
    }
    if(ar1[20]==0&&ar1[21]==0&&ar1[22]==1&&ar1[23]==1&&ar1[24]==0){
        return 6;
    }
    if(ar1[20]==0&&ar1[21]==0&&ar1[22]==1&&ar1[23]==1&&ar1[24]==1){
        return 7;
    }
    if(ar1[20]==0&&ar1[21]==1&&ar1[22]==0&&ar1[23]==0&&ar1[24]==0){
        return 8;
    }
    if(ar1[20]==0&&ar1[21]==1&&ar1[22]==0&&ar1[23]==0&&ar1[24]==1){
        return 9;
    }
    if(ar1[20]==0&&ar1[21]==1&&ar1[22]==0&&ar1[23]==1&&ar1[24]==0){
        return 10;
    }
    if(ar1[20]==0&&ar1[21]==1&&ar1[22]==0&&ar1[23]==1&&ar1[24]==1){
        return 11;
    }
    if(ar1[20]==0&&ar1[21]==1&&ar1[22]==1&&ar1[23]==0&&ar1[24]==0){
        return 12;
    }
    if(ar1[20]==0&&ar1[21]==1&&ar1[22]==1&&ar1[23]==0&&ar1[24]==1){
        return 13;
    }
    if(ar1[20]==0&&ar1[21]==1&&ar1[22]==1&&ar1[23]==1&&ar1[24]==0){
        return 14;
    }
    if(ar1[20]==0&&ar1[21]==1&&ar1[22]==1&&ar1[23]==1&&ar1[24]==1){
        return 15;
    }
    if(ar1[20]==1&&ar1[21]==0&&ar1[22]==0&&ar1[23]==0&&ar1[24]==0){
        return 16;
    }
    if(ar1[20]==1&&ar1[21]==0&&ar1[22]==0&&ar1[23]==0&&ar1[24]==1){
        return 17;
    }
    if(ar1[20]==1&&ar1[21]==0&&ar1[22]==0&&ar1[23]==1&&ar1[24]==0){
        return 18;
    }
    if(ar1[20]==1&&ar1[21]==0&&ar1[22]==0&&ar1[23]==1&&ar1[24]==1){
        return 19;
    }
    if(ar1[20]==1&&ar1[21]==0&&ar1[22]==1&&ar1[23]==0&&ar1[24]==0){
        return 20;
    }
    if(ar1[20]==1&&ar1[21]==0&&ar1[22]==1&&ar1[23]==0&&ar1[24]==1){
        return 21;
    }
    if(ar1[20]==1&&ar1[21]==0&&ar1[22]==1&&ar1[23]==1&&ar1[24]==0){
        return 22;
    }
    if(ar1[20]==1&&ar1[21]==0&&ar1[22]==1&&ar1[23]==1&&ar1[24]==1){
        return 23;
    }
    if(ar1[20]==1&&ar1[21]==1&&ar1[22]==0&&ar1[23]==0&&ar1[24]==0){
        return 24;
    }
    if(ar1[20]==1&&ar1[21]==1&&ar1[22]==0&&ar1[23]==0&&ar1[24]==1){
        return 25;
    }
    if(ar1[20]==1&&ar1[21]==1&&ar1[22]==0&&ar1[23]==1&&ar1[24]==0){
        return 26;
    }
    if(ar1[20]==1&&ar1[21]==1&&ar1[22]==0&&ar1[23]==1&&ar1[24]==1){
        return 27;
    }
    if(ar1[20]==1&&ar1[21]==1&&ar1[22]==1&&ar1[23]==0&&ar1[24]==0){
        return 28;
    }
    if(ar1[20]==1&&ar1[21]==1&&ar1[22]==1&&ar1[23]==0&&ar1[24]==1){
        return 29;
    }
    if(ar1[20]==1&&ar1[21]==1&&ar1[22]==1&&ar1[23]==1&&ar1[24]==0){
        return 30;
    }
    if(ar1[20]==1&&ar1[21]==1&&ar1[22]==1&&ar1[23]==1&&ar1[24]==1){
        return 31;
    }
}
int r1Finder(int ar1[]){
    if(ar1[12]==0&&ar1[13]==0&&ar1[14]==0&&ar1[15]==0&&ar1[16]==0){
        return 0;
    }
    if(ar1[12]==0&&ar1[13]==0&&ar1[14]==0&&ar1[15]==0&&ar1[16]==1){
        return 1;
    }
     if(ar1[12]==0&&ar1[13]==0&&ar1[14]==0&&ar1[15]==1&&ar1[16]==0){
        return 2;
    }
     if(ar1[12]==0&&ar1[13]==0&&ar1[14]==0&&ar1[15]==1&&ar1[16]==1){
        return 3;
    }
     if(ar1[12]==0&&ar1[13]==0&&ar1[14]==1&&ar1[15]==0&&ar1[16]==0){
        return 4;
    }
    if(ar1[12]==0&&ar1[13]==0&&ar1[14]==1&&ar1[15]==0&&ar1[16]==1){
        return 5;
    }
    if(ar1[12]==0&&ar1[13]==0&&ar1[14]==1&&ar1[15]==1&&ar1[16]==0){
        return 6;
    }
    if(ar1[12]==0&&ar1[13]==0&&ar1[14]==1&&ar1[15]==1&&ar1[16]==1){
        return 7;
    }
    if(ar1[12]==0&&ar1[13]==1&&ar1[14]==0&&ar1[15]==0&&ar1[16]==0){
        return 8;
    }
    if(ar1[12]==0&&ar1[13]==1&&ar1[14]==0&&ar1[15]==0&&ar1[16]==1){
        return 9;
    }
    if(ar1[12]==0&&ar1[13]==1&&ar1[14]==0&&ar1[15]==1&&ar1[16]==0){
        return 10;
    }
    if(ar1[12]==0&&ar1[13]==1&&ar1[14]==0&&ar1[15]==1&&ar1[16]==1){
        return 11;
    }
    if(ar1[12]==0&&ar1[13]==1&&ar1[14]==1&&ar1[15]==0&&ar1[16]==0){
        return 12;
    }
    if(ar1[12]==0&&ar1[13]==1&&ar1[14]==1&&ar1[15]==0&&ar1[16]==1){
        return 13;
    }
    if(ar1[12]==0&&ar1[13]==1&&ar1[14]==1&&ar1[15]==1&&ar1[16]==0){
        return 14;
    }
    if(ar1[12]==0&&ar1[13]==1&&ar1[14]==1&&ar1[15]==1&&ar1[16]==1){
        return 15;
    }
    if(ar1[12]==1&&ar1[13]==0&&ar1[14]==0&&ar1[15]==0&&ar1[16]==0){
        return 16;
    }
    if(ar1[12]==1&&ar1[13]==0&&ar1[14]==0&&ar1[15]==0&&ar1[16]==1){
        return 17;
    }
    if(ar1[12]==1&&ar1[13]==0&&ar1[14]==0&&ar1[15]==1&&ar1[16]==0){
        return 18;
    }
    if(ar1[12]==1&&ar1[13]==0&&ar1[14]==0&&ar1[15]==1&&ar1[16]==1){
        return 19;
    }
    if(ar1[12]==1&&ar1[13]==0&&ar1[14]==1&&ar1[15]==0&&ar1[16]==0){
        return 20;
    }
    if(ar1[12]==1&&ar1[13]==0&&ar1[14]==1&&ar1[15]==0&&ar1[16]==1){
        return 21;
    }
    if(ar1[12]==1&&ar1[13]==0&&ar1[14]==1&&ar1[15]==1&&ar1[16]==0){
        return 22;
    }
    if(ar1[12]==1&&ar1[13]==0&&ar1[14]==1&&ar1[15]==1&&ar1[16]==1){
        return 23;
    }
    if(ar1[12]==1&&ar1[13]==1&&ar1[14]==0&&ar1[15]==0&&ar1[16]==0){
        return 24;
    }
    if(ar1[12]==1&&ar1[13]==1&&ar1[14]==0&&ar1[15]==0&&ar1[16]==1){
        return 25;
    }
    if(ar1[12]==1&&ar1[13]==1&&ar1[14]==0&&ar1[15]==1&&ar1[16]==0){
        return 26;
    }
    if(ar1[12]==1&&ar1[13]==1&&ar1[14]==0&&ar1[15]==1&&ar1[16]==1){
        return 27;
    }
    if(ar1[12]==1&&ar1[13]==1&&ar1[14]==1&&ar1[15]==0&&ar1[16]==0){
        return 28;
    }
    if(ar1[12]==1&&ar1[13]==1&&ar1[14]==1&&ar1[15]==0&&ar1[16]==1){
        return 29;
    }
    if(ar1[12]==1&&ar1[13]==1&&ar1[14]==1&&ar1[15]==1&&ar1[16]==0){
        return 30;
    }
    if(ar1[12]==1&&ar1[13]==1&&ar1[14]==1&&ar1[15]==1&&ar1[16]==1){
        return 31;
    }
   
}
int r2Finder(int ar1[]){
    if(ar1[7]==0&&ar1[8]==0&&ar1[9]==0&&ar1[10]==0&&ar1[11]==0){
        return 0;
    }
    if(ar1[7]==0&&ar1[8]==0&&ar1[9]==0&&ar1[10]==0&&ar1[11]==1){
        return 1;
    }
     if(ar1[7]==0&&ar1[8]==0&&ar1[9]==0&&ar1[10]==1&&ar1[11]==0){
        return 2;
    }
     if(ar1[7]==0&&ar1[8]==0&&ar1[9]==0&&ar1[10]==1&&ar1[11]==1){
        return 3;
    }
     if(ar1[7]==0&&ar1[8]==0&&ar1[9]==1&&ar1[10]==0&&ar1[11]==0){
        return 4;
    }
    if(ar1[7]==0&&ar1[8]==0&&ar1[9]==1&&ar1[10]==0&&ar1[11]==1){
        return 5;
    }
    if(ar1[7]==0&&ar1[8]==0&&ar1[9]==1&&ar1[10]==1&&ar1[11]==0){
        return 6;
    }
    if(ar1[7]==0&&ar1[8]==0&&ar1[9]==1&&ar1[10]==1&&ar1[11]==1){
        return 7;
    }
    if(ar1[7]==0&&ar1[8]==1&&ar1[9]==0&&ar1[10]==0&&ar1[11]==0){
        return 8;
    }
    if(ar1[7]==0&&ar1[8]==1&&ar1[9]==0&&ar1[10]==0&&ar1[11]==1){
        return 9;
    }
    if(ar1[7]==0&&ar1[8]==1&&ar1[9]==0&&ar1[10]==1&&ar1[11]==0){
        return 10;
    }
    if(ar1[7]==0&&ar1[8]==1&&ar1[9]==0&&ar1[10]==1&&ar1[11]==1){
        return 11;
    }
    if(ar1[7]==0&&ar1[8]==1&&ar1[9]==1&&ar1[10]==0&&ar1[11]==0){
        return 12;
    }
    if(ar1[7]==0&&ar1[8]==1&&ar1[9]==1&&ar1[10]==0&&ar1[11]==1){
        return 13;
    }
    if(ar1[7]==0&&ar1[8]==1&&ar1[9]==1&&ar1[10]==1&&ar1[11]==0){
        return 14;
    }
    if(ar1[7]==0&&ar1[8]==1&&ar1[9]==1&&ar1[10]==1&&ar1[11]==1){
        return 15;
    }
    if(ar1[7]==1&&ar1[8]==0&&ar1[9]==0&&ar1[10]==0&&ar1[11]==0){
        return 16;
    }
    if(ar1[7]==1&&ar1[8]==0&&ar1[9]==0&&ar1[10]==0&&ar1[11]==1){
        return 17;
    }
    if(ar1[7]==1&&ar1[8]==0&&ar1[9]==0&&ar1[10]==1&&ar1[11]==0){
        return 18;
    }
    if(ar1[7]==1&&ar1[8]==0&&ar1[9]==0&&ar1[10]==1&&ar1[11]==1){
        return 19;
    }
    if(ar1[7]==1&&ar1[8]==0&&ar1[9]==1&&ar1[10]==0&&ar1[11]==0){
        return 20;
    }
    if(ar1[7]==1&&ar1[8]==0&&ar1[9]==1&&ar1[10]==0&&ar1[11]==1){
        return 21;
    }
    if(ar1[7]==1&&ar1[8]==0&&ar1[9]==1&&ar1[10]==1&&ar1[11]==0){
        return 22;
    }
    if(ar1[7]==1&&ar1[8]==0&&ar1[9]==1&&ar1[10]==1&&ar1[11]==1){
        return 23;
    }
    if(ar1[7]==1&&ar1[8]==1&&ar1[9]==0&&ar1[10]==0&&ar1[11]==0){
        return 24;
    }
    if(ar1[7]==1&&ar1[8]==1&&ar1[9]==0&&ar1[10]==0&&ar1[11]==1){
        return 25;
    }
    if(ar1[7]==1&&ar1[8]==1&&ar1[9]==0&&ar1[10]==1&&ar1[11]==0){
        return 26;
    }
    if(ar1[7]==1&&ar1[8]==1&&ar1[9]==0&&ar1[10]==1&&ar1[11]==1){
        return 27;
    }
    if(ar1[7]==1&&ar1[8]==1&&ar1[9]==1&&ar1[10]==0&&ar1[11]==0){
        return 28;
    }
    if(ar1[7]==1&&ar1[8]==1&&ar1[9]==1&&ar1[10]==0&&ar1[11]==1){
        return 29;
    }
    if(ar1[7]==1&&ar1[8]==1&&ar1[9]==1&&ar1[10]==1&&ar1[11]==0){
        return 30;
    }
    if(ar1[7]==1&&ar1[8]==1&&ar1[9]==1&&ar1[10]==1&&ar1[11]==1){
        return 31;
    }
}
int imm12bitFinder(int ar2[]){
    int k = 0;
    if(ar2[0]==0){
        for(int i=1;i<12;i++){
            if(ar2[i]==1){
            k = k+ pow(2,(11-i));
            }
        }
        return k;
    }
    else if(ar2[0]==1){
        for(int i=1;i<12;i++){
            if(ar2[i]==0){
            k = k+ pow(2,(11-i));
            }
        }
        return -(k+1);
    }   
}
int imm6bittaker(int ar[]){
    int k = 0;
    if(ar[0]==0){
        for(int i=7;i<12;i++){
            if(ar[i]==1){
            k = k+ pow(2,(11-i));
            }
        }
        return k;
    }
    else if(ar[0]==1){
        for(int i=7;i<12;i++){
            if(ar[i]==0){
            k = k+ pow(2,(11-i));
            }
        }
        return -(k+1);
    } 

}
int imm12bitFinders(int ar3[]){
    int k = 0;
    if(ar3[0]==0){
        for(int i=1;i<7;i++){
            if(ar3[i]==1){
            k = k+ pow(2,(11-i));
            }
        }
        for(int i= 20;i<25;i++){
            if(ar3[i]==1){
            k = k+ pow(2,(24-i));
            }
        }
        return k;
    }
    else if(ar3[0]==1){
        for(int i=1;i<7;i++){
            if(ar3[i]==0){
            k = k+ pow(2,(11-i));
            }
        }
        for(int i= 20;i<25;i++){
            if(ar3[i]==0){
            k = k+ pow(2,(24-i));
            }
        }
        return -(k+1);
    }   

}
int imm12bitFinders2(int ar4[]){
    int k=0;
    if (ar4[0]==0){
        if(ar4[24]==1){
            k =k+ pow(2,11);
        }
        for(int i=1;i<7;i++){
            if(ar4[i]==1){
            k = k+ pow(2,(11-i));
            }
        }
        for(int i=20;i<24;i++){
            if(ar4[i]==1){
                k = k+ pow(2,24-i);
            }
        }
        return k;
    }
    if (ar4[0]==1){
        if(ar4[24]==0){
            k =k+ pow(2,11);
        }
        for(int i=1;i<7;i++){
            if(ar4[i]==0){
            k = k+ pow(2,(11-i));
            }
        }
        for(int i=20;i<24;i++){
            if(ar4[i]==0){
                k = k+ pow(2,24-i);
            }
        }
        return -(k+1);
    }

}
int immBTFinder(int ar5[]){
    int k=0;
    if(ar5[0]==0){
        for(int i = 12; i<19;i++){
            if(ar5[i]==1){
            k = k+ pow(2,(31-i));
            }
        }
        if(ar5[20]==1){
            k= k+ pow(2,11);
        }
        for (int i = 1;i<11;i++){
            if(ar5[i]==1){
                k=k+ pow(2,(11-i));
            }
        }
        return k;
    }
    if(ar5[0]==1){
        for(int i = 12; i<19;i++){
            if(ar5[i]==0){
            k = k+ pow(2,(31-i));
            }
        }
        if(ar5[20]==0){
            k= k+ pow(2,11);
        }
        for (int i = 1;i<11;i++){
            if(ar5[i]==0){
                k=k+ pow(2,(11-i));
            }
        }
        return -(k+1);
    }
    

}
/*int immUFinder(int ar6[]){
    for(int i=0;i<5;i++){

    }
    }*/

void Rtype(int ar[]){
    int ad,a1,a2;
    //printf("Rtype input\n");
    if(ar[17]==0 && ar[18]==0 && ar[19]==0 && ar[1]==0){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("add x%d x%d x%d\n",ad,a1,a2);

    }
    else if(ar[17]==0 && ar[18]==0 && ar[19]==0 && ar[1]==1){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("sub x%d x%d x%d\n",ad,a1,a2);
    }
    else if(ar[17]==1 && ar[18]==0 && ar[19]==0){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("xor x%d x%d x%d\n",ad,a1,a2);
    }
    else if(ar[17]==1 && ar[18]==1 && ar[19]==0){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("or x%d x%d x%d\n",ad,a1,a2);
    }
    else if(ar[17]==1 && ar[18]==1 && ar[19]==1){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("and x%d x%d x%d\n",ad,a1,a2);
    }
    else if(ar[17]==0 && ar[18]==0 && ar[19]==1){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("sll x%d x%d x%d\n",ad,a1,a2);
    }
    else if(ar[17]==1 && ar[18]==0 && ar[19]==1 && ar[1]==0){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("srl x%d x%d x%d\n",ad,a1,a2);
    }
    else if(ar[17]==1 && ar[18]==0 && ar[19]==1&& ar[0]==0){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("sra x%d x%d x%d\n",ad,a1,a2);
    }
    else if(ar[17]==0 && ar[18]==1 && ar[19]==0){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("slt x%d x%d x%d\n",ad,a1,a2);
    }
    else if(ar[17]==0 && ar[18]==1 && ar[19]==1){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("sltu x%d x%d x%d\n",ad,a1,a2);
    }
}
void Itype(int ar[]){
    int ad, a1,a2;
    if(ar[17]==0 && ar[18]==0 && ar[19]==0){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = imm12bitFinder(ar);
        printf("addi x%d x%d %d\n",ad,a1,a2);

    }
    else if(ar[17]==1 && ar[18]==0 && ar[19]==0){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = imm12bitFinder(ar);
        printf("xori x%d x%d %d\n",ad,a1,a2);
    }
    else if(ar[17]==1 && ar[18]==1 && ar[19]==0){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = imm12bitFinder(ar);
        printf("ori x%d x%d %d\n",ad,a1,a2);
    }
    else if(ar[17]==1 && ar[18]==1 && ar[19]==1){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = imm12bitFinder(ar);
        printf("andi x%d x%d %d\n",ad,a1,a2);
    }
    else if(ar[17]==0 && ar[18]==0 && ar[19]==1){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = imm12bitFinder(ar);
        printf("slli x%d x%d %d\n",ad,a1,a2);
    }
    else if(ar[17]==1 && ar[18]==0 && ar[19]==1 ){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = imm6bittaker(ar);
        printf("srai x%d x%d %d\n",ad,a1,a2);
    }
    else if(ar[17]==1 && ar[18]==0 && ar[19]==1&& ar[5]==0){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = imm12bitFinder(ar);
        printf("srli x%d x%d %d\n",ad,a1,a2);
    }
    
    else if(ar[17]==0 && ar[18]==1 && ar[19]==0){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = imm12bitFinder(ar);
        printf("slti x%d x%d %d\n",ad,a1,a2);
    }
    else if(ar[17]==0 && ar[18]==1 && ar[19]==1){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = imm12bitFinder(ar);
        printf("sltiu x%d x%d %d\n",ad,a1,a2);
    }  
}
void Itype1(int ar[]){
   int ad, a1,a2;
    if(ar[17]==0 && ar[18]==0 && ar[19]==0){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = imm12bitFinder(ar);
        printf("lb x%d %d(x%d)\n",ad,a2,a1); 
    }
    else if(ar[17]==0 && ar[18]==0 && ar[19]==1){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = imm12bitFinder(ar);
        printf("lh x%d %d(x%d)\n",ad,a2,a1); 
    }
    else if(ar[17]==0 && ar[18]==1 && ar[19]==0){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = imm12bitFinder(ar);
        printf("lw x%d %d(x%d)\n",ad,a2,a1); 
    }
    else if(ar[17]==0 && ar[18]==1 && ar[19]==1){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = imm12bitFinder(ar);
        printf("ld x%d %d(x%d)\n",ad,a2,a1); 
    }
    else if(ar[17]==1 && ar[18]==0 && ar[19]==0){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = imm12bitFinder(ar);
        printf("lbu x%d %d(x%d)\n",ad,a2,a1); 
    }
    else if(ar[17]==1 && ar[18]==0 && ar[19]==1){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = imm12bitFinder(ar);
        printf("lhu x%d %d(x%d)\n",ad,a2,a1); 
    }
    else if(ar[17]==1 && ar[18]==1 && ar[19]==0){
        ad = desregisterFinder(ar);
        a1 = r1Finder(ar);
        a2 = imm12bitFinder(ar);
        printf("lwu x%d %d(x%d)\n",ad,a2,a1); 
    }
    
}
void Stype(int ar[]){
    int ad,a1,a2;
    if(ar[17]==0 && ar[18]==0 && ar[19]==0){
        ad = imm12bitFinders(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("sb x%d %d(x%d)\n",a2,ad,a1); 
    }
    else if(ar[17]==0 && ar[18]==0 && ar[19]==1){
        ad = imm12bitFinders(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("sh x%d %d(x%d)\n",a2,ad,a1); 
    }
    else if(ar[17]==0 && ar[18]==1 && ar[19]==0){
        ad = imm12bitFinders(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("sw x%d %d(x%d)\n",a2,ad,a1); 
    }
    else if(ar[17]==0 && ar[18]==1 && ar[19]==1){
        ad = imm12bitFinders(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("sd x%d %d(x%d)\n",a2,ad,a1); 
    }
}
void Btype(int ar[]){
    int ad,a1,a2;
    if(ar[17]==0 && ar[18]==0 && ar[19]==0){
        ad = imm12bitFinders2(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("beq x%d x%d %d\n",a1,a2,ad); 
    }
    else if(ar[17]==0 && ar[18]==0 && ar[19]==1){
        ad = imm12bitFinders2(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("bne x%d x%d %d\n",a1,a2,ad); 
    }
    else if(ar[17]==1 && ar[18]==0 && ar[19]==0){
        ad = imm12bitFinders2(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("blt x%d x%d %d\n",a1,a2,ad); 
    }
    else if(ar[17]==1 && ar[18]==0 && ar[19]==1){
        ad = imm12bitFinders2(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("bge x%d x%d %d\n",a1,a2,ad); 
    }
    else if(ar[17]==1 && ar[18]==1 && ar[19]==0){
        ad = imm12bitFinders2(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("bltu x%d x%d %d\n",a1,a2,ad); 
    }
    else if(ar[17]==1 && ar[18]==1 && ar[19]==1){
        ad = imm12bitFinders2(ar);
        a1 = r1Finder(ar);
        a2 = r2Finder(ar);
        printf("bgeu x%d x%d %d\n",a1,a2,ad); 
    }
    
}
void Jtype(int ar[]){
    int ad,a1;
    ad = desregisterFinder(ar);
    a1 = immBTFinder(ar);
    printf("jal x%d %d\n",ad,a1);
}
void Utype(int ar[],char arr[]){
int ad;
//char *a1;
ad = desregisterFinder(ar);
//a1 = 
printf("lui x%d 0x",ad);
for(int i=0;i<5;i++){
printf("%c",arr[i]);
}
printf("\n");
}
void Itype2(int ar[]){
    int ad,a1,a2;
    ad = desregisterFinder(ar);
    a1 = r1Finder(ar);
    a2 = imm12bitFinder(ar);
    printf("jalr x%d x%d %d\n",ad,a1,a2);
}
void binaryConvertor(char arr[]){
    int B[N];
    for(int i=0;i<16;i++){
        if(arr[i]=='0'){
            B[4*i]=0;
            B[4*i+1]=0;
            B[4*i+2]=0;
            B[4*i+3]=0;
           // break;
        }
        else if(arr[i]=='1'){
            B[4*i]=0;
            B[4*i+1]=0;
            B[4*i+2]=0;
            B[4*i+3]=1;
            //break;
        }
        else if(arr[i]=='2'){
            B[4*i]=0;
            B[4*i+1]=0;
            B[4*i+2]=1;
            B[4*i+3]=0;
            //break;
        }
        else if(arr[i]=='3'){
            B[4*i]=0;
            B[4*i+1]=0;
            B[4*i+2]=1;
            B[4*i+3]=1;
            //break;
        }
        else if(arr[i]=='4'){
            B[4*i]=0;
            B[4*i+1]=1;
            B[4*i+2]=0;
            B[4*i+3]=0;
            //break;
        }
        else if(arr[i]=='5'){
            B[4*i]=0;
            B[4*i+1]=1;
            B[4*i+2]=0;
            B[4*i+3]=1;
            //break;
        }
        else if(arr[i]=='6'){
            B[4*i]=0;
            B[4*i+1]=1;
            B[4*i+2]=1;
            B[4*i+3]=0;
            //break;
        }
        else if(arr[i]=='7'){
            B[4*i]=0;
            B[4*i+1]=1;
            B[4*i+2]=1;
            B[4*i+3]=1;
            //break;
        }
        else if(arr[i]=='8'){
            B[4*i]=1;
            B[4*i+1]=0;
            B[4*i+2]=0;
            B[4*i+3]=0;
            //break;
        }
        else if(arr[i]=='9'){
            B[4*i]=1;
            B[4*i+1]=0;
            B[4*i+2]=0;
            B[4*i+3]=1;
            //break;
        }
        else if(arr[i]=='a'){
            B[4*i]=1;
            B[4*i+1]=0;
            B[4*i+2]=1;
            B[4*i+3]=0;
            //break;
        }
        else if(arr[i]=='b'){
            B[4*i]=1;
            B[4*i+1]=0;
            B[4*i+2]=1;
            B[4*i+3]=1;
            //break;
        }
        else if(arr[i]=='c'){
            B[4*i]=1;
            B[4*i+1]=1;
            B[4*i+2]=0;
            B[4*i+3]=0;
            //break;
        }
        else if(arr[i]=='d'){
            B[4*i]=1;
            B[4*i+1]=1;
            B[4*i+2]=0;
            B[4*i+3]=1;
            //break;
        }
        else if(arr[i]=='e'){
            B[4*i]=1;
            B[4*i+1]=1;
            B[4*i+2]=1;
            B[4*i+3]=0;
            //break;
        }
        else if(arr[i]=='f'){
            B[4*i]=1;
            B[4*i+1]=1;
            B[4*i+2]=1;
            B[4*i+3]=1;
            //break;
        }
    }
    // for (int j=0;j<32;j++){
    //     printf("%d",B[j]);
    // }
    printf("\n");
    if(B[31]==1&& B[30]==1&& B[29]==0&& B[28]==0&& B[27]==1&& B[26]==1&& B[25]==0){
        Rtype(B);
    }
    else if(B[31]==1&& B[30]==1&& B[29]==0&& B[28]==0&& B[27]==1&& B[26]==0&& B[25]==0){
        Itype(B);
    }
    else if(B[31]==1&& B[30]==1&& B[29]==0&& B[28]==0&& B[27]==0&& B[26]==0&& B[25]==0){
        Itype1(B);
    }
    else if(B[31]==1&& B[30]==1&& B[29]==0&& B[28]==0&& B[27]==0&& B[26]==1&& B[25]==0){
        Stype(B);
    }
    else if(B[31]==1&& B[30]==1&& B[29]==0&& B[28]==0&& B[27]==0&& B[26]==1&& B[25]==1){
        Btype(B);
    }
    else if(B[31]==1&& B[30]==1&& B[29]==1&& B[28]==1&& B[27]==0&& B[26]==1&& B[25]==1){
        Jtype(B);
    }
    else if(B[31]==1&& B[30]==1&& B[29]==1&& B[28]==0&& B[27]==1&& B[26]==1&& B[25]==0){
        Utype(B,arr);
    }
    else if(B[31]==1&& B[30]==1&& B[29]==1&& B[28]==0&& B[27]==0&& B[26]==1&& B[25]==1){
        Itype2(B);//jalr
    }
    else {
        printf("Ilegal Instruction\n");
    }
    //if
}
void disassembler(int c){
    int b = c;
    char A[b][N];
    printf("Entered disassembler\n");
    printf("Enter assembled strings:\n");
    for(int i=0;i<b;i++){
        scanf("%s",&A[i]);
    }
    for(int i=0;i<b;i++){
        if(A[i][8] != '\0'){
        printf("one or more of the input instruction is illegal\n");
        return;
    }
    }
    // int k = strlen(A[1]);
    // int k1 = strlen(A[0]);
    // printf("%d",k);
    // printf("%d",k1);
    // for(int i=0;i<b;i++){
    //     printf("%c",A[i][8]);
    // }
    //printf("\n");
    // for(int i=0;i<b;i++){
    //     printf("%s\n",A[i]);
    // }
    for (int i=0;i<b;i++){
        binaryConvertor(A[i]);
    }
    // scanf("%s",A);
    // printf("%s\n",A);
    //printf("%c\n",A[1]);

}
int main(){
    int a;
    int b;
    do{
        printf("1:Disassembling\n2:Exit\nEnter the mode:");
        scanf("%d",&a);
        switch(a){
            case 1:
            printf("enter the number of lines of the assembled code:");
            scanf("%d",&b);
            disassembler(b);
            break;
            case 2:
            printf("Exiting from the disassembler\n");
            //printf("%d\n",N);
            return 0;
        }

    }while(a != 0);
    return 0;
}