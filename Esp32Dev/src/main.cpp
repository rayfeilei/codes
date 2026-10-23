#include <Arduino.h>
#include <DHT.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

// 初始化OLED
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
// 定义DHT11参数
#define DHTPIN 4 //DHT针脚
#define DHTTYPE DHT11 //传感器型号
DHT dht(DHTPIN, DHTTYPE);
/*
// 让esp32自带小灯闪烁💡
void loop() {
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(500);
}
*/
void setup() {
  Serial.begin(115200);
  Serial.println(F("系统启动..."));
  // 初始化DHT11
  dht.begin();
  // 初始化I2C (默认SDA=21,SCL=22)
  Wire.begin(21,22);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3c)) {
    Serial.println(F("OLED初始化失败！请检查"));
    for(;;); // 如果屏幕没接好会卡在这
  }
  // 显示启动画面
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("ESP32 + DHT11 + OLED");
  display.display();
  delay(2000); //等待2s
}
void loop() {
  // 读取湿度，DHT11刷新较慢，至少间隔2s
  float h = dht.readHumidity(); // 读取湿度
  float t = dht.readTemperature(); // 读取温度
  // 检查读取是否失败
  if (isnan(h) || isnan(t)) {
    Serial.println(F("读取DHT11失败，请检查"));
    delay(2000);
    return;
  }
  Serial.print(F("温度："));
  Serial.print(t, 1);
  Serial.print(F(" C  湿度："));
  Serial.print(h, 1);
  Serial.println(F(" %"));

  // 先清空缓冲区，再画内容
  display.clearDisplay();
  display.setTextSize(2); // 字体放大
  display.setTextColor(SSD1306_WHITE);

  // 显示温度
  display.setCursor(0, 10);
  display.print(F("T: "));
  display.print(t, 1); // 保留一位小数
  display.print(F(" C"));

  // 显示湿度（换一行，避免和温度重叠）
  display.setCursor(0, 40);
  display.print(F("H: "));
  display.print(h, 1); // 保留一位小数
  display.print(F(" %")); // 相对湿度

  // 刷新屏幕，把缓冲区内容送到OLED
  display.display();

  // 延迟2s
  delay(2000);
}