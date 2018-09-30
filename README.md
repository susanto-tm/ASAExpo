# Blink Detection

A blink detection algorithm interfaced with Arduino to turn on and off an LED.

## Getting Started

These instructions will get you a copy of the project up and running on your 
local machine for development and testing purposes.

### Prerequisites

An installation of Anaconda is needed for this project, which could be found at:
https://www.anaconda.com/download/

The full list of dependencies could be found at environment.yml

### Installing

Clone the repository then run the environment.yml file to install the dependencies
```angular2html
conda env create -f environment.yml
```

## Running the Program

Open ```detect_blink.py``` at change the values of `EYE_AR_THRESH` and `EYE_AR_CONSEC_FRAMES`
to match with different conditions. Also change `src` at **line 68** to use either webcam or different USB ports.

Open `detect-blink.ino` and make sure that the **COM Ports** are set properly according to the device manager
(for Windows). Make sure that the COM port in **line 16** matches with the one in the Arduino file.

`cd` to the project root file in the Anaconda Prompt then run the following command to use the `shape_predictor_68_face_landmarks.dat`
```angular2html
python detect_blink.py --shape-predictor shape_predictor_68_face_landmarks.dat
```

## Authors

* **Adrian Rosebrock** - *Blink detection algorithm* - [PyImageSearch](https://www.pyimagesearch.com/2017/04/24/eye-blink-detection-opencv-python-dlib/)
