#define d1 1
#define d2 6
#define d3 8
#define d4 12

class Led{
    unsigned long previousMillis;
    long interval;
    int ledEstado;
    int pino;
    long des;
public:    
    Led(int p, long Interval, long Des){
      interval = Interval;
      des = Des;
      pino = p;
      ledEstado = LOW;
      previousMillis = 0;
      pinMode(pino, OUTPUT);
    }
    void pisca(){
      unsigned long currentMillis = millis();
      if((ledEstado == LOW)&&(currentMillis - previousMillis >= interval)){
        ledEstado = HIGH;
        digitalWrite(pino, ledEstado);
        previousMillis = currentMillis;
      }else if((ledEstado==HIGH)&&(currentMillis - previousMillis >= des)){
        ledEstado = LOW;
        digitalWrite(pino, ledEstado);
        previousMillis = currentMillis;
      }
    }
};

Led led1(1, 130, 130);
Led led2(2, 130, 130);
Led led3(3, 130, 130);
Led led4(4, 130, 130);
Led led5(5, 130, 130);
Led led6(6, 130, 130);
Led led7(7, 130, 130);
Led led8(8, 130, 130);
Led led9(9, 130, 130);
Led led10(10, 130, 130);
Led led11(11, 130, 130);

void setup()
{
 pinMode(d1,OUTPUT); 
 pinMode(d2,OUTPUT); 
 pinMode(d3,OUTPUT);
 pinMode(d4,OUTPUT); 
}

void loop()
{
  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);
 /*
  led1.pisca();
  
  led3.pisca();
  led4.pisca();
  led5.pisca();
  led6.pisca();
  led7.pisca();
  led8.pisca();
  
  led10.pisca();
  led11.pisca();
  */
}
