#include<bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ACTUAL 0
#define WSIG 1
#define CSIG 2
ui64           judgeActualHash[] = {  7440038193698607359ULL, 14362611022776267271ULL,  6050095266002473105ULL,  3632593591251710879ULL,  3915717940419681260ULL, 13995765944252053133ULL, 10580555121739768286ULL,  4401243210969137136ULL,  5671371957802696171ULL,  5593025791871901206ULL};
ui64         judgeWSIgnoreHash[] = {   952297584723575845ULL,  1272272806790486735ULL,  6754953260797281513ULL,  1304542202827891875ULL,  9523305897732247050ULL, 13498144058608654153ULL, 11354605879903517714ULL,  8658245574247550814ULL,  4383734389608844347ULL,  6870711991215918450ULL};
ui64    judgeWS_CaseIgnoreHash[] = { 17942723692874132005ULL, 17468422148005084623ULL,  9745971539303389929ULL,  2441015827499875491ULL,  9753705714056442122ULL, 13416691947547455049ULL, 17643615348487608594ULL,  1428647718529324382ULL,  7428532412899740987ULL, 16938868854067379058ULL};

bool isWS(char c){
    return c == ' ' || c == '\n' || c == '\r' || c == '\t';
}

ui64 findHash(char filename[], int flag = ACTUAL){
    FILE *fp = fopen(filename,"r");
    ui64 p = 1000000007;
    char c;
    ui64 hash = 0, coeff = 1;
    while((c = fgetc(fp))!=EOF){
        if(isWS(c) && (flag & WSIG))continue;
        if(isalpha(c) && (flag & CSIG)) c = tolower(c);
        hash += (c * coeff);
        coeff *= p;
    }
    fclose(fp);
    return hash;
}

void check(int cs){
    int i;
    ui64 scHash;
    for(i = 1; i <= cs; i++){
        char file[100],infile[100],stsfile[100];
        sprintf(file,"%d.out",i);
        sprintf(infile,"%d.in",i);
        sprintf(stsfile,"%d.status",i);
        printf("Case %d: ",i);
        FILE *fp;
        int flag = 0;
        if((fp = fopen(infile, "r")) == NULL) flag = 1;
        if(flag) printf("Input File Missing!!!\n");
        else{
            FILE *stsfp = fopen(stsfile, "r");
            char sts[100];
            fgets(sts, 100, stsfp);
            if(strncmp(sts, "TLE", 3) == 0) printf("Time Limit Exceeded\n");
            else if(strncmp(sts, "timeout", 7) == 0) printf("Run Time Error\n");
            else if(strncmp(sts, "+Accepted", 8) == 0) printf("*********************PASSED***********************\n");
            else {
                scHash = findHash(file);
                if(scHash == judgeActualHash[i-1])printf("*********************PASSED***********************\n");
                else{
                    scHash = findHash(file, WSIG);
                    if(scHash == judgeWSIgnoreHash[i-1])printf("White Space Error\n");
                    else{
                        scHash = findHash(file, WSIG | CSIG);
                        if(scHash == judgeWS_CaseIgnoreHash[i-1])printf("Upper/Lower Case Error\n");
                        else printf("Failed\n");
                    }
                }
            }
        }
    }
}
int main(){
	check(10);
	return 0;
}
