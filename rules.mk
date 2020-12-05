# MCU settings
MCU = atmega32u4
F_CPU = 16000000

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build options
WAIT_FOR_USB = yes			# Wait to establish USb connection before startup
BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes 		# Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # USB Nkey Rollover
AUDIO_ENABLE = no			# Audio subsystem
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality on B7 by default
RGBLIGHT_ENABLE = yes 	    # Enable keyboard RGB underglow
MIDI_ENABLE = no            # MIDI support
RAW_ENABLE = no				# Idk what this is, but ima disable it for now
VIRTSER_ENABLE = no			# Also don't know what this is
UNICODE_ENABLE = no         # Unicode
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
ENCODER_ENABLE = yes		# Rotary encoders
OLED_DRIVER_ENABLE = yes	# OLED display
WPM_ENABLE = yes			# calculate WPM rolling average
FAUXCLICKY_ENABLE = no		# Use buzzer to emulate clicky switches
HD44780_ENABLE = no 		# Enable support for HD44780 based LCDs
