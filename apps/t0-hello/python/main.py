# desk-cubesat · Tappa 0 — lato Linux (QRB2210)
from arduino.app_utils import *
import time


def loop():
    # per ora solo un segno di vita ogni 5 s
    print("linux: vivo")
    time.sleep(5)


App.run(user_loop=loop)
