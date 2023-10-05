/*
    จงเขียนโปรแกรมเพื่อรับคำจากผู้ใช้งาน เพื่อตรวจสอบว่า คำที่กรอกมามีลักษณะเป็นคำหรือวลีที่สามารถอ่านจากหลังไปหน้าหรือหน้าไปหลังแล้วยังคงความหมายเหมือนเดิมได้
    โดยที่ หากคำนั้นสามารถอ่านจากหน้าไปหลังหรือหลังไปได้ ให้แสดงผลลัพธ์ว่า Pass แต่หากทำไม่ได้ให้ขึ้นว่า Not Pass

    Test case:
        Enter word:
            radar
    Output:
        Pass.

    Test case:
        Enter word:
            hello
    Output:
        Not Pass.

    Test case:
        Enter word:
            Radar
    Output:
        Pass.

    Test case:
        Enter word:
            here
    Output:
        Not Pass.
*/

#include <stdio.h>

int main() {

    char ip[99] ;
    int HMchar = 0 ;
    int pass = 0 ;

    printf( "Input : " ) ;
    scanf( "%s" , ip ) ; 

    for ( int i = 0; ip[ i ] != '\0' ; i++ )
    {
        HMchar++ ;
    }
    

    for ( int i = 0 ; ip[ i ] != '\0' ; i++ )
    {
        for (int i = 0; i < HMchar%2 ; i++)
        {
            if ( ip[ i ] == ip[ HMchar - 1 ] )
            {
            pass++ ;
            }
        }
    }
    
    printf("pass = %d\n" , pass) ;

    if ( pass > 1 && pass != 1)
    {
        printf( "pass." ) ;
    }

    else
    {
        printf( "Not pass." ) ;
    }
    
    
    

    return 0 ;
}//end main function