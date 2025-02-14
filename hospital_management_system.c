#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>



typedef struct patient{
    int id;
    char pname[20];
    int age;
    char gender[10] ,address[50] , symptomes[255] , checkby[20];
    int date[10];
    
    }patient;

    typedef struct doctor{
        int docid;
        char dname[20];
        char docaddress[50] ,specialized[50];
        int date[10];

    }doc;


    void admit_patient(){

    }

    void discharge_patient(){
        
    }

    void patient_list(){
        
    }

    void available_doctor(){
        
    }

    void add_doctor(){
        
    }
    void appointment(){
    	
	}








FILE *fp;



int main(){

    int choice;
     // infinite loop in while(true) ; the loop can be countered by switch statement
     while(1){  
        system("cls");
        printf("\t\t\t\t<-------Hospital Management system------->\n\n");
        printf("\t1. Admit Patient\n");
        printf("\t2. Discharge Patient\n");
        printf("\t3. Patient List\n");
        printf("\t4. Available Doctor\n");
        printf("\t5. Add Doctor\n");
        printf("\t6. Appointment\n");
        printf("\t0. Exit\n");
        printf("\n------------------------------------------------------");
        printf("\nEnter your choice :\t");
        scanf("%d",&choice);
        while (getchar() != '\n');  // Clear input buffer


        switch (choice) {
            case 1:
                admit_patient();
                break;
            case 2:
                discharge_patient();
                break;
            case 3:
                patient_list();
                break;
            case 4:
                available_doctor();
                break;
            case 5:
                add_doctor();
                break;
            case 6:
            	appointment();
            	break;
            case 0:
                printf("Exiting program...\n");
                exit(0); 
            default:
                printf("Invalid choice! Try again.\n");
        }
        printf("\n\n\t\t Press any key to continue---");
        getchar();
     }





    return 0;
}
