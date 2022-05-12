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
void search_patient(int num_of_patient, char name_of_file[50]);
int intcmp(int a, int b);

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
    search_patient(patient_no, file_name);
    return 0;
}

int intcmp(int a, int b)
{
    if (a == b)
        return 0;
    return 1;
}

void search_patient(int num_of_patient, char name_of_file[50])
{
    // file open
    FILE *fp;
    fp = fopen(name_of_file, "rb");

    // check student id
    int found = 0;
    while (fread(&patient, sizeof(patient), 1, fp) == 1)
    {
        if (intcmp(num_of_patient, patient.patient_id) == 0)
        {
            found = 1;
            break;
        }
    }
    // if id found in our database
    if (found == 1)
    {
        printf("\n=== patient Record Found ===\n\n");
        printf("Patien Name : %s %s\n", patient.first_name, patient.last_name);
        printf("Patient Age : %d\n", patient.age);
        printf("Gender : %s\n", patient.gender);
        printf("Phone Number : %d\n", patient.mobile_number);
        printf("Email : %s\n", patient.email);
        printf("Health Status : %s\n", patient.status);
    }
    // if id not found in our database
    else
    {
        printf("Sorry, No Patient Record Found");
    }

    // file close
    fclose(fp);
}
