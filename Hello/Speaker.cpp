#include "Speaker.h"
#include <Eigen/Core>
#include <yaml-cpp/yaml.h>

using namespace Hello;
using namespace std;
using namespace Eigen;

namespace Hello {
  void Speaker::sayHello() {
    Vector3d vec;
  	Vector3d pe, pwgs;
    Vector3d pwgs_true;

    Matrix3d dpwgs_dpe;
    Matrix3d dpwgs_dpe_true;

    YAML::Node node;

    pe << -6378137.0, 50000.0, 50000.0;
    pwgs_true << 0.0078917029111,
            3.1337535344553,
            393.2725992470132;
    dpwgs_dpe_true << 1.245515045267264753e-09, -9.764036801307440783e-12, 1.578274391473427629e-07,
              -1.229011115100320239e-09, -1.567759597698170637e-07,                    0,
              -0.9999381346856921482, 0.007838873319485628599, 0.007891699891274583933;

    cout << "Hello, world!\nDisclaimer: The program uses cppzmq from vcpkg library as its dependencies";
  }
}
