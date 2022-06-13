from picamera import PiCamera

from time import sleep
import time
import datetime
import schedule

import requests
import json


def job():
   url_device = "http://13.209.110.72/api/arduino/serial"
   url_login = "http://13.209.110.72/api/arduino/login"

   headers ={
      'Content-Type': 'application/json;charset=utf-8',
      'Accept': 'application/json'
   }

   data_device = {"serial_no": "vmlfROieJvSeceBSu8SX"}

   response_device  = requests.post(url=url_device, data=json.dumps(data_device), headers=headers)

   res_device = json.loads(response_device.text)

   userID = res_device['userID']
   plantID = res_device['plantID']

   data_login = {
      "email": "arduinofree@arduino.com",
      "password": "arduinopassword"
   }

   response_login  = requests.post(url=url_login, data=json.dumps(data_login), headers=headers)
   res_login = json.loads(response_login.text)

   access_token = res_login['access_token']
   token_type = res_login['token_type']
   expires_in = res_login['expires_in']

   url_image = "http://13.209.110.72/api/User/"+str(userID)+"/arduino/imgpush"


   camera = PiCamera()
   camera.start_preview()
   sleep(1)
   camera.capture('/home/capstone/test.jpg')
   camera.stop_preview()

   f = open('/home/capstone/test.jpg', 'rb')


   data_image = {
      'token': access_token,
      'plantID': plantID
   }

   files = {
      'image': open('/home/capstone/test.jpg', 'rb')
   }

   response_image  = requests.post(url=url_image, data=data_image, headers=headers, files=files)



schedule.every().day.at("21:30").do(job)


while True:
   schedule.run_pending()
   time.sleep(1)
