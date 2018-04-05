void setup() {
  // put your setup code here, to run once:



  gb.begin();
  gb.display.clear();

}

void loop() {
  // put your main code here, to run repeatedly:
gb.display.setColor(RED);
gb.display.drawPixel(100,100);
gb.display.drawCircle(100,100,50);

for(int i=100; i<200;i++)
{
gb.display.drawCircle(i,i,50);
gb.update();
delay(10);
}


gb.display.setColor(BLACK);
for(int i=200; i>100;i--)
{
gb.display.drawCircle(i,i,50);
gb.update();
delay(10);
}


}
