void setup() {
  // put your setup code here, to run once:
  gb.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
    gb.display.setColor(RED);
    gb.display.drawPixel(30, 40, WHITE );
    gb.display.cursorX = 36;
    gb.display.setColor(DARKBLUE);
    gb.display.println("DARKBLUE");
      //Screen update benchmark
  unsigned long timeBenchmark = 20;
  while (1) {
    while(!gb.update());
    // clear the previous screen
    gb.display.clear();

    gb.display.setColor(WHITE);
    gb.display.print(1000 / (timeBenchmark));
    gb.display.print(" FPS");
    gb.display.setColor(BROWN);
    gb.display.print(" (");
    gb.display.print(timeBenchmark);
    gb.display.println("ms)");
    gb.display.setColor(WHITE);
    gb.display.print(gb.display.getBufferSize() / 1024);
    gb.display.print(" KB");
    gb.display.setColor(BROWN);
    gb.display.println(" BUFFER");
    gb.display.drawPixel(130, 140, WHITE );
    gb.display.drawPixel(131, 141, WHITE );
///    drawBottomLine();
    uint16_t startTime = millis();
///    PORT->Group[0].OUTSET.reg = (1 << 17);  // set PORTA.17 high  "digitalWrite(13, HIGH)"
    gb.tft.drawImage(0, 0, gb.display, gb.tft.width(), gb.tft.height());
///    PORT->Group[0].OUTCLR.reg = (1 << 17);  // clear PORTA.17 high "digitalWrite(13, LOW)"
    uint16_t endTime = millis();
    timeBenchmark = endTime - startTime;
  }
}
