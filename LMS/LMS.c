#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct library{
    char author[50];
    char bookName[50];
    int pages;
    float price;

};
struct student{
    char st_name[30];
    int id;
    char book[100];
};

int main(){
    struct library l[100];
    struct student s[100];
    char ath_name[50];
    char bk_name[50];
    char std[50];
    int i,j,k,count=0,num=0;
    i=j=count;
    k=num;
    //Heading of LMS
    printf("\n\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    printf("\n\t\t        ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~");
    printf("\n\t\t        ~                 WELCOME                   ~");
    printf("\n\t\t        ~                   TO                      ~");
    printf("\n\t\t        ~                 LIBRARY                   ~");
    printf("\n\t\t        ~               MANAGEMENT                  ~");
    printf("\n\t\t        ~                 SYSTEM                    ~");
    printf("\n\t\t        ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~");
    printf("\n\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    //add admin portal
    char username[]="meclibrary";
    char password[]="librmec";
    int flag=0;
    printf("Enter your username\n");
    scanf("%s",username);
    if(strcmp(username,"meclibrary")==0)
    {
        printf("Enter the password\n");
        scanf("%s",password);
        if(strcmp(password,"librmec")==0)
        {
            printf("Password correct...\n");
            printf("Login successful...\n");
            printf("\n");
            printf("\n");
            
        }
        else
        {
            printf("Incorrect password\n");
            printf("Try again\n");
            flag++;
        }
    }
    else
    {
        printf("Incorrect username\n");
        printf("Try again\n");
        flag++;
    }
    //end of admin portal
    //checkpoint
    if(flag!=0){
        printf("You have entered wrong username or password contact admin for assistance\n");
        exit(0);
    }

    while(j!=8){
        printf("To add new books enter 1\n");
        printf("To get all books details enter 2\n");
        printf("To get books by specific author enter 3\n");
        printf("To get details of specific book  enter 4\n");
        printf("To get total number of books enter 5\n");
        printf("To checkout a book enter 6\n");
        printf("To add a new student enter 7\n");
        printf("To exit enter 8\n");
        printf("Enter your response = ");
        scanf("%d",&j);
        switch(j){
            //to add book
            case 1:
            printf("Enter book name = ");
            scanf("%s",l[i].bookName);
            printf("ENter author name = ");
            scanf("%s",l[i].author);
            printf("Enter number of pages = ");
            scanf("%d",&l[i].pages);
            printf("Enter price = ");
            scanf("%f",&l[i].price);
            count++;
            break;
            //to get all details of all books
            case 2:
            for(i=0;i<count;i++){
                printf("%s\t %s\t %d\t %f\t",l[i].author,l[i].bookName,l[i].pages,l[i].price);
                printf("\n");
                printf("****************************************");
                printf("\n");

            }
            if(count==0){
                printf("ERROR PIDICHU MONE!!!!");
            }
            break;
            //to search details with author
            case 3:
            printf("Enter name of author = ");
            scanf("%s",ath_name);
            for(i=0;i<count;i++){
                if (strcmp(ath_name,l[i].author)==0){
                    printf("%s\t %s\t %d\t %f\t",l[i].author,l[i].bookName,l[i].pages,l[i].price);
                }
            }
            if(count==0){
                printf("ERROR PIDICHU MONE!!!!");
            }
            break;
            //to find book details with book name
            case 4:
            printf("ENter name of book");
            scanf("%s",bk_name);
            for(i=0;i<count;i++){
                if(strcmp(bk_name,l[i].bookName)==0){
                    printf("%s\t %s\t %d\t %f\t",l[i].author,l[i].bookName,l[i].pages,l[i].price);
                }
            }
            if(count==0){
                printf("ERROR ADICHU MONE!!");
            }
            break;
            //to find total number of books
            case 5:
            printf("THe total number of books are:%d\n",count);
            break;
            //to checkout a book
            case 6:
            printf("Enter name of student = ");
            scanf("%s",std);
            for(int k=0;k<num;k++){
                if(strcmp(std,s[k].st_name)==0){
                    printf("Enter book name = ");
                    scanf("%s",s[k].book);
                    printf("\n");
                    printf("Enjoy your book!");
                }
                else{
                    // verifying whether the student is enrolled in the databse for the day
                    printf("Sorry the student you have entered is not found in database\n");
                }
            }
            if(num==0){
                printf("ERROR ADICHU MONE!!!!\n");
            }
            break;
            //to add a new student
            case 7:
            printf("Enter name of new student = ");
            scanf("%s",s[k].st_name);
            s[k].id=100+k;
            num++;
            printf("Unique ID for student generated = %d\n",s[k].id);
            break;
            //to exit the process and all data will be lost
            case 8:
            exit(0);

        

        }
        
    }
    
    return 0;
}
