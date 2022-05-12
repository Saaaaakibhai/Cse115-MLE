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
    long long int mobile_number;
    char email[50];
    int patient_id;
    int symp1, symp2, symp3, symp4, symp5;
    int risk_value;
    char status[50];

} patient_info;

// struct declaration
patient_info patient;

// function prototype
void add_patient(int patient_no, char name_of_file[50]);
void basic_info(int id);
int risk_level();

int main()
{
    int patient_no;
    char file_name[50];
    printf("Enter Patien No: ");
    scanf("%d", &patient_no);
    fflush(stdin);
    printf("Enter File Name : ");
    scanf("%[^\n]", &file_name);
    fflush(stdin);
    add_patient(patient_no, file_name);
    return 0;
}

void add_patient(int patient_no, char name_of_file[50])
{
    printf("\n\n=== Enter Patient details below ===\n\n");

    // file open
    FILE *patient_file;
    patient_file = fopen(name_of_file, "ab+");
    if (patient_file == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }

    // input patient data
    basic_info(patient_no);
    // write student data
    fwrite(&patient, sizeof(patient), 1, patient_file);
    printf("\nPatient record added sucessfully");

    // file close
    fclose(patient_file);
}

void basic_info(int id)
{
    // Basic Patient Info
    patient.patient_id = id;
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
    printf("\n\n");

    // symptoms info
    printf("Please Enter COVID-19 Symptoms (1 (yes) or 0 (no)).\n");
    printf("Any Fever? : ");
    fflush(stdin);
    scanf("%d", &patient.symp1);
    printf("Dry Cough? : ");
    fflush(stdin);
    scanf("%d", &patient.symp2);
    printf("Loss of taste or smell? : ");
    fflush(stdin);
    scanf("%d", &patient.symp3);
    printf("Any Headache? : ");
    fflush(stdin);
    scanf("%d", &patient.symp4);
    printf("Shortness of Breath? : ");
    fflush(stdin);
    scanf("%d", &patient.symp5);

    // risk level count
    patient.risk_value = risk_level();
    if (patient.risk_value < 5)
    {
        strcpy(patient.status, "Low Risk");
    }
    else
    {
        strcpy(patient.status, "High Risk");
    }
}

int risk_level()
{
    int count = (patient.symp1 * 2) + (patient.symp2 * 2) + (patient.symp3 * 2) + (patient.symp4 * 2) + (patient.symp5 * 2);
    return count;
}
