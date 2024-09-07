void setup() {
 // baud rate  9600
  unsigned int ubrr = 103;//based on formula
  UBRR0H = (unsigned char)(ubrr >> 8);
  UBRR0L = (unsigned char)ubrr;
  UCSR0B = (1 << TXEN0);
  UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
}
void sendByte(unsigned char data) {
  while (!(UCSR0A & (1 << UDRE0)));
  UDR0 = data;
}
void loop() {
char message[]="H";
int i;
for(i=0;message[i]!='\0';i++){
  sendByte(message[i]);
}
sendByte('\n');
delay(1000);
}
