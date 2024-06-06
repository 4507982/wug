
int delay_ms = 200;

int arr_pin[5] ={32,33,25,26,27};

int i, j;
void setup() {
  // put your setup code here, to run once:
for (int i = 0; i<5; i++) {
  pinmode(arr_pin[i], OUTPUT);

  }
  delay(200):
}

void loop() {
  // put your main code here, to run repeatedly:
  for (i=0; i<5; i++) {
  digitalWrite(arr_pin[i], HIGH);
  delay(delay_ms);
  digitalWrite(arr_pin[i], LOW)
  }
  for (j=3; j>=0; j--) {
    digitalWrite(arr_pin[i], HIGH);
  delay(delay_ms);
  digitalWrite(arr_pin[i], LOW)
  }
}
