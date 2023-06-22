/*3. Data Viewer:
Write an application to view the log stored in data.csv
Example, say you have the following data in data.csv
------------------------------------
EntryNo,sensorNo,Temperature,Humidity,Light,
1,S1,36.5,100,50,10:30:50
2,S3,30,100,50,10:30:55
3,S2,-6.6,100,10,10:31:00
------------------------------------
a. Write a function to extract each line in the .csv file and store it in an array of structures. 
b. Also implement functions to display the contents of the array of structures.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

// Structure to hold the log data
typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
} LogEntry;

// Function to extract each line from the .csv file and store it in an array of structures
int extractLogData(LogEntry logEntries[], const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open file: %s\n", filename);
        return 0;
    }