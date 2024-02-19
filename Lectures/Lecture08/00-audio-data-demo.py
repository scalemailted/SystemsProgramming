import numpy as np
import sounddevice as sd

# Function to generate a tone
def generate_tone(frequency, duration, sample_rate=44100):
    # Calculate the number of samples
    num_samples = int(sample_rate * duration)

    # Manually create the time array
    t = [i / sample_rate for i in range(num_samples)]

    # Generate the tone by calculating the sine wave values for each time point
    tone = [np.sin(2 * np.pi * frequency * time) for time in t]
    return tone

# Function to play a tone
def play_tone(tone, sample_rate=44100):
    sd.play(tone, sample_rate)
    sd.wait()  # Wait until tone is finished playing

# Generate and play a few tones
tones = {
    "A4": 440,  # A4 note
    "C5": 523.25,  # C5 note
    "E5": 659.25,  # E5 note
}

# Duration of each tone in seconds
duration = 2

for note, freq in tones.items():
    print(f"Playing {note} note...")
    tone = generate_tone(freq, duration)
    play_tone(tone)
