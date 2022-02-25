#include<stdio.h>
 
int main(){
    int t;

    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        char s[1000]="qazwsxedcrfvtgbyhnujmikolpmjunhybgtvfrcdexswzaqoolpqqwsazxcderfvbnmlpokijuhygtfrmnbasdpoiqwezxkljhgfrtyuioyrwzxcvbnmlkjhgfdsaqwertyuiopabcdefghijklmnopqrstuvwxyzwaqesrdtfyguhijokplmnbvcxzmlnkbjvhcgxfzdaqswertyuioplkbgsxvsqedazcghxweizcvfbnhvnmklopiuytrewqxvnmkjhgfdsapngcsagbjovfgnvysdcxzqwrtyuioplkhgfdsaqeryubvcxdmlbnjkoiuhgcxzasdfgtrewqmknbhgfwakhraswaghuhbmwokngvcdfwolnhvfxsasaqertuomnbvfhmngjkihbcdgsetuiplmjbgvfcdxqdplokijuytftgjikpmnbvcxzasdfghjklpoiuytrewqabcdefghijklmnopqrstuvwxyzhjknbhbgklmmkijbgfxsdhpoiuhjklsonvanhenladremainheysogohokmbghqazwsxedcrfvtgbyhnujmikolpmjunhybgtvfrcdexswzaqlopmnbvcxzlkjhgfdsaqwertyuioopasdfghjklpmonibuvyctxrzewqzxcvbnmaqswdefrgthyjukilopnmbvabcdefghijklmnopqrstuvwxyzqwertyuioplkjhgfdsazxcvbnmpoiuytrewqasdfghjklmnbvcxzaxwecvrtbnyumklpoijhgfdsqzcftvgybuhijnmokplqawxsedcvfrabcdefghijklmnopqrstuvwxyzklopiujnbhygvtfcrdxewszaqwsedrftgyhujikolpmnbvcxzoubhmlkjnvygtcfrxdezswaqwqertyuioplkmbnhjazsxdcfvgqwertyuioplkjhgfdsazxcvbnmplokmijnuhbygvtfcrdxeszwaqrdsmn";
        char a[n];
        for (int i = 0; i < n; i++)
        {
            a[i]=s[i];
        }
        
        printf("%s", a);
        
        printf("\n");    
    }
    
    return 0;
}