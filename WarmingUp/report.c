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
    int anzMozilla = 0;
    int anzApache = 0;
    int anzChrome = 0;
    int anzSafari = 0;
    char delim[] = " ";


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
        if(strstr(line,"Mozilla"))
            anzMozilla++;
        if ((strstr(line,"Chrome")))
            anzChrome++;
        if (strstr(line,"Safari"))
            anzSafari++;
        if (strstr(line,"Apache"))
            anzApache++;
        //printf("%s", line);
    }
    printf("\nZeilen: %d\nGETS: %d\nPOSTS: %d\nSmartphone: %d\nMozilla: %d\nChrome: %d\nSafari: %d\nApache: %d",zeilen,anzGET,anzPOST,anzPhone,anzMozilla,anzChrome,anzSafari,anzApache);

    return true;

}

bool reportCloseFile(){
    fclose(file);
    return true;


}
