import time
import RPi.GPIO as GPIO

NG0_PIN = 3 #四個位數LED燈的腳位
NG1_PIN = 5
NG2_PIN = 7
NG3_PIN = 9
SEN_PIN = 16 #IR sensor腳位

GPIO.setmode(GPIO.BOARD)

GPIO.setup(NG0_PIN, GPIO.OUT)
GPIO.setup(NG1_PIN, GPIO.OUT)
GPIO.setup(NG2_PIN, GPIO.OUT)
GPIO.setup(NG3_PIN, GPIO.OUT)
GPIO.setup(SEN_PIN, GPIO.IN)

counter = 0 #先設定初始值為0

GPIO.output(NG0_PIN, GPIO.LOW) #先設定全部的燈全暗
GPIO.output(NG1_PIN, GPIO.LOW)
GPIO.output(NG2_PIN, GPIO.LOW)
GPIO.output(NG3_PIN, GPIO.LOW)
try:
    while True:
        if GPIO.input(SEN_PIN) == GPIO.HIGH: #sensor偵測到物體時
            counter += 1
            print('detect!')
            print(counter)
            a = counter/2
            b = a/2
            c = b/2

            if counter % 2 == 0: #第一位數的判斷
                  GPIO.output(NG3_PIN, GPIO.LOW)
            else:
                  GPIO.output(NG3_PIN, GPIO.HIGH)
            
            if b % 2 == 0: #第二位數的判斷
                  GPIO.output(NG2_PIN, GPIO.LOW)
            else:
                  GPIO.output(NG2_PIN, GPIO.HIGH)
            
            if c % 2 == 0: #第三位數的判斷
                  GPIO.output(NG1_PIN, GPIO.LOW)
            else:
                  GPIO.output(NG1_PIN, GPIO.HIGH)

            if c / 2 == 0: #第四位數的判斷
                  GPIO.output(NG0_PIN, GPIO.LOW)
            else:
                  GPIO.output(NG0_PIN, GPIO.HIGH)

            time.sleep(1) # 這會決定改變燈色之後, 多久能重新判斷是否有物體
        time.sleep(0.1)
        
except KeyboardInterrupt:
    print("kb")
finally:
    GPIO.cleanup()

