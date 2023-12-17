#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
static int i,j,k,n,mid,flag;
void patternA_Z(char ch){
    n=10;
    mid=5;
   for(i=0;i<n;i++){
        //A
        for(k=0;k<n-i;k++){
            printf(" ");
        }
        //for print
        for(j=0;j<=2*i+1;j++){
            if(j==0||j==2*i+1||i==mid){
                 printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(j=0;j<n-i;j++){
            printf(" ");
        }

        //for space
        for(k=0;k<1;k++){
            printf("\t");
        }
        //B

            for(j=0;j<n;j++){
            if(j==0||j==n-1||i==0||i==n-1||i==mid){
                 printf("*");
            }
            else{
                printf(" ");
            }
        }
         //for space
        for(k=0;k<1;k++){
            printf("\t");
        }
       //C
        for(j=0;j<n;j++){
            if(j==0||i==0||i==n-1){
                 printf("*");
            }
            else{
                printf(" ");
            }
        }
          //for space
        for(k=0;k<1;k++){
            printf("\t");
        }

       //D
        for(j=0;j<n;j++){
            if(i==0||i==n-1||j==n-1||j==mid/2){
                 printf("*");
            }
            else{
                printf(" ");
            }
        }
          //for space
        for(k=0;k<1;k++){
            printf("\t");
        }
       //E
        for(j=0;j<n;j++){
            if(i==0||i==n-1||j==0||i==mid){
                 printf("*");
            }
            else{
                printf(" ");
            }
        }
          //for space

            printf("\t");

       //F
       for(j=0;j<n;j++){
          if(i==0||i==mid||j==0)
            printf("*");
          else
            printf(" ");
       }
       //for space
       printf("\t");
       //G
        for(j=0;j<n;j++){
              if(i==0||i==n-1||j==0||j==n-1&&i>mid||i==mid&&j>mid)
                    printf("*");
              else
                    printf(" ");

         }


        printf("\n");
    }
     printf("\n\n");

    for(i=0;i<n;i++){


            //H
           for(j=0;j<n;j++){
              if(j==0||j==n-1||i==mid)
                    printf("*");
              else
                    printf(" ");

         }
             printf("\t");

           //I
          for(j=0;j<n;j++){
              if(i==0||i==n-1||j==mid)
                    printf("*");
              else
                    printf(" ");

         }
         printf("\t");
         //J
          for(j=0;j<n;j++){
            if(i==0&&(j>n/10&&j<n-n*2/10)||j==mid||i==n-1&&j<mid||j==0&&i>mid)
                printf("*");
            else
                printf(" ");
            }
        printf("\t");

        //K
        for(j=0;j<n;j++){
            if(j==0||j==n-2*i-1||j==2*i-n+1){
                printf("*");
            }
            else{
                printf(" ");
            }
           }
           printf("\t");

           //L
                 for(j=0;j<n;j++){
            if(j==0||i==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
           }
          printf("\t");
          //M
           for(j=0;j<n;j++){
        if(j==n-i-1)
            printf("*");
        else
            printf(" ");
       }

       for(j=0;j<n;j++){
        if(j==i-1&&i<mid)
            printf("*");
        else{
            if(j<mid-1)
               printf(" ");
         }
       }



       for(j=0;j<n;j++){
        if(j==n-mid-i-2&&i<mid)
            printf("*");
        else {
             if(j<mid-1)
            printf(" ");


          }
       }

      for(j=0;j<n;j++){
        if(j==i-1)
            printf("*");
        else
            printf(" ");

}
       printf("\t");

       //N
       for(j=0;j<n;j++){
            if(j==0||j==n-1||j==i){
                printf("*");
            }
            else{
                printf(" ");
            }
           }


          printf("\n");
    }
    printf("\n\n");

      //O
       for(i=0;i<n;i++){
           for(j=0;j<n;j++){
            if(j==0||i==n-1||i==0||j==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
           }
       printf("\t");
        //P
           for(j=0;j<n;j++){
            if(j==0||i==0||i==mid||j==n-1&&i<mid){
                printf("*");
            }
            else{
                printf(" ");
            }
           }
           printf("\t");


//Q
         for(j=0;j<n;j++){
            if(i==0||i==n-n*3/10||j==0&&i<n-n*3/10||j==n-1&&i<n-n*3/10||j==i-n/3&&(j>=mid-1&&i>=n-n*3/10))
                printf("*");
            else
                printf(" ");


         }
         printf("\t");



//R

         for(j=0;j<n;j++){
            if(j==0||i==0||i==mid||j==n-1&&i<mid||j==i-mid&&i>mid)
                printf("*");
            else
                printf(" ");


         }
       printf("\t");
//S

         for(j=0;j<n;j++){
            if(i==0||i==n-1||i==mid||j==0&&i<mid||j==n-1&&i>mid)
                printf("*");
            else
                printf(" ");


         }
       printf("\t");
//T


         for(j=0;j<n;j++){
            if(i==0||j==mid)
                printf("*");
            else
                printf(" ");
}
      printf("\t");
//U
      for(j=0;j<n;j++){
            if(j==0||j==n-1||i==n-1)
                printf("*");
            else
                printf(" ");
           }


    printf("\n");

   }
   printf("\n\n");


     for(i=0;i<n;i++){
       //V
        for(j=0;j<n;j++){
            if(j==i)
                printf("*");
            else
                printf(" ");
        }
        for(j=0;j<n;j++){
            if(j==n-i-1)
                printf("*");
            else
                printf(" ");
        }
     printf("\t");
     //W

        for(j=0;j<n;j++){
            if(j==i)
                printf("*");
            else
                printf(" ");
          }

          for(j=0;j<n;j++){
            if(j==n-i-2&&i>=mid)
                printf("*");
            else{
                 if(j<n/2-1)
                printf(" ");

              }
        }

          for(j=0;j<n;j++){
            if(j==i-mid&&i>mid)
                printf("*");
            else{
                 if(j<n/2){
                        printf(" ");
                      }
                 }

             }


           for(j=0;j<n;j++){
            if(j==n-i-1&&j>0)
                printf("*");
            else{
                  if(i==mid&&flag==0){
                    flag++;
                    continue;
                  }
                  else{
                    printf(" ");
                  }
               }
          }

      printf("\t");

//X

        for(j=0;j<n;j++){
            if(j==i||j==n-i-1)
                printf("*");
            else
                printf(" ");

        }
        printf("\t");
//Y
         for(j=0;j<n;j++){
            if(j==i&&j<mid||j==n-i-1)
                printf("*");
            else
                //if(j<mid-1)
                    printf(" ");


         }
         printf("\t");
//Z
    for(j=0;j<n;j++){
            if(i==0||i==n-1||j==n-i-1)
                printf("*");
            else
               printf(" ");
       }

       printf("\n");
   }
}

void patternA(char ch){
          printf("enter an integer value to print A:");
    scanf("%d",&n);
    mid=n/2;
    for(i=0;i<n;i++){
        //for space
        for(k=0;k<n-i;k++){
            printf(" ");
        }
        //for print
        for(j=0;j<=2*i+1;j++){
            if(j==0||j==2*i+1||i==mid){
                 printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}
void patternB(char ch){
          printf("enter an integer value to print B:");
    scanf("%d",&n);
    mid=n/2;
    for(i=0;i<n;i++){

        for(j=0;j<n;j++){
            if(j==0||j==n-1||i==0||i==n-1||i==mid){
                 printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}
void patternC(char ch){
          printf("enter an integer value to print C:");
    scanf("%d",&n);

    for(i=0;i<n;i++){

        for(j=0;j<n;j++){
            if(j==0||i==0||i==n-1){
                 printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}
void patternD(char ch){
          printf("enter an integer value to print D:");
    scanf("%d",&n);
    mid=n/2;
    for(i=0;i<n;i++){

        for(j=0;j<n;j++){
            if(i==0||i==n-1||j==n-1||j==mid/2){
                 printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}

void patternE(char ch){
          printf("enter an integer value to print E:");
    scanf("%d",&n);
    mid=n/2;
    for(i=0;i<n;i++){

        for(j=0;j<n;j++){
            if(j==0||i==0||i==mid||i==n-1){
                 printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}

void patternF(char ch){
          printf("enter an integer value to print F:");
    scanf("%d",&n);
    mid=n/2;
    for(i=0;i<n;i++){

        for(j=0;j<n;j++){
            if(j==0||i==0||i==mid){
                 printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}

void patternG(char ch){
          printf("enter an integer value to print G:");
   scanf("%d",&n);
    mid=n/2;

   for(i=0;i<n;i++){
       printf("\n");

         for(j=0;j<n;j++){
              if(i==0||i==n-1||j==0||j==n-1&&i>mid||i==mid&&j>mid)
                    printf("*");
              else
                    printf(" ");

         }
    }
}

void patternH(char ch){
          printf("enter an integer value to print H:");
   scanf("%d",&n);
    mid=n/2;

   for(i=0;i<n;i++){
       printf("\n");

         for(j=0;j<n;j++){
              if(j==0||j==n-1||i==mid)
                    printf("*");
              else
                    printf(" ");

         }
     }
}

void patternI(char ch){
          printf("enter an integer value to print I:");
   scanf("%d",&n);
    mid=n/2;

   for(i=0;i<n;i++){
       printf("\n");

         for(j=0;j<n;j++){
              if(i==0||i==n-1||j==mid)
                    printf("*");
              else
                    printf(" ");

         }
     }
}
void patternJ(char ch){


         printf("enter an integer value to print J:");
   scanf("%d",&n);
   if(n%2==0)
        n++;
  mid=n/2;

   for(i=0;i<n;i++){
          for(j=0;j<n;j++){
            if(i==0&&(j>n/10&&j<n-n*2/10)||j==mid||i==n-1&&j<mid||j==0&&i>mid)
                printf("*");
            else
                printf(" ");
            }

          printf("\n");
   }
}

void patternK(char ch){


      printf("enter an integer value to print K:");
    scanf("%d",&n);
      mid=n/2;
      for(i=0;i<n;i++){
           for(j=0;j<n;j++){
            if(j==0||j==n-2*i-1||j==2*i-n+1){
                printf("*");
            }
            else{
                printf(" ");
            }
           }
           printf("\n");
      }
}

void patternL(char ch){


      printf("enter an integer value to print L:");
    scanf("%d",&n);

      for(i=0;i<n;i++){
           for(j=0;j<n;j++){
            if(j==0||i==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
           }
           printf("\n");
      }
}

void patternM(char ch){


        printf("enter an integer value to print M:");
   scanf("%d",&n);
   if(n%2!=0)
        n++;

   mid=n/2;

   for(i=0;i<n;i++){

       for(j=0;j<n;j++){
        if(j==n-i-1)
            printf("*");
        else
            printf(" ");
       }

       for(j=0;j<n;j++){
        if(j==i-1&&i<mid)
            printf("*");
        else{
            if(j<mid-1)
               printf(" ");
         }
       }



       for(j=0;j<n;j++){
        if(j==n-mid-i-2&&i<mid)
            printf("*");
        else {
             if(j<mid-1)
            printf(" ");


          }
       }

      for(j=0;j<n;j++){
        if(j==i-1)
            printf("*");
        else
            printf(" ");

}

      printf("\n");
    }

}

void patternN(char ch){


      printf("enter an integer value to print N:");
    scanf("%d",&n);

      for(i=0;i<n;i++){
           for(j=0;j<n;j++){
            if(j==0||j==n-1||j==i){
                printf("*");
            }
            else{
                printf(" ");
            }
           }
           printf("\n");
      }
}

void patternO(char ch){


      printf("enter an integer value to print O:");
    scanf("%d",&n);

      for(i=0;i<n;i++){
           for(j=0;j<n;j++){
            if(j==0||i==n-1||i==0||j==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
           }
           printf("\n");
      }
}

void patternP(char ch){


      printf("enter an integer value to print P:");
    scanf("%d",&n);
      mid=n/2;
      for(i=0;i<n;i++){
           for(j=0;j<n;j++){
            if(j==0||i==0||i==mid||j==n-1&&i<mid){
                printf("*");
            }
            else{
                printf(" ");
            }
           }
           printf("\n");
      }
}
void patternQ(char ch){


       printf("enter an integer value to print Q:");
   scanf("%d",&n);
    mid=n/2;

   for(i=0;i<n;i++){
       printf("\n");

         for(j=0;j<n;j++){
            if(i==0||i==n-n*3/10||j==0&&i<n-n*3/10||j==n-1&&i<n-n*3/10||j==i-n/3&&(j>=mid-1&&i>=n-n*3/10))
                printf("*");
            else
                printf(" ");


         }
   }
}


void patternR(char ch){


       printf("enter an integer value to print R:");
   scanf("%d",&n);
    mid=n/2;

   for(i=0;i<n;i++){
       printf("\n");

         for(j=0;j<n;j++){
            if(j==0||i==0||i==mid||j==n-1&&i<mid||j==i-mid&&i>mid)
                printf("*");
            else
                printf(" ");


         }
    }
}

void patternS(char ch){


       printf("enter an integer value to print S:");
   scanf("%d",&n);
    mid=n/2;

   for(i=0;i<n;i++){
       printf("\n");

         for(j=0;j<n;j++){
            if(i==0||i==n-1||i==mid||j==0&&i<mid||j==n-1&&i>mid)
                printf("*");
            else
                printf(" ");


         }
  }

}

void patternT(char ch){


       printf("enter an integer value to print T:");
   scanf("%d",&n);
    mid=n/2;

   for(i=0;i<n;i++){
       printf("\n");

         for(j=0;j<n;j++){
            if(i==0||j==mid)
                printf("*");
            else
                printf(" ");


         }
    }
}

void patternU(char ch){


      printf("enter an integer value to print U:");
   scanf("%d",&n);


   for(i=0;i<n;i++){

           for(j=0;j<n;j++){
            if(j==0||j==n-1||i==n-1)
                printf("*");
            else
                printf(" ");
           }
          printf("\n");
   }

}
void patternV(char ch){

      printf("enter an integer number for print V:");
      scanf("%d",&n);

     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==i)
                printf("*");
            else
                printf(" ");
        }
        for(j=0;j<n;j++){
            if(j==n-i-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
     }
}

void patternW(char ch){

          printf("enter an integer number for print W:");
      scanf("%d",&n);
      if(n%2==0)
           n++;
      mid=n/2;


     for(i=0;i<n;i++){
              for(j=0;j<n;j++){
            if(j==i)
                printf("*");
            else
                printf(" ");
          }

          for(j=0;j<n;j++){
            if(j==n-i-2&&i>=mid)
                printf("*");
            else{
                 if(j<n/2-1)
                printf(" ");

              }
        }

          for(j=0;j<n;j++){
            if(j==i-mid&&i>mid)
                printf("*");
            else{
                 if(j<n/2){
                        printf(" ");
                      }
                 }

             }


           for(j=0;j<n;j++){
            if(j==n-i-1&&j>0)
                printf("*");
            else{
                  if(i==mid&&flag==0){
                    flag++;
                    continue;
                  }
                  else{
                    printf(" ");
                  }
               }
          }

      printf("\n");

     }

}

void patternX(char ch){

        printf("enter an integer number for print X:");
      scanf("%d",&n);

     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==i||j==n-i-1)
                printf("*");
            else
                printf(" ");

        }
        printf("\n");
     }
}

void patternY(char ch){

         printf("enter an integer value to print Y:");
   scanf("%d",&n);
      if(n%2==0)
        n++;
  mid=n/2;


   for(i=0;i<n;i++){
         for(j=0;j<n;j++){
            if(j==i&&j<mid||j==n-i-1)
                printf("*");
            else
                //if(j<mid-1)
                    printf(" ");


         }
         printf("\n");
    }
}

void patternZ(char ch){
       printf("enter an integer value to print Z:");
   scanf("%d",&n);



   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
            if(i==0||i==n-1||j==n-i-1)
                printf("*");
            else
               printf(" ");
       }
       printf("\n");
   }
}

int main(){
         printf("enter # for close program");
        char ch;
    do{
            system("cls");//for clear screen
        printf("1.Enter # for close program\n2.Enter & for print all capital alphabet\n Enter an capital alphabet to print:");
        scanf("%s",&ch);
           // if(!(ch>=65&&ch<=90||ch==13))
             //    printf("invalid number");
        switch(ch){

     case 'A':
          patternA(ch);
          break;
     case 'B':
          patternB(ch);
          break;
     case 'C':
          patternC(ch);
          break;
     case 'D':
          patternD(ch);
          break;
     case 'E':
          patternE(ch);
          break;
     case 'F':
          patternF(ch);
          break;
     case 'G':
          patternG(ch);
          break;
     case 'H':
          patternH(ch);
          break;
     case 'I':
          patternI(ch);
          break;
     case 'J':
          patternJ(ch);
          break;
     case 'K':
          patternK(ch);
          break;
     case 'L':
          patternL(ch);
          break;
     case 'M':
          patternM(ch);
          break;
     case 'N':
          patternN(ch);
          break;
     case 'O':
          patternO(ch);
          break;
     case 'P':
          patternP(ch);
          break;
     case 'Q':
          patternQ(ch);
          break;
     case 'R':
          patternR(ch);
          break;

     case 'S':
          patternS(ch);
          break;
     case 'T':
          patternT(ch);
          break;
     case 'U':
          patternU(ch);
          break;
     case 'V':
          patternV(ch);
          break;

     case 'W':
          patternW(ch);
          break;
     case 'X':
          patternX(ch);
          break;
     case 'Y':
          patternY(ch);
          break;
     case 'Z':
          patternZ(ch);
          break;
     case '&':
          patternA_Z(ch);
          break;

     default:
           printf("\ninvalid character--\n");
                break;

       case '#':
            printf("EXIT PROGRAM--");
            exit(0);

        }
        getch();//for stopping screen
    }
      while(1);

   return 0;
}

