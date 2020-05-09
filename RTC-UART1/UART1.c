#include "UART1.h"

extern UART_HandleTypeDef huart1;

char get_char(void){
	char ch[1];
	HAL_UART_Receive(&huart1,(unsigned char*)ch,1,20);
	return ch[0];
	}
void PutString(char* str){
	while(*str !='\0' )
	 {
		 HAL_UART_Transmit(&huart1,(unsigned char*) str,1,10);
		 str++;
	 }
}