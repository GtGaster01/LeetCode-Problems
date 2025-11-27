
int romanToInt(char* s) {
    int result =0;
    int number=0, i=0, j;
    int len=strlen(s);
    while(i<strlen(s)){
        j=0;
        if(s[i]=='I'){
            if(s[i+1]=='V'){ 
                number=4;
                i++;
            }   
            else if(s[i+1]=='X'){
                number=9;
                i++;
            }
            else number=1;
           
        }else if(s[i]=='V'){
           
            number=5;
           
        }else if(s[i]=='X'){
            if(s[i+1]=='L'){ 
                number=40;
                i++;
            }   
            else if(s[i+1]=='C'){
                number=90;
                i++;
            }
            
            else number=10;
            
        }else if(s[i]=='L'){
            
            number=50;
           
        }else if(s[i]=='C'){
            if(s[i+1]=='D'){ 
                number=400;
                i++;
            }   
            else if(s[i+1]=='M'){
                number=900;
                i++;
            }
            else number=100;
            
        }else if(s[i]=='D'){
            
            number=500;
           
        }else if(s[i]=='M'){
           
            number=1000;
            
        }else{
            i++;
        }
        result=result+number;
        i++;
    }
    return result;
}