#include <SoftwareSerial.h>

SoftwareSerial BT(6, 7);
String readvoice;

int input1 = 5;
int input2 = 4;
int enable1 = 3;

int input3 = 11;
int input4 = 10;
int enable2 = 9;

int Speed = 255;

void setup()
{
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(input3, OUTPUT);
  pinMode(input4, OUTPUT);
  pinMode(enable1, OUTPUT);
  pinMode(enable2, OUTPUT);
}

void loop()
{
  while (BT.available())
  {
    delay(10);
    char c = BT.read();
    readvoice += c;
    Serial.println(readvoice);
  }

  if (readvoice.length() > 0)
  {
    Serial.println(readvoice);

    if (readvoice == "forward")
    {
      Serial.println("Forward");

      digitalWrite(input1, HIGH);
      digitalWrite (input2, LOW);
      analogWrite(enable1, Speed);

      digitalWrite(input3, HIGH);
      digitalWrite(input4, LOW);
      analogWrite(enable2, Speed);
      //delay(100);
    }

    else if (readvoice == "back")
    {
      Serial.println("Back");

      digitalWrite(input1, LOW);
      
      digitalWrite (input2, HIGH);
      analogWrite(enable1, Speed);

      digitalWrite(input3, LOW);
      digitalWrite(input4, HIGH);
      analogWrite(enable2, Speed);
      //delay(100);
    }

    else if (readvoice == "right")
    {
      Serial.println("right");

      digitalWrite(input1, HIGH);
      digitalWrite (input2, LOW);
      analogWrite(enable1, Speed);

      digitalWrite(input3, LOW);
      digitalWrite(input4, LOW);
      analogWrite(enable2, Speed);

    }

    else if ( readvoice == "left")
    {
      Serial.println("left");

      digitalWrite(input1, LOW);
      digitalWrite (input2, LOW);
      analogWrite(enable1, Speed);

      digitalWrite(input3, HIGH);
      digitalWrite(input4, LOW);
      analogWrite(enable2, Speed);
      //delay(100);
    }

    else if (readvoice == "stop")
    {
      Serial.println("stop");

      digitalWrite(input1, LOW);
      digitalWrite (input2, LOW);

      digitalWrite(input3, LOW);
      digitalWrite(input4, LOW);

      //delay (100);
    }

    else if (readvoice == "spin")
    {
      Serial.println("spin");
      digitalWrite(input1, HIGH);
      digitalWrite (input2, LOW);
      analogWrite(enable1, Speed);

      digitalWrite(input3, LOW);
      digitalWrite(input4, HIGH);
      analogWrite(enable2, Speed);
      // delay (100);
    }
    else if (readvoice == "action")
    {
      Serial.println("action")���
ﲲ�ۉ#���5u��v$$�1c �2m8,y�@���|4C���XI������*�i��0u��<r��������>_Nvƨ�u��W_J����WOB����V�jL5�*�F�aƙ�M��i�����Wj�os�V� 
��fT��4[u��,����cd��a����v�/A��w�(�����su/�#h��Z�ǃ~o� ���NL���A��LQьÖ"�i#�;7�J���E��@mA%c&��NQ� ��[�7��(
^TQ��*{#��n&�s�>֫Qy�\���s��N֯9򦝚ї"��ڽ/��/guݗ�5Й�)X��6s�2ѿ{8��M��T�}���Q���pn���K��.z��Ma�i����~�;o�5�=||�c��%��`�/Ee��We��=4���¨�F���r�CN�+'���]��ʵl�_����5�ZcpІ��%Ō�	�w'���[ހ�H�k�2�2�O`�3~i��#4G���	����j���aE�����'����Kt�/�F�(���O7nuO������W6�;|X�%�e^r�����!��zd�'�g	��W�o�Zd�b�y��\�.k��(���H��R�)v� �����q�R���A�uKQ�E�
(�p��ޚ+�rSҞ�0Т���yd�"{�~6<�y�b*�]�(������A��~������40:�?Uwk�(��0