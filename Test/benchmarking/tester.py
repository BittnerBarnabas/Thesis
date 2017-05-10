import sys
import subprocess
import os

processName = str(sys.argv[1])
upperBound = int(sys.argv[2])

for i in range(1,50):
    upperBound += 1000
    print("Running with: " + str(upperBound))
    command = "time " + processName + " " + str(upperBound)
    proc = subprocess.run([command + " > /dev/null"], shell=True)
