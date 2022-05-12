#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// patient struct definition

typedef struct
{
    char first_name[50];
    char last_name[50];
    char gender[10];
    int age;
    int mobile_number;
    char email[50];
    int patient_id;
    int symp1, symp2, symp3, symp4, symp5;
    int risk_value;
    char status[50];

} patient_info;

// struct declaration
patient_info patient[100], p;

// function prototype
void add_patient(int patient_no);
void basic_info(int patient_num);
int risk_level(int i);
void sort_patient();

int main()
{
    int patient_num;
    printf("How many patient info do you want to store : ");
    scanf("%d", &patient_num);
    add_patient(patient_num);
    sort_patient(patient_num);
    return 0;
}

void add_patient(int patient_no)
{
    printf("\n\n=== Enter Patient details below ===\n\n");
    // input patient data
    basic_info(patient_no);
}

void basic_info(int patient_num)
{
    for (int i = 0; i < patient_num; i++)
    {
        // Basic Patient Info
        printf("Patient First Name: ");
        fflush(stdin);
        scanf("%[^\n]", &patient[i].first_name);
        printf("Patient Last Name: ");
        fflush(stdin);
        scanf("%[^\n]", &patient[i].last_name);
        printf("Gender : ");
        fflush(stdin);
        scanf("%[^\n]", &patient[i].gender);
        printf("Age : ");
        fflush(stdin);
        scanf("%d", &patient[i].age);
        printf("Mobile Number : ");
        fflush(stdin);
        scanf("%d", &patient[i].mobile_number);
        printf("Email : ");
        fflush(stdin);
        scanf("%[^\n]", &patient[i].email);
        fflush(stdin);
        printf("\n");

        // symptoms info
        printf("Please Enter COVID-19 Symptoms (1 (yes) or 0 (no)).\n");
        printf("Any Fever? : ");
        fflush(stdin);
        scanf("%d", &patient[i].symp1);
        printf("Dry Cough? : ");
        fflush(stdin);
        scanf("%d", &patient[i].symp2);
        printf("Loss of taste or smell? : ");
        fflush(stdin);
        scanf("%d", &patient[i].symp3);
        printf("Any Headache? : ");
        fflush(stdin);
        scanf("%d", &patient[i].symp4);
        printf("Shortness of Breath? : ");
        fflush(stdin);
        scanf("%d", &patient[i].symp5);
        fflush(stdin);
        patient[i].risk_value = risk_level(i);
        printf("\n======================\n");
    }
}

int risk_level(int i)
{
    int count = (patient[i].symp1 * 2) + (patient[i].symp2 * 2) + (patient[i].symp3 * 2) + (patient[i].symp4 * 2) + (patient[i].symp5 * 2);
    return count;
}

void sort_patient(int patient_num)
{
    for (int i = 0; i < patient_num; i++)
    {
        for (int j = 0; j < patient_num - 1; j++)
        {
            if (patient[j].risk_value < patient[j + 1].risk_value)
            {
                p = patient[j];
                patient[j] = patient[j + 1];
                patient[j + 1] = p;
            }
        }
    }
    printf("\n== Patient Risk Level highest to lowest ==\n");
    printf("\nName\t\t\tPatient Status\n");
    printf("-------------------------------------------\n");
    for (int i = 0; i < patient_num; i++)
    {
        printf("%s %s\t\t\t%d\n", patient[i].first_name, patient[i].last_name, patient[i].risk_value);
    }
}