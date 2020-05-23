# chill_challenge

Document last updated: 2020 May 23
Heart Rate Video Game Controller By Max Tayler

Heart pulse detection and relaxation video game.


Disclaimer
This adapter for a heart rate sensor is intended for educational and entertainment
purposes only. It is not part of a medical device, nor does it claim to be. The common human
resting heart rate is 60 beats per minute, down to 50 if you are athletic, up to 100 if you are
child. Those beats typically have only minor fluctuations in rhythm. If you have questions about
your heart rate or rhythm or any other medical symptoms, you should promptly talk to your
doctor or other clinician. Here in British Columbia anyone can call HealthLink at 8-1-1 for free
advice from a registered nurse.
This hardware and related software is open-source and is free for the public to reproduce or
modify subject to the terms of the applicable license.

Introduction
This simple Arduino based controller is designed to convert the Seeed heart rate sensor output
into a keyboard signal for my video game, The Chill Challenge. A player wins the Chill
Challenge with a steady heartbeat. The game is fun, but it was designed to detect variations in
heart rate related to anxiety and get to people into a positive “flow state”.
The actual sensor sends a harmless infrared pulse through your fingertip or earlobe. The
detector sees variations caused by blood flow. The little Seeed adapter box turns that analog
signal into a clean square wave in time with your heart beat. The Arduino takes that digital
signal and translates it to key presses and key releases that it delivers to a computer through a
USB port. The game counts and times the pulses and displays your changing pulse rate.
