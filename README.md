
# foobar

[![Build Status](https://travis-ci.org/dakl/foobar.svg?branch=master)](https://travis-ci.org/dakl/foobar)

A repo to test things out.

This is hooked up to display the build status on a Neopixel strip hooked up to a particle core.

POST requests are sent by travis in the steps `before_install` (turn yellow), `after_success` (turn green) and `after_failure` (turn red). Further work is needed to support multiple repos on the different diodes in the strip.

# firmware

`photon-firmware.ino` contains the firmware for the particle core. This is also compatible with the particle photon.
