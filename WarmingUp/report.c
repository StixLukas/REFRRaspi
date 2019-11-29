//
// Created by Lukas on 22.11.2019.
//

#include <stdlib.h>
#include <string.h>
#include "report.h"
FILE *file;

bool reportOpenFile(char *source){
    file = fopen(source,"r");
    return true;

}

bool reportReport(){

    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    int zeilen= 0;
    int anzGET = 0;
    int anzPOST = 0;
    int anzPhone = 0;


    while ((read = getline(&line, &len, file)) != -1) {
        zeilen++;

        if(strstr(line,"GET")!=NULL)
            anzGET++;
        else if(strstr(line,"POST")!=NULL)
            anzPOST++;
        if(strstr(line,"Android")!= NULL)
            anzPhone++;
        else if(strstr(line,"iPhone"))
            anzPhone++;

        //printf("%s", line);
    }
    printf("\nZeilen: %d\nGETS: %d\nPOSTS: %d\nSmartphone: %d",zeilen,anzGET,anzPOST,anzPhone);

    return true;

}

bool reportCloseFile(){
    fclose(file);
    return true;


}
