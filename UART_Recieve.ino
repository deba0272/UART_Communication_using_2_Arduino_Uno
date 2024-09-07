void setup() {
  //baud rate  9600
  unsigned int ubrr = 103;
  UBRR0H = (unsigned char)(ubrr >> 8);
  UBRR0L = (unsigned char)ubrr;
  UCSR0B = (1 << RXEN0);
  UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
  Serial.begin(9600);
}
unsigned char receiveByte() {
  while (!(UCSR0A & (1 << RXC0)));
  return UDR0;
}

void loop() {
  // Receive data byte by byte
  char recievedmessage[50];
  int i=0;
  unsigned char recievechar;
  do{
    recievechar=receiveByte();
    if(recievechar!='\n'){
      recievedmessage[i++]=recievechar;
    }
  }while(recievechar!='\n' &&i<50);
  recievedmessage[i]='\0';
    Serial.print(recievedmessage);
  }
