#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define PHONE_SEQ_NUM_FILE ("E:\\phoneSeqNum.dat")
#define SMARTPHONE_STR_SIZE (50)
typedef struct
{
   int phoneID; // Each Phone Have Must Unique ID
   int price,ramMemory,gpuMemory;
   int userPhoneNo;
   char userName[SMARTPHONE_STR_SIZE],userCountry[SMARTPHONE_STR_SIZE],phoneName[SMARTPHONE_STR_SIZE];
   float cpuSpeed;
}
SmartPhoneType;

typedef SmartPhoneType _TSmartPhone;
typedef _TSmartPhone * TSmartPhone;

#define SMART_PHONE_SIZE (sizeof(_TSmartPhone))

SmartPhone_Parse(TSmartPhone p, char * phoneRecBuffCSV)
{

	 p->phoneID = atoi(strtok(phoneRecBuffCSV,","));

	 strcpy(p->phoneName,strtok(NULL,","));

	 p->price = atoi(strtok(NULL,","));

	 p->ramMemory = atoi(strtok(NULL,","));

	 p->cpuSpeed = atof(strtok(NULL,","));

	 p->gpuMemory = atoi(strtok(NULL,","));

	 strcpy(p->userName,strtok(NULL,","));

	 p->userPhoneNo = atoi(strtok(NULL,","));

	 strcpy(p->userCountry,strtok(NULL,","));


     /* replaces the newline with void(null) terminator */

	 int strLen = strlen(p->userCountry);

	 p->userCountry[strLen-1]=0;

}
     SmartPhone_SerializeToCSV(TSmartPhone p, char * phoneRecBuffCSV)
{

	 sprintf(phoneRecBuffCSV,"%d,%s,%d,%d,%6.2f,%d,%s,%d,%s\n",p->phoneID,p->phoneName,p->price,p->ramMemory,p->cpuSpeed,p->gpuMemory,p->userName,p->userPhoneNo,p->userCountry);

}

void SmartPhone_Output(TSmartPhone p)

{

	printf("-------------------------------\n");

	printf(" PhoneID = %d \n",p->phoneID);

	printf(" Phone Name :>%s< \n ",p->phoneName);

	printf(" Phone Price = %d \n",p->price);

	printf(" Phone Memory = %d \n",p->ramMemory);

	printf(" Cpu Speed = %6.2lf \n",p->cpuSpeed);

    printf(" Gpu Memory = %d \n",p->gpuMemory);

	printf(" Username:>%s<\n",p->userName);

	printf(" User Phone # = %d \n",p->userPhoneNo);

	printf(" User Country :>%s< \n",p->userCountry);
}

void printPhoneInfo(SmartPhoneType phoneType)

{

	 SmartPhone_Output(&phoneType);

}

typedef struct _TPhoneDB

{

	TSmartPhone phones;

	int count;

    int phoneSeqNum;



} * TPhoneDB;

#define PHONE_DB_SIZE (sizeof(struct _TPhoneDB))

/* # is use for Phone Record,This Record Rearrange By Spaces/Tabs and Used seq# for Last phoneID */
/* Phone Record #1
   Phone Record #2
   .
   .
   .
   Phone Record #N
*/
int ReadPhoneFile(TPhoneDB phoneDB, char * filename)

{
	 int iReturn=0;
	 char inbuff[255];
	 int iLoop;
	 int N;
	 FILE  * fptr = fopen(filename,"r");
	 if (fptr!=NULL)
	 {

	 	//reads the # of phone records and the last seq#; then eats the newline

	 	 fscanf(fptr,"%d %d",&N,&phoneDB->phoneSeqNum);

		 phoneDB->count = N;

	 	 fgets(inbuff,255,fptr);

	 	 printf(" # of phone recs = %d :  seq # = %d \n",phoneDB->count,phoneDB->phoneSeqNum);

	 	 //allocates the array and reads the phone records

	 	 phoneDB->phones = (TSmartPhone) malloc(N * SMART_PHONE_SIZE);



	 	 for (iLoop=0; iLoop<N; iLoop++)

	 	 {

	 	 	//reads and parses

	 	 	fgets(inbuff,255,fptr);  //printf("inbuff>%s<\n",inbuff);

	 	 	SmartPhone_Parse(&phoneDB->phones[iLoop],inbuff);

	 	 	printf(" incoming....  \n"); SmartPhone_Output(&phoneDB->phones[iLoop]);

		  }

	 	fclose(fptr);

	 }

	 else

	 {

	 	iReturn = -1;

	 }

	return(iReturn);

}

void PhoneDB_Destroy(TPhoneDB phoneDB)

{

   if (phoneDB->phones!=NULL)

   {

      free(phoneDB->phones);

	  phoneDB->phones=NULL;

   }

   phoneDB->count = phoneDB->phoneSeqNum=0;

}

int WritePhoneFile(TPhoneDB phoneDB, char * filename)

{

	int iReturn=0;
	int iLoop;
	char outbuff[255];
	FILE * fptr = fopen(filename,"w");
    if (fptr!=NULL)
	{

		fprintf(fptr,"%d %d \n",phoneDB->count,phoneDB->phoneSeqNum);
		for (iLoop=0; iLoop<phoneDB->count; iLoop++)

		{

			SmartPhone_SerializeToCSV(&phoneDB->phones[iLoop],outbuff);
			fprintf(fptr,outbuff);

		}
	}

	else

	{

		iReturn=-1;

	}

	return(iReturn);

}

void getHighestPricePhone ( SmartPhoneType mobileList[], int size, SmartPhoneType *highestPricePhone)

{
	int indexOfMaxPos=0;
	int maxPrice=mobileList[0].price;
	int iLoop;
	for (iLoop=0; iLoop<size; iLoop++)
	{

	    if (mobileList[iLoop].price>maxPrice)

		{

		    indexOfMaxPos = iLoop;
			maxPrice = mobileList[iLoop].price;

		}

	}

	memcpy(highestPricePhone,&mobileList[indexOfMaxPos],SMART_PHONE_SIZE);

}

void SmartPhone_Input(TSmartPhone phone)

{

   printf("Please input the phone name :>");

   scanf("%s",phone->phoneName);

   printf("Please input the phone price :>");

   scanf("%d",&phone->price);

   printf("Please input the ram memory :>");

   scanf("%d",&phone->ramMemory);

   printf("Please input the cpu speed :>");

   scanf("%f",&phone->cpuSpeed);

   printf("Please input the gpu memory :>");

   scanf("%d",&phone->gpuMemory);

   printf("Please input the username :>");

   scanf("%s",phone->userName);

   printf("Please input the # :>");

   scanf("%d",&phone->userPhoneNo);

   printf("Please input the country :>");

   scanf("%s",phone->userCountry);
}

void My5Phones(TPhoneDB phoneDB)

{

	int iLoop=0;

	phoneDB->count=phoneDB->phoneSeqNum=5;

	phoneDB->phones=(TSmartPhone)malloc(5*SMART_PHONE_SIZE);

	for (iLoop=0; iLoop<5; iLoop++)

	{

       phoneDB->phones[iLoop].phoneID=(iLoop+1);

	   SmartPhone_Input(&phoneDB->phones[iLoop]);

	   SmartPhone_Output(&phoneDB->phones[iLoop]);

	}

	WritePhoneFile(phoneDB,"E:\\mobileInfo.txt");

}

void countryWisePhone( SmartPhoneType mobileList[], int size, char *country)

{

	int iLoop;

	for (iLoop=0; iLoop<size; iLoop++)

	{

		if (strcmp(mobileList[iLoop].userCountry,country)==0)

		{

			SmartPhone_Output(&mobileList[iLoop]);

			printf("\n");

		}

	}

}
void deletePhone(SmartPhoneType mobileList[], int size, int phoneID)

{
    int iIndexPos=-1;
	int iLoop=0;
	//locates the phone record with the Specific id
    for (iLoop=0; iLoop<size; iLoop++)

	{

		if (mobileList[iLoop].phoneID == phoneID)

		{

			iIndexPos=iLoop; //found it!!!

			break;

		}

	}
	if (iIndexPos>-1) //it is there
	{

		//moves each phone record one position to the left, clobbering the target record

		 for (iLoop=iIndexPos; iLoop<size-1; iLoop++)

		 {

		 	memcpy(&mobileList[iLoop],&mobileList[iLoop+1],SMART_PHONE_SIZE);

		 }
		memset(&mobileList[size-1],0,SMART_PHONE_SIZE); //invalidates the last record

	}
	size--;
    /* NEXT, you have to write this array containing size-1 records to the file,
                whose name is neither specified, nor passed */
}
int main()
{
   struct _TPhoneDB phoneDB;
   struct _TPhoneDB phones5;

    _TSmartPhone smartPhoneRec;
    ReadPhoneFile(&phoneDB,(char*)"E:\\phones.dat");
	My5Phones(&phones5);
    getHighestPricePhone(phones5.phones,phones5.count,&smartPhoneRec);
	SmartPhone_Output(&smartPhoneRec);
    PhoneDB_Destroy(&phoneDB);
}

