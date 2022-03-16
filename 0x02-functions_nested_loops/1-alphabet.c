#include <main.h>



int main(void)
{
    print_alphabet();
    return 0;
}

print_alphabet(){
        char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
        int i;
        for(i= 0; i<=26; i++){
            _putchar(alpha[i]);
        }
        _putchar("\n");
}
