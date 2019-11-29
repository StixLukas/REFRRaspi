#include "report.h"

int main() {

    const char source[50] = "..\\access.log.6";

    if(reportOpenFile(source)) {
        if (reportReport()) {
            if (reportCloseFile()) {}
            else {
                printf("Error while closing file!\n");
            }
        } else {
            if (reportCloseFile()) {}
            else {
                printf("Error while closing file!\n");
            }
            printf("Error processing file!\n");
        }
    } else{
        if (reportCloseFile()) {}
        else {
            printf("Error while closing file!\n");
        }
        printf("Error while opening file!\n");
    }

    return 0;
}