#include<stdio.h>
#include<conio.h>
#include<string.h>
FILE *f1,*f2,*f3,*f4,*f5,*f6;
int display(int m,int y)
{
    system("cls");
    int d;
    if(m==1)
    { 
            ca:
                  system("cls");                   printf("\t\t\t\t\t\t ------------------------ \n");
                         printf("\t\t\t\t\t\t|      JANUARY           |\n");
                         printf("\t\t\t\t\t\t ------------------------ \n");
                         printf("\n\t\t\t\t\t ----------------------------------------\n");
                         printf("\t\t\t\t\t|  1  |  2  |  3  |  4  |  5  |  6  |  7  |\n");
                         printf("\t\t\t\t\t -----------------------------------------\n");
                         printf("\t\t\t\t\t|  8  |  9  |  10 |  11 |  12 |  13 |  14 |\n");
                         printf("\t\t\t\t\t -----------------------------------------\n");
                         printf("\t\t\t\t\t|  15 |  16 |  17 |  18 |  19 |  20 |  21 |\n");
                         printf("\t\t\t\t\t -----------------------------------------\n");
                         printf("\t\t\t\t\t|  22 |  23 |  24 |  25 |  26 |  27 |  28 |\n");
                         printf("\t\t\t\t\t -----------------------------------------\n");
                         printf("\t\t\t\t\t|  29 |  30 |  31 |     |     |     |     |\n");
                         printf("\t\t\t\t\t -----------------------------------------\n");
                          printf("\n\n\n\tSelect your date of birth:");
                          scanf("%d",&d);
                          if(d>31||d<1)
                          {
                                       printf("\n\n\t\t\t\t\t\t\t\t\tWrong choice");
                                       getchar();
                                       getchar();
                                       goto ca;
                                       }
                         return(d);
                         }
                         else if(m==2&&y%4==0) 
                         {
                              cb:
                                               system("cls");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t\t|      FEBRUARY          |\n");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t ----------------------------------------\n");
                         printf("\t\t|  1  |  2  |  3  |  4  |  5  |  6  |  7  |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  8  |  9  |  10 |  11 |  12 |  13 |  14 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  15 |  16 |  17 |  18 |  19 |  20 |  21 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  22 |  23 |  24 |  25 |  26 |  27 |  28 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  29 |     |     |     |     |     |     |\n");
                         printf("\t\t -----------------------------------------\n");
                           printf("\t\n\nSelect your date of birth:");
                          scanf("%d",&d);
                          if(d>29||d<1)
                          {
                                       printf("\n\n\t\t\t\t\t\t\tWrong choice");
                                       getchar();
                                       getchar();
                                       goto cb;
                                       }
                         return(d);
                         }
                         else if(m==2&&y%4!=0)
                          {
                              cc:
                                              system("cls");
                               printf("\t\t\t ------------------------ \n");
                         printf("\t\t\t|      FEBRUARY          |\n");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t ----------------------------------------\n");
                         printf("\t\t|  1  |  2  |  3  |  4  |  5  |  6  |  7  |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  8  |  9  |  10 |  11 |  12 |  13 |  14 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  15 |  16 |  17 |  18 |  19 |  20 |  21 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  22 |  23 |  24 |  25 |  26 |  27 |  28 |\n");
                         printf("\t\t -----------------------------------------\n");
                           printf("\t\n\nSelect your date of birth:");
                          scanf("%d",&d);
                          if(d>28||d<1)
                          {
                                       printf("\n\n\t\t\t\t\t\tWrong choice");
                                       getchar();
                                       getchar();
                                       goto cc;
                                       }
                         return(d);
                         
                         }
                          else if(m==3) 
                         {
                               cd:
                                        system("cls");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t\t|      MARCH             |\n");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t ----------------------------------------\n");
                         printf("\t\t|  1  |  2  |  3  |  4  |  5  |  6  |  7  |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  8  |  9  |  10 |  11 |  12 |  13 |  14 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  15 |  16 |  17 |  18 |  19 |  20 |  21 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  22 |  23 |  24 |  25 |  26 |  27 |  28 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  29 |  30 |  31 |     |     |     |     |\n");
                         printf("\t\t -----------------------------------------\n");
                           printf("\t\n\nSelect your date of birth:");
                          scanf("%d",&d);
                          if(d>31||d<1)
                          {
                                       printf("\n\n\t\t\t\t\t\tWrong choice");
                                       getchar();
                                       getchar();
                                       goto cd;
                                       }
                         return(d);
                         }
                          else if(m==4) 
                         {
                               ce:
                                        system("cls");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t\t|      APRIL             |\n");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t ----------------------------------------\n");
                         printf("\t\t|  1  |  2  |  3  |  4  |  5  |  6  |  7  |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  8  |  9  |  10 |  11 |  12 |  13 |  14 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  15 |  16 |  17 |  18 |  19 |  20 |  21 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  22 |  23 |  24 |  25 |  26 |  27 |  28 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  29 |  30 |     |     |     |     |     |\n");
                         printf("\t\t -----------------------------------------\n");
                           printf("\t\n\nSelect your date of birth:");
                          scanf("%d",&d);
                          if(d>30||d<1)
                          {
                                       printf("\n\n\t\t\t\t\t\tWrong choice");
                                       getchar();
                                       getchar();
                                       goto ce;
                                       }
                                       
                         return(d);
                         }
                          else if(m==5) 
                         {
                               cf:
                                        system("cls");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t\t|      MAY               |\n");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t ----------------------------------------\n");
                         printf("\t\t|  1  |  2  |  3  |  4  |  5  |  6  |  7  |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  8  |  9  |  10 |  11 |  12 |  13 |  14 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  15 |  16 |  17 |  18 |  19 |  20 |  21 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  22 |  23 |  24 |  25 |  26 |  27 |  28 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  29 |  30 |  31 |     |     |     |     |\n");
                         printf("\t\t -----------------------------------------\n");
                           printf("\t\n\nSelect your date of birth:");
                          scanf("%d",&d);
                          if(d>31||d<1)
                          {
                                       printf("\n\n\t\t\t\t\tWrong choice");
                                       getchar();
                                       getchar();
                                       goto cf;
                                       }
                                       
                         return(d);
                         }
                          else if(m==6) 
                         {
                               cg:
                                        system("cls");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t\t|      JUNE              |\n");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t ----------------------------------------\n");
                         printf("\t\t|  1  |  2  |  3  |  4  |  5  |  6  |  7  |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  8  |  9  |  10 |  11 |  12 |  13 |  14 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  15 |  16 |  17 |  18 |  19 |  20 |  21 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  22 |  23 |  24 |  25 |  26 |  27 |  28 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  29 |  30 |     |     |     |     |     |\n");
                         printf("\t\t -----------------------------------------\n");
                           printf("\t\n\nSelect your date of birth:");
                          scanf("%d",&d);
                          if(d>30||d<1)
                          {
                                       printf("\n\n\t\t\t\t\t\tWrong choice");
                                       getchar();
                                       getchar();
                                       goto cg;
                                       }
                         return(d);
                         }
                          else if(m==7) 
                         {
                               ch:
                                        system("cls");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t\t|      JULY              |\n");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t ----------------------------------------\n");
                         printf("\t\t|  1  |  2  |  3  |  4  |  5  |  6  |  7  |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  8  |  9  |  10 |  11 |  12 |  13 |  14 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  15 |  16 |  17 |  18 |  19 |  20 |  21 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  22 |  23 |  24 |  25 |  26 |  27 |  28 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  29 |  30 |  31 |     |     |     |     |\n");
                         printf("\t\t -----------------------------------------\n");
                           printf("\t\n\nSelect your date of birth:");
                          scanf("%d",&d);
                          if(d>31||d<1)
                          {
                                       printf("\n\n\t\t\t\t\t\tWrong choice");
                                       getchar();
                                       getchar();
                                       goto ch;
                                       }
                         return(d);
                         }
                          else if(m==8) 
                         {
                               ci:
                                        system("cls");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t\t|      AUGUST            |\n");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t ----------------------------------------\n");
                         printf("\t\t|  1  |  2  |  3  |  4  |  5  |  6  |  7  |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  8  |  9  |  10 |  11 |  12 |  13 |  14 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  15 |  16 |  17 |  18 |  19 |  20 |  21 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  22 |  23 |  24 |  25 |  26 |  27 |  28 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  29 |  30 |  31 |     |     |     |     |\n");
                         printf("\t\t -----------------------------------------\n");
                           printf("\t\n\nSelect your date of birth:");
                          scanf("%d",&d);
                          if(d>31||d<1)
                          {
                                       printf("\n\n\t\t\t\t\tWrong choice");
                                       getchar();
                                       getchar();
                                       goto ci;
                                       }
                         return(d);
                         }
                          else if(m==9) 
                         {
                               cj:
                                        system("cls");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t\t|      SEPTEMBER         |\n");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t ----------------------------------------\n");
                         printf("\t\t|  1  |  2  |  3  |  4  |  5  |  6  |  7  |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  8  |  9  |  10 |  11 |  12 |  13 |  14 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  15 |  16 |  17 |  18 |  19 |  20 |  21 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  22 |  23 |  24 |  25 |  26 |  27 |  28 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  29 |  30 |     |     |     |     |     |\n");
                         printf("\t\t -----------------------------------------\n");
                           printf("\t\n\nSelect your date of birth:");
                          scanf("%d",&d);
                          if(d>30||d<1)
                          {
                                       printf("\n\n\t\t\t\t\tWrong choice");
                                       getchar();
                                       getchar();
                                       goto cj;
                                       }
                         return(d);
                         }
                          else if(m==10) 
                         {
                               ck:
                                         system("cls");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t\t|      OCTOBER           |\n");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t ----------------------------------------\n");
                         printf("\t\t|  1  |  2  |  3  |  4  |  5  |  6  |  7  |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  8  |  9  |  10 |  11 |  12 |  13 |  14 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  15 |  16 |  17 |  18 |  19 |  20 |  21 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  22 |  23 |  24 |  25 |  26 |  27 |  28 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  29 |  30 |  31 |     |     |     |     |\n");
                         printf("\t\t -----------------------------------------\n");
                           printf("\t\n\nSelect your date of birth:");
                          scanf("%d",&d);
                          if(d>31||d<1)
                          {
                                       printf("\n\n\t\t\t\t\t\tWrong choice");
                                       getchar();
                                       getchar();
                                       goto ck;
                                       }
                         return(d);
                         }
                          else if(m==11) 
                         {
                               cl:
                                         system("cls");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t\t|      NOVEMBER          |\n");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t ----------------------------------------\n");
                         printf("\t\t|  1  |  2  |  3  |  4  |  5  |  6  |  7  |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  8  |  9  |  10 |  11 |  12 |  13 |  14 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  15 |  16 |  17 |  18 |  19 |  20 |  21 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  22 |  23 |  24 |  25 |  26 |  27 |  28 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  29 |  30 |     |     |     |     |     |\n");
                         printf("\t\t -----------------------------------------\n");
                           printf("\t\n\nSelect your date of birth:");
                          scanf("%d",&d);
                          if(d>30||d<1)
                          {
                                       printf("\n\n\t\t\t\tWrong choice");
                                       getchar();
                                       getchar();
                                       goto cl;
                                       }
                         return(d);
                         }
                          else if(m==12) 
                         {
                               cm:
                                         system("cls");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t\t|      DECEMBER          |\n");
                         printf("\t\t\t ------------------------ \n");
                         printf("\t\t ----------------------------------------\n");
                         printf("\t\t|  1  |  2  |  3  |  4  |  5  |  6  |  7  |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  8  |  9  |  10 |  11 |  12 |  13 |  14 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  15 |  16 |  17 |  18 |  19 |  20 |  21 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  22 |  23 |  24 |  25 |  26 |  27 |  28 |\n");
                         printf("\t\t -----------------------------------------\n");
                         printf("\t\t|  29 |  30 |  31 |     |     |     |     |\n");
                         printf("\t\t -----------------------------------------\n");
                           printf("\t\n\nSelect your date of birth:");
                          scanf("%d",&d);
                          if(d>31||d<1)
                          {
                                       printf("\n\n\t\t\t\t\tWrong choice");
                                       getchar();
                                       getchar();
                                       goto cm;
                                       }
                         return(d);
                         }
                         
                }
                void show(int m,int d)
                {
                     
                   switch(m)
                   {
                            case 1:{
                                     printf("\n\t\t\t\tYour birth stone is GARNET");
                                     fprintf(f2,"\n\tYour birth stone is GARNET");
                                     if(d<=19)
                                     {
                                     printf("\n\t\t\t\tYour Zodiac Sign is CAPRICON");
                                     fprintf(f2,"\n\tYour Zodiac Sign is CAPRICON");
                                     }
                                     else
                                     {
                                     printf("\n\t\t\t\tYour Zodiac Sign is AQUARIUS");
                                     fprintf(f2,"\n\tYour Zodiac Sign is AQUARIUS");
                                     }
                                     break;
                                     }
                             case 2:{
                                      printf("\n\t\t\t\tYour birth stone is AMETHYST");
                                      fprintf(f2,"\n\tYour birth stone is AMETHYST");
                                      if(d<=18)
                                      {
                                      printf("\n\t\t\t\tYour Zodiac sign is AQUARIS");
                                      fprintf(f2,"\n\tYour Zodiac sign is AQUARIS");
                                      }
                                      
                                      else
                                      {
                                      printf("\n\t\t\t\tYour Zodiac sign is PISCES");
                                      fprintf(f2,"\n\tYour Zodiac sign is PISCES");
                                      }
                                      break;
                                      } 
                            case 3:{
                                     printf("\n\t\t\t\tYour Birth Stone is AQUAMARINE");
                                     fprintf(f2,"\n\tYour Birth Stone is AQUAMARINE");
                                     if(d<=20)
                                     {
                                        printf("\n\t\t\t\tYour Zodiac sign is PISCES");
                                        fprintf(f2,"\n\tYour Zodiac sign is PISCES");
                                        }
                                      else
                                      {
                                      printf("\n\t\t\t\tYour Zodiac Sign is ARIES");
                                      fprintf(f2,"\n\tYour Zodiac Sign is ARIES");
                                      }
                                      break;
                                    }
                            case 4:{
                                     printf("\n\t\t\t\tYour Birth Stone is DIAMOND");
                                     fprintf(f2,"\n\tYour Birth Stone is DIAMOND");
                                     if(d<=19)
                                     {
                                     printf("\n\t\t\t\tYour Zodiac Sign is ARIES");
                                     fprintf(f2,"\n\tYour Zodiac Sign is ARIES");
                                     }
                                     else
                                     {
                                     printf("\n\t\t\t\tYour Zodiac Sign is TAURUS");
                                     fprintf(f2,"\n\tYour Zodiac Sign is TAURUS");
                                     }
                                     break;
                                     }
                            case 5:{
                                     printf("\n\t\t\t\tYour Birth Sone is EMERALD");
                                     fprintf(f2,"\n\tYour Birth Sone is EMERALD");
                                     if(d<=20)
                                      {
                                          printf("\n\t\t\t\tYour Zodiac Sign is TAURUS");
                                          fprintf(f2,"\n\tYour Zodiac Sign is TAURUS");
                                          }
                                       else
                                       {
                                       printf("\n\t\t\t\tYour Zodiac Sign is GEMINI");
                                       fprintf(f2,"\n\tYour Zodiac Sign is GEMINI");
                                       }
                                       break;
                                       }         
                           case 6:{
                                    printf("\n\t\t\t\tYour Birth Stones are PEARL and ALEXANDRITE");
                                    fprintf(f2,"\n\tYour Birth Stones are PEARL and ALEXANDRITE");
                                    if(d<=20)
                                    {
                                      printf("\n\t\t\t\tYour Zodiac Sign is GEMINI");
                                      fprintf(f2,"\n\tYour Zodiac Sign is GEMINI");
                                      }
                                      else
                                      {
                                      printf("\n\t\t\t\tYour Zodiac Sign is CANCER");
                                      fprintf(f2,"\n\tYour Zodiac Sign is CANCER");
                                      }
                                      break;
                                      }
                            case 7:{
                                     printf("\n\t\t\t\tYour Birth Stone  is RUBY");
                                     fprintf(f2,"\n\tYour Birth Stone  is RUBY");
                                     if(d<=22)
                                     {
                                      printf("\n\t\t\t\tYour Zodiac Sign is CANCER");
                                      fprintf(f2,"\n\tYour Zodiac Sign is CANCER");
                                      }
                                      else
                                      {
                                      printf("\n\t\t\t\tYour Zodiac Sign is LEO");
                                      fprintf(f2,"\n\tYour Zodiac Sign is LEO");
                                      }
                                      break;
                                      }
                           case 8:{
                                    printf("\n\t\t\t\tYour Birth Stones are PERIDOT,SARDONYX and SPINEL");
                                    fprintf(f2,"\n\tYour Birth Stones are PERIDOT,SARDONYX and SPINEL");
                                    if(d<=22)
                                    {
                                    printf("\n\t\t\t\tYour Zodiac Sign is LEO");
                                    fprintf(f2,"\n\tYour Zodiac Sign is LEO");
                                    }
                                    else
                                    {
                                    printf("\n\t\t\t\tYour Zodiac Sign is VIRGO");
                                    fprintf(f2,"\n\tYour Zodiac Sign is VIRGO");
                                    }
                                    break;
                                    }
                          case 9:{
                                   printf("\n\t\t\t\tYour Birth Stone is SAPPHIRE");
                                   fprintf(f2,"\n\tYour Birth Stone is SAPPHIRE");
                                    if(d<=22)
                                    {
                                    printf("\n\t\t\t\tYour Zodiac Sign is VIRGO");
                                    fprintf(f2,"\n\tYour Zodiac Sign is VIRGO");
                                    }
                                    else
                                    {
                                    printf("\n\t\t\t\tYour Zodiac Sign is LIBRA");
                                    fprintf(f2,"\n\tYour Zodiac Sign is LIBRA");
                                    }
                                    break;
                                    }
                         case 10:{
                                   printf("\n\t\t\t\tYour Birth Stones are TOURMALINE and OPAL");
                                   fprintf(f2,"\n\tYour Birth Stones are TOURMALINE and OPAL");
                                   if(d<=22)
                                   {
                                     printf("\n\t\t\t\tYour Zodiac Sign is LIBRA");
                                     fprintf(f2,"\n\tYour Zodiac Sign is LIBRA");
                                     }
                                     else
                                     {
                                     printf("\n\t\t\t\tYour Zodiac Sign is SCORPIO");
                                     fprintf(f2,"\n\tYour Zodiac Sign is SCORPIO");
                                     }
                                     break;
                                     }
                          case 11:{
                                    printf("\n\t\t\t\tYour Stones are TOPAZ and CITRINE");
                                    fprintf(f2,"\n\tYour Stones are TOPAZ and CITRINE");
                                    if(d<=21)
                                    {
                                      printf("\n\t\t\t\tYour Zodiac Sign is SCORPIO");
                                      fprintf(f2,"\n\tYour Zodiac Sign is SCORPIO");
                                      }
                                      else
                                      {
                                      printf("\n\t\t\t\tYour Zodiac Sign is SAGITTARIUS");
                                      fprintf(f2,"\n\tYour Zodiac Sign is SAGITTARIUS");
                                      }
                                      break;
                                      }
                         case 12:{
                                   printf("\n\t\t\t\t Your Birth Stones are TANZANITE,ZIRCON and TURQUOISE");
                                   fprintf(f2,"\n\t Your Birth Stones are TANZANITE,ZIRCON and TURQUOISE");
                                   if(d<=21)
                                   {
                                   printf("\n\t\t\t\tYour Zodiac Sign is SAGITTARIUS");
                                   fprintf(f2,"\n\tYour Zodiac Sign is SAGITTARIUS");
                                   }
                                   else
                                   {
                                   printf("\n\t\t\t\tYour ZOdiac Sign is CAPRICON");
                                   fprintf(f2,"\n\tYour ZOdiac Sign is CAPRICON");
                                   }
                                   break;
                                   }
                                   }
                                                                                   
         }
         void about()
         {
              int i;
              z:
         system("cls");
                       printf("\n\n\n\n");
                     
                   f3=fopen("about.txt","r");
                   fseek(f3,0,SEEK_SET);
                   f4=fopen("about1.txt","r");
                   fseek(f4,0,SEEK_SET);
                  char ch;
              fscanf(f3,"%c",&ch);
              while(1)
              {
                      if(feof(f3))
                      break;
                      else
                      printf("%c",ch);
                      fscanf(f3,"%c",&ch);
                    }
                    getchar();
                    system("cls");
                    fscanf(f4,"%c",&ch);
                    printf("\n\n\n");
                     while(1)
              {
                      if(feof(f4))
                      break;
                      else
                      printf("%c",ch);
                      fscanf(f4,"%c",&ch);
                    }
                    printf("\n\n\n\n\t\t\t\t\tENTER 1 TO GO BACK");
                    printf("\n\t\t\t\t\tEnter 2 For Main Menu");
                    printf("\n\n\t\t\t\t\tEnter Your Choice: ");
                    scanf("%d",&i);
                    getchar();
                    if(i==1)
                    {
                    goto z;
                    system("cls");
                     }
                    
                    }
                    
                 
     void main()
     {
          
          int m,d,n,i,j,y,k=0,l=0,x=0;
          system("color 8b");
          sleep(300);
          printf("\n\n\n\n\n\n\n\n\t\t\t\t\t ----------------------------------------------------------------------\n");
          sleep(300);
          printf("\t\t\t\t\t|                                                                      |\n");
          //sleep(1000);
          printf("\t\t\t\t\t|                                                                      |\n");
          sleep(700);
          printf("\t\t\t\t\t|                                                                      |\n");
          //sleep(
          printf("\t\t\t\t\t|                                                                      |\n");
          sleep(300);
          printf("\t\t\t\t\t|                               WELCOME                                |\n");
          printf("\t\t\t\t\t|                                                                      |\n");
          sleep(300);
          printf("\t\t\t\t\t|                                                                      |\n");
          printf("\t\t\t\t\t|                                                                      |\n");
          sleep(300);
          printf("\t\t\t\t\t|                                  TO                                  |\n");
          printf("\t\t\t\t\t|                                                                      |\n");
          printf("\t\t\t\t\t|                                                                      |\n");
          sleep(300);
          printf("\t\t\t\t\t|                                                                      |\n");
          printf("\t\t\t\t\t|                               ASTROLOGER                             |\n");
          printf("\t\t\t\t\t|                                                                      |\n");
          printf("\t\t\t\t\t|                                                                      |\n");
          printf("\t\t\t\t\t|                                                                      |\n");
          sleep(300);
          printf("\t\t\t\t\t|                              2017");
          sleep(200);
          printf(" - ");
          sleep(200);
          printf(" 2018                            |\n");
          
          printf("\t\t\t\t\t|                                                                      |\n");
          sleep(300);
          printf("\t\t\t\t\t|                                                                      |\n");
          printf("\t\t\t\t\t|                                                                      |\n");
          printf("\t\t\t\t\t ---------------------------------------------------------------------- \n");
          getchar();
          
          char name[30],e[30];
          f:
               system("cls");
               system("color 0f");
          printf("\n\n\n\n\t\t1.To go for Astrologer\n\n");
          printf("\n\t\t2.To see previous results\n\n");
          printf("\n\t\t3.To see about Birthstones\n\n");
          printf("\n\t\t4.To see about Zodiac Signs\n\n");
          printf("\n\t\t5.Help\n\n");
          printf("\n\t\t6.EXIT\n\n");
          printf("\n\n\t\t ENTER YOUR CHOICE: ");
          scanf("%d",&i);
          getchar();
         
          
          if(i==1)
          {
             a:
                 b: 
                  f2=fopen("file.txt","w");
                  fseek(f2,0,SEEK_END);
                  system("cls");
               
          printf("\t\t\t\t\t\t\t------------------------------------------------\n");
          printf("\t\t\t\t\t\t\t|           ASTROLOGER                         |\n");
          printf("\t\t\t\t\t\t\t------------------------------------------------\n");
          printf("\n\n\n\t\t------------------------------------------------\n");
          printf("\t\t|  NAME  |  ");
          fprintf(f2,"\n\n\nName:");                                     
          gets(name);
          fprintf(f2,"%s",name);                                                     
          printf("\n\t\t--------------------------------------------------\n");
          printf("\t\t| Birth Month(in number) |  ");
          fprintf(f2,"\nMonth of Birth:");
          scanf("%d",&m);
          if(m>12||m<1)
          {
                       printf("\n\n\t\t\t\t\t\t\tWrong Month");
                       getch();
            za:
                       system("cls");
                       printf("\t\t\t\t\t\t\t------------------------------------------------\n");
          printf("\t\t\t\t\t\t\t|           ASTROLOGER                         |\n");
          printf("\t\t\t\t\t\t\t------------------------------------------------\n");
          printf("\n\n\n\t\t------------------------------------------------\n");
          printf("\t\t|  NAME  |  ");                                    
          puts(name);                                                
          printf("\n\t\t--------------------------------------------------\n");
          printf("\t\t| Birth Month(in number) |  ");
          scanf("%d",&m);
          if(m>12||m<1)
          {
                       printf("\n\n\t\t\t\t\t\t\tWrong Month");
                       getchar();
                       getchar();
                       goto za;           
          }
          }
          fprintf(f2,"%d",m);
          getchar();
          printf("\n\n\t\t---------------------------------------------------\n");
          printf("\t\t| Year of Birth |  ");
          scanf("%d",&y);
          fprintf(f2,"\nYear Of Birth:");
          fprintf(f2,"%d",y);
          getchar();
          printf("\n\t\t--------------------------------------------------\n");
          printf("\n\t\t| E-MAIL Address(Optional) |  ");
          gets(e);
          printf("\n\t\t---------------------------------------------------\n");
          //printf("%s",e);
          //int z=strlen(e);
          n=strlen(e);
          if(e[n-1]!='m'||e[n-2]!='o'||e[n-3]!='c'||e[n-4]!='.')
          {
          k++;
          }
          if(e[n-1]!='n'||e[n-2]!='i')
          l++;
          
          if(n==0||l==0||k==0);
          else
          {
              zb:
              n=0;l=0;k=0;
              printf("\t\t\t\t\t WRONG E-MAIL ADDRESS");
              printf("\a");
              getchar();
              system("cls");
               printf("\t\t\t\t\t\t\t------------------------------------------------\n");
                         printf("\t\t\t\t\t\t\t|           ASTROLOGER                         |\n");
          printf("\t\t\t\t\t\t\t------------------------------------------------\n");
          printf("\n\n\n\t\t------------------------------------------------\n");
          printf("\t\t|  NAME  |  ");                                    
          puts(name);                                                
          printf("\n\t\t--------------------------------------------------\n");
          printf("\t\t| Birth Month(in number) |  ");
          printf("%d",m);
          printf("\n\n\t\t---------------------------------------------------\n");
          printf("\t\t| Year of Birth |  ");
          printf("%d",y);
          printf("\n\t\t--------------------------------------------------\n");
          printf("\n\t\t| E-MAIL Address(Optional) |  ");
          gets(e);
          printf("\n\t\t---------------------------------------------------\n");
           n=strlen(e);
          if(e[n-1]!='m'||e[n-2]!='o'||e[n-3]!='c'||e[n-4]!='.')
          {
          k++;
          }
          if(e[n-1]!='n'||e[n-2]!='i')
          l++;
          
          if(n==0||l==0||k==0);
          else
              goto zb;
              }
          d=display(m,y);
          fprintf(f2,"\nDate of Birth:");
          getchar();
          fprintf(f2,"%d",d);
          show(m,d);
          getchar();
          system("color 8f");
          goto f;
           
         // fprintf(f2,";");
          
          }
          if(i==2)
          {
                  system("cls");
                  //system("color 0b");
                   f1=fopen("file.txt","r");
                   fseek(f1,0,SEEK_SET);
                  char ch;
              fscanf(f1,"%c",&ch);
              while(1)
              {
                      if(feof(f1))
                      break;
                      else
                      printf("%c",ch);
                      fscanf(f1,"%c",&ch);
                    }
                   getchar();
                   goto f;   
                  }
                if(i==3)
                {
                        //system("color 8f");
                about();
                goto f;
                }
                if(i==6)
                {
                        system("cls");
                        system("color 8b");
                        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t***********************************************************************\n");
                        printf("\t\t\t\t\t\t*                                                                     *\n");
                        printf("\t\t\t\t\t\t*                              THANK                                  *\n");
                        printf("\t\t\t\t\t\t*                                                                     *\n");
                        printf("\t\t\t\t\t\t*                               YOU                                   *\n");
                        printf("\t\t\t\t\t\t*                                                                     *\n");
                        printf("\t\t\t\t\t\t*                               FOR                                   *\n");
                        printf("\t\t\t\t\t\t*                                                                     *\n");
                        printf("\t\t\t\t\t\t*                              USING                                  *\n");
                        printf("\t\t\t\t\t\t*                                                                     *\n");
                        printf("\t\t\t\t\t\t*                            ASTROLOGER                               *\n");
                        printf("\t\t\t\t\t\t*                                                                     *\n");
                        printf("\t\t\t\t\t\t***********************************************************************\n");
                                                getchar();
                exit(1);
                }
                if(i==5)
                {
                        system("cls");
                        printf("\n\n\n\n\n");
                        printf("\tIf user press 1\n");
                        printf("\t*User will be forwarded to astrologer than user first needs to register himself.\n");
                        printf("\t*By giving their name, date of birth and E-Mail address.\n");
                        printf("\t*After that user will get know about his Birthstone And Zodiac Sign.\n\n\n");
                        printf("\tIf user press 2\n");
                        printf("\t*User will get to know about previous registered user.\n\n\n");
                        printf("\tIf user press 3\n");
                        printf("\t*User will get to know about lucky stones.\n\n\n");
                        printf("\tIf user press 4\n");
                        printf("\t*User Will get to know about Zodiac Sign.\n\n\n");
                        printf("\tIf user press 6\n");
                        printf("\t*User immidiately exit from Program");
                        getchar();
                        goto f;
                        }
                        if(i==4)
                        {
                                z:
                                system("cls");
                                //system("color 8f");
                                printf("\n\n\n");
                                char ch;
                                f5=fopen("about2.txt","r");
                                f6=fopen("about4.txt","r");
                                fscanf(f5,"%c",&ch);
                                while(1)
                                {
                                        if(feof(f5))
                                        break;
                                        else
                                        {
                                            printf("%c",ch);
                                            fscanf(f5,"%c",&ch);
                                            }
                                            }
                                            getchar();
                                            system("cls");
                                            printf("\n\n\n");
                                            while(1)
                                            {
                                                    if(feof(f6))
                                                    break;
                                                    else
                                                    {
                                                        printf("%c",ch);
                                                        fscanf(f6,"%c",&ch);
                                                        }
                                                        }
                                                        
                                                         printf("\n\n\n\n\t\t\t\t\tENTER 1 TO GO BACK");
                    printf("\n\t\t\t\t\tEnter 2 For Main Menu");
                    printf("\n\n\t\t\t\t\tEnter Your Choice: ");
                    scanf("%d",&i);
                    getchar();
                    if(i==1)
                    goto z;
                    else
                    goto f;
                                                        }  
          
          getch();
          }
     
     
     
