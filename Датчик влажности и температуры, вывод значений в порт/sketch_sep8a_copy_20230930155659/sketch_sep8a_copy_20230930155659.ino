#define button_pin 3 //пин кнопки
#define relay_pin 6 // пин реле

boolean butt_flag = 0; //флажок нажатия кнопки
boolean butt; // переменная, хранящая состояние кнопки
boolean flag = 0; // флажок режима
unsigned long last_press; // таймер для фальтра дребизга
void setup() {
  pinMode(button_pin, INPUT_PULLUP);
  pinMode(relay_pin, OUTPUT);
}

void loop(){
  butt = !digitalRead(button_pin); //считать положение кнопки

  if (butt == 1 && butt_flag == 0 && millis() - last_press > 100){
    butt_flag = 1;
    flag = !flag;
    last_press = millis();

    digitalWrite(relay_pin, flag);
  }
  if (butt == 0 && butt_flag == 1) {
    butt_flag = 0;
  }
}