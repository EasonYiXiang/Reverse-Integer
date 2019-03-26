int reverse(int x) {
    
    long long answer = 0;
    while(x){
        answer = answer*10+x%10;
        x /= 10;
    }
    
    
    return (answer > INT_MAX || answer < INT_MIN) ? 0 : answer;
}
