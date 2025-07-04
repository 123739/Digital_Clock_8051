# Digital Clock using 8051 and 7-Segment BCD Display
This project implements a real-time digital clock using the 8051 microcontroller and six 7-segment displays to show hours, minutes, and seconds in HH:MM:SS format. BCD encoding is used to display numeric values via decoder ICs or direct port logic.

## Key Features
- Time format: HH:MM:SS
- BCD output to 7-segment display
- Counter-based logic with reset at 60s, 60m, and 24h
- Purely delay-based (or optionally timer-based) implementation
- Real-time simulation using Proteus

## Tools & Components
- AT89C51 (8051 microcontroller)
- 7-segment displays ×6
- BCD to 7-segment decoders (7447 ICs) or direct port logic
- Keil uVision 5 (Embedded C programming)
- Proteus 8 Professional (Simulation)

## Files Included
- `digitalclock3.c` – Main embedded C source code
- `digitalclock-2(RealTime).pdsprj` – Proteus simulation file
- `digital_clock_simulation.mp4` – Screenshot of simulation result (optional)

## Notes
- No external RTC module used — purely MCU-based timekeeping
- Delays are software-generated (may drift slightly)
- Code is modular and customizable for time format or LED brightness
- The initialization/starting time needs to be user input


