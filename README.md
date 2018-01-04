# XDCgen
Generate Vivado XDC files from a CSV file.

## Overview
XDCgen automates the task of mapping the signals in a design to pins on a breakout board. The program takes as input a list of signal names (with support for indexed busses) and pin names to be created as a CSV file, and then outputs a properly-formatted XDC file. The generated XDC file can then be imported into Vivado.

Currently the only board supported is Krtkl's Snickerdoodle, but support for other boards will likely be added in the future. In the meantime, if you would like to add support for your favorite development board, you can modify Pinmap.h and file a pull request.

## Usage

`xdcgen <input>.csv <output>.xdc`

## Examples

Example CSV file:
![Example CSV file](https://github.com/cmcquinn/XDCgen/raw/master/csv-example.png "Example CSV file")

Generated XDC file in Vivado:
![Generated XDC file](https://github.com/cmcquinn/XDCgen/raw/master/xdc-example.png "Generated XDC file")
