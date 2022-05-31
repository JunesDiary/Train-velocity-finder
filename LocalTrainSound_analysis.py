import numpy as np
import matplotlib.pyplot as plt
%matplotlib inline
import librosa as lr
import librosa.display
from IPython.display import Audio, IFrame, display


data="Local Train Record.mp3"
x,sr=lr.load(data)
plt.figure(figsize=(14,5))

#plots waveform in time domain
librosa.display.waveshow(x, sr = sr)

#plots spectrogram
xf = librosa.stft(x)
xfdb = librosa.amplitude_to_db(abs(xf))
plt.figure(figsize=(14,5))
librosa.display.specshow(xfdb, sr=sr, x_axis='time', y_axis='log')
plt.colorbar()

display(Audio(data, rate=sr))

#PCEN for Event Detection
S1 = lr.feature.melspectrogram(x, sr=sr, n_mels=64)
Dp1 = lr.pcen(S1 * (2**31), sr=sr, gain=0.1, hop_length=512, bias=2, power=0.64, time_constant=0.8, eps=1e-06, max_size=3)

librosa.display.specshow(Dp1, x_axis='time', y_axis='mel');
display(Audio(data, rate=sr))
