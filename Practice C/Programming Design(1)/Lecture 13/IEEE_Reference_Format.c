#include<stdio.h>
#include<string.h>

char* reference(char author[], char title[], char conference[], char location[], char date[], char ppdoi[]);

int main(){
    char author[100], title[150], conference[150], location[30], date[5], ppdoi[60];
    scanf("%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]", author, title, conference, location, date, ppdoi);
    printf("%s", reference(author, title, conference, location, date, ppdoi));
    return 0;
}
// In case you don't know how to return a string, I already wrote that part. Just insert your thought between them.
char* reference(char author[], char title[], char conference[], char location[], char date[], char ppdoi[]){
    static char result[300];
    strcpy(result,author);
    result[strlen(result)]=',';
    result[strlen(result)]=' ';
    result[strlen(result)]='"';
    strcat(result,title);
    result[strlen(result)]=',';
    result[strlen(result)]='"';
    result[strlen(result)]=' ';
    strcat(result,conference);
    result[strlen(result)]=',';
    result[strlen(result)]=' ';
    if(strlen(location)!=0){
    strcat(result,location);
    result[strlen(result)]=',';
    result[strlen(result)]=' ';
    }
    strcat(result,date);
    result[strlen(result)]=',';
    result[strlen(result)]=' ';
    strcat(result,ppdoi);
    result[strlen(result)]='.';
    return result;
}
//Y. Azar et al., "28 GHz propagation measurements for outdoor cellular communications using steerable beam antennas in New York city," 2013 IEEE International Conference on Communications (ICC), Budapest, 2013, pp. 5143-5147, doi: 10.1109/ICC.2013.6655399.
//K. He, X. Zhang, S. Ren and J. Sun, "Deep Residual Learning for Image Recognition," 2016 IEEE Conference on Computer Vision and Pattern Recognition (CVPR), Las Vegas, NV, 2016, pp. 770-778, doi: 10.1109/CVPR.2016.90.
