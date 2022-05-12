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

} patient_info;

// Max Covid-19 Patient
int MAX_PATIENT = 100;

// patient status struct definition
typedef struct
{
    int symp1, symp2, symp3, symp4, symp5;
    int risk_value;
    char status[50];
} patient_status;

// struct declaration
patient_info patient;
patient_status status;

// function prototype
void basic_info();
void health_status();
int risk_level();

int main()
{
    basic_info();
    health_status();
    return 0;
}

void basic_info()
{
    // Basic Patient Info
    printf("Patient First Name: ");
    fflush(stdin);
    scanf("%[^\n]", &patient.first_name);
    printf("Patient Last Name: ");
    fflush(stdin);
    scanf("%[^\n]", &patient.last_name);
    printf("Gender : ");
    fflush(stdin);
    scanf("%[^\n]", &patient.gender);
    printf("Age : ");
    fflush(stdin);
    scanf("%d", &patient.age);
    printf("Mobile Number : ");
    fflush(stdin);
    scanf("%d", &patient.mobile_number);
    printf("Email : ");
    fflush(stdin);
    scanf("%[^\n]", &patient.email);
    fflush(stdin);
}
void health_status()
{
    // symptoms info
    printf("Please Enter COVID-19 Symptoms (1 (yes) or 0 (no)).\n");
    printf("Any Fever? : ");
    fflush(stdin);
    scanf("%d", &status.symp1);
    printf("Dry Cough? : ");
    fflush(stdin);
    scanf("%d", &status.symp2);
    printf("Loss of taste or smell? : ");
    fflush(stdin);
    scanf("%d", &status.symp3);
    printf("Any Headache? : ");
    fflush(stdin);
    scanf("%d", &status.symp4);
    printf("Shortness of Breath? : ");
    fflush(stdin);
    scanf("%d", &status.symp5);

    // risk level count
    status.risk_value = risk_level();
    if (status.risk_value < 5)
    {
        strcpy(status.status, "Low Risk");
    }
    else
    {
        strcpy(status.status, "High Risk");
    }

    printf("Patient Risk Level : %s", status.status);
}

int risk_level()
{
    int count = (status.symp1 * 2) + (status.symp2 * 2) + (status.symp3 * 2) + (status.symp4 * 2) + (status.symp5 * 2);
    return count;
}
