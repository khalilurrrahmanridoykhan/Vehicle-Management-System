
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void new_pass();
void insert_vehicle();
void delete_vehicle();
void search_vehicle();
void vehicle_info();
void update_pass(char a[], char b[]);
        struct vehicle_infor {

        char veh_id[50];
        char veh_name[50];
        char veh_man_name[50];
        char veh_man_name_date[50];


    }inseat[50];
int listvaue =0;
int main(){

    int choice = 0;


    char username[50];
    char pass[50];
    printf("Enter your UserName: ");
    scanf("%s", &username);

    printf("Enter your PassWord: ");
    scanf("%s", &pass);




    while(choice!=6){

        printf("\n\n*********Main Menu*********\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("\n1.Insert Vehicle\n2.delete\n3. Search\n4. View\n5. update Pass\n6.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);

        switch(choice){

            case 1:
            int add;

            insert_vehicle();
             system("cls");
            break;
            case 2:
            vehicle_info();
             system("cls");
            break;
            case 3:
            search_vehicle();
             system("cls");
            break;
            case 4:
            update_pass(username, pass);
             system("cls");
            break;

            case 6:
            exit(0);
            system("cls");

        }

    }



    return 0;

}


void insert_vehicle(){

    int add;
printf("How Meny Vehicle info you want to add: ");
            scanf("%d", &add);



    for(int i=1;  i<=add; i++){

    printf("\t\tENTER VEHICLE ID NO : ");
    scanf("%s", &inseat[i].veh_id);
    printf("\t\tENTER VEHICLE NAME : ");
    scanf("%s", &inseat[i].veh_name);
    printf("\t\tENTER VEHICLE MANUFACTURER NAME : ");
    scanf("%s", &inseat[i].veh_man_name);
    printf("\t\tENTER VEHICLE ISSUE DATE : ");
    scanf("%s", &inseat[i].veh_man_name_date);

}

listvaue = add;

}

void vehicle_info(){

        for(int i=1;  i<=listvaue; i++){

        printf("Id: %s\n", &inseat[i].veh_id);
        printf("Id: %s\n", &inseat[i].veh_name);
        printf("Id: %s\n", &inseat[i].veh_man_name);
        printf("Id: %s\n", &inseat[i].veh_man_name_date);
        printf("\n");

        }

}

void search_vehicle(){

     char id[50];
     printf("\nEnter Id to be Searched : ");
     scanf("%s",&id);

     int found = 0;

     for(int i=1; i<=listvaue; i++){

        if(strcmp(inseat[i].veh_name,id)==1){

            printf("Vehile Id: %s\n", inseat[i].veh_id);
            printf("Vehile Name: %s\n", inseat[i].veh_name);
            printf("Vehile Man: %s\n", inseat[i].veh_man_name);
            printf("Vehile date: %s", inseat[i].veh_man_name_date);
            found ++;
        }

     }


        if (found==0){

            printf("Not FOund!");
        }
}

void update_pass(char usser[],char pass[]){

    char new_user[50], new_pass[50];
    char new_user1[50], new_pass1[50];


    printf("Enter your New UserName: ");
    scanf("%s", new_user);
    printf("\nEnter your New PassWord: ");
    scanf("%s", new_pass);

    printf("\nLogin again: \n");

    printf("Enter your UserName: ");
    scanf("%s", new_user1);

    if(strcmp(new_user,new_user1)==0 && strcmp(new_pass,new_pass1)==0){

        printf("Loing susses!");
    }else{
        printf("Wrong Password!");
        exit(0);
    }



}






