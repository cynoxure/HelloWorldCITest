#include "Speaker.h"
#include <Eigen/Core>

using namespace Hello;
using namespace std;
using namespace Eigen;

namespace Hello {
  void Speaker::sayHello() {
    Vector3d vec;
    cout << "Hello, world!\nDisclaimer: The program uses cppzmq from vcpkg library as its dependencies";
  }
}
