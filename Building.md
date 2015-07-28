# Building #

The GNU Radio Blocks were tested on Ubuntu 11.04 and Ubuntu 12.04.

  1. Get the source code:
    * svn checkout http://sdr-experience.googlecode.com/svn/trunk/ sdr-experience-read-only
  1. Run CMAKE builder:
    * mkdir build
    * cd build
    * cmake ../sdr-experience-read-only/gnuradio-blocks/gr-spectrum-sensing/
  1. Make and Install it:
    * make
    * sudo make install
    * sudo ldconfig
  1. Open the GNU Radio Companion and look for new blocks into Spectrum Sensing category. The main block is called Spectrum Sensing Block.