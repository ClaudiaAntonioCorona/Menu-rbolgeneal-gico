#include <conio.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int opcion;
   
    do
    {
    	printf("\t\t ***** ************************************* ***** \n");
    	printf("\t\t *** *** BIENVENIDO A MI ARBOL GENEALOGICO *** *** \n");
    	printf("\t\t ***** ************************************* ***** \n");
        
        printf( "\n   1. Bisabuelos" );
        printf( "\n   2. Abuelos");
        printf( "\n   3. Tios");
        printf( "\n   4. Primos");
        printf( "\n   5. Padres");
        printf( "\n   6. Hijos");
        
        printf( "\n   7. Salir." );
        printf( "\n\n   Introduzca opcion (1-7): ");

        scanf( "%d", &opcion );

        

        switch ( opcion )
        {
           
            case 1: printf( "\n BISABUELOS\n");
            
            printf( "\n BISABUELOS MATERNOS");
            printf("\n *ISABEL GARCIA");
            printf("\n *EVODIO HIDALGO\n");
             printf( "\n BISABUELOS PATERNOS");
              printf( "\n ELENA DEL ANGEL\n");
                    break;

            case 2: printf( "Abuelos\n");
                    printf( " ABUELOS PATERNOS\n");
                    printf( "* Martina del Angel Rojas\n");
                    printf( "* Tranqulino Antonio Hernandez\n");
                    printf( " ABUELOS MATERNOS\n");
                    printf( "* NATALIA HIDALGO GARCIA\n");
                    printf( "* JESUS CORONA RAMIREZ \n");
                    
                    break;
                    
             case 3: printf( "\ntios");
              printf( "\n TIOS PATERNOS\n");
              printf( "* BONIFACIO ANTONIO DEL ANGEL\n");
              printf( "* CIRA ANTONIO DEL ANGEL\n");
              printf( "* ROSA ANTONIO DEL ANGEL\n");
            printf("\n TIOS MATERNOS\n");
            printf( "* JESUS CORONA HIDALGO\n");
           printf( "* JUANA CORONA HIDALGO\n");
                    break;
                     case 4:  printf("\n PRIMOS\n");
            printf("\n ERIKA HERNANDEZ ANTONIO");
                   printf( "\n ESMERALDA HERNANDEZ ANTONIO");
                   printf("\n RAQUEL HERNANDEZ ANTONIO \n");
                   printf( "\n EVER HERNANDEZ ANTONIO");
                   printf( "\n EDUARDO ANTONIO DEL ANGEL\n");
                    break;

              case 5: printf( "PADRES\n");
                      printf( "* PAPA\n");
                      printf( "* ISAIAS ANTONIO DEL ANGEL\n");
                      
                      printf( "* MAMA\n");
                      printf( "* ELIA CORONA HIDALGO\n");
                    
                     
                    break;
              case 6: printf( " HIJOS\n");
              printf( " * HERMANO\n");
              printf( " * ISAIAS ANTONIO CORONA.\n");
              printf( " * YO\n");
              printf( " * CLAUDIA ANTONIO CORONA.\n");
					break;  
       
                     
                    						        
					      
        
         }

       

    } while ( opcion != 7 );
    
printf( "Bye :)\n");
    return 0;
}



