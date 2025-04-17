#include<stdio.h>
struct employee{
    char name[20];
    int age;
    char jobtitle[20];
    char department[20];
    float salary;
    char add[100];
};
void input_employee(struct employee *p){
    printf("enter employee name:");
    fgets(p->name,sizeof(p->name),stdin);
    printf("enter employee age:");
    getchar();
    scanf("%d",&p->age);
    printf("enter employee job title:");
    getchar();
    fgets(p->jobtitle,sizeof(p->jobtitle),stdin);
    printf("enter employee salary:");
    scanf("%f",&p->salary);
    printf("enter employee department:");
    scanf("%s",&p->department);
    printf("enter employee address:");
    getchar();
    fgets(p->add,sizeof(p->add),stdin);

}
void print_employee(struct employee *p){
    printf("name=%s",p->name);
    printf(" Age=%d",p->age);
    printf(" jobtitle=%s",p->jobtitle);
    printf(" salary=%.2f",p->salary);
    printf(" department=%s",p->department);
    printf("\naddress=%s",p->add);
}
int main(){

    struct employee e;
    struct employee *p=&e;
    input_employee(p);
    print_employee(p);

}