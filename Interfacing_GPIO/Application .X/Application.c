/* 
 * File:   Application.c
 * Author: En.Ahmed
 *
 * Created on March 4, 2024, 6:40 PM
 */


#include"application.h"
pin_config_t led_1={
    .port =PORTC_INDEX,
    .pin  =PIN0,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic =GPIO_LOW
};
pin_config_t led_2={
    .port =PORTC_INDEX,
    .pin  =PIN1,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic =GPIO_LOW
};
pin_config_t led_3={
    .port =PORTC_INDEX,
    .pin  =PIN2,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic =GPIO_LOW
};
pin_config_t btn_1={
    .port =PORTD_INDEX,
    .pin  =PIN0,
    .direction = GPIO_DIRECTION_INPUT,
    .logic =GPIO_LOW
};

     std_ReturnType ret = E_NOT_OK;
     direction_t led_1_st;
     logic_t btn1_status;
     uint8 portc_direction_status;
     uint8 portc_logic_status;
int main() {
   
     
     
     //ret = gpio_pin_direction_initialize(NULL);
     while(1){
         __delay_ms(1000);
        gpio_pin_direction_initialize(&led_1);
        gpio_pin_direction_initialize(&led_2);
        gpio_pin_direction_initialize(&led_3);
        gpio_pin_write_logic(&led_1,GPIO_HIGH);
        gpio_pin_write_logic(&led_2,GPIO_LOW);
        gpio_pin_write_logic(&led_3,GPIO_LOW);
        __delay_ms(6000);
        gpio_pin_write_logic(&led_1,GPIO_LOW);
        gpio_pin_write_logic(&led_2,GPIO_HIGH);
        gpio_pin_write_logic(&led_3,GPIO_LOW);
        __delay_ms(1000);
        gpio_pin_write_logic(&led_1,GPIO_LOW);
        gpio_pin_write_logic(&led_2,GPIO_LOW);
        gpio_pin_write_logic(&led_3,GPIO_HIGH);
        __delay_ms(6000);

     }
         /*ret = gpio_pin_read_logic(&btn_1,&btn1_status);
         if(btn1_status ==GPIO_HIGH){
            ret = gpio_pin_write_logic(&led_1,GPIO_HIGH);
         }
         else{
             ret = gpio_pin_write_logic(&led_1,GPIO_LOW);
         }
         ret = gpio_pin_write_logic(&led_2,GPIO_HIGH);
         ret = gpio_pin_write_logic(&led_3,GPIO_HIGH);
         __delay_ms(500);
         ret = gpio_pin_write_logic(&led_2,GPIO_LOW);
         ret = gpio_pin_write_logic(&led_3,GPIO_LOW);
         __delay_ms(500);
     }*/
    return (EXIT_SUCCESS);
}
void application_initialize(void){
    ret = gpio_port_direction_initialize(PORTC_INDEX,0X00);
    ret = gpio_port_get_direction_status(PORTC_INDEX,&portc_direction_status);
    ret=  gpio_port_write_logic(PORTC_INDEX,0x55);
    ret=  gpio_port_read_logic(PORTC_INDEX,&portc_logic_status);
    __delay_ms(5000);
    ret=  gpio_port_write_logic(PORTC_INDEX,0xAA);
    ret=  gpio_port_read_logic(PORTC_INDEX,&portc_logic_status);
     /*ret = gpio_pin_initialize(&btn_1); 
     ret = gpio_pin_initialize(&led_1);    
     ret = gpio_pin_initialize(&led_2);
     ret = gpio_pin_initialize(&led_3);*/ 
}
