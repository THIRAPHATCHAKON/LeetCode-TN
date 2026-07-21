int romanToInt(char* s) {
    int val[256] = {0};
    val['I'] = 1;
    val['V'] = 5;
    val['X'] = 10;
    val['L'] = 50;
    val['C'] = 100;
    val['D'] = 500;
    val['M'] = 1000;
    int temp = 0;

    while(*s != NULL){
        if(val[*s] >= val[*(s+1)]){
            temp += val[*s];
            s++;
        }
        else {
            temp -= val[*s];
            s++;
        }
    }
    return temp;
    
}