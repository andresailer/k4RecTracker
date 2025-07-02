// delphes
#include "TrackCovariance/TrkUtil.h"
// ROOT header
#include <TVector.h>
// std
#include <iostream>

int main() {
  const TrkUtil m_delphesTrkUtil;
  TVectorD delphes_track(5);
  double track_length = m_delphesTrkUtil.TrkLen(delphes_track);
  std::cout << track_length  << std::endl;
  return 0;
}
