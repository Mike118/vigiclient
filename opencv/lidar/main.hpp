#define WIDTH 640
#define HEIGHT 480
#define FPS 30

#define DIRZ -1

#define LIDARX 0
#define LIDARY 0
#define LIDARXMIN -50
#define LIDARXMAX 50
#define LIDARYMIN -50
#define LIDARYMAX 50

#define EPSILON 50.0
#define NBPOINTSMIN 5
#define DISTMARGIN 3

#define VXDIV 10
#define VYDIV 10
#define VZMUL 10

#define MAPDIVMIN 5
#define MAPDIVMAX 50

enum {
 SELECTNONE,
 SELECTROBOT,
 SELECTROBOTBEAMS,
 SELECTMAP
};

const std::vector<cv::Point> robotIcon = {
 cv::Point(-30, -40),
 cv::Point{30, -40},
 cv::Point(30, 40),
 cv::Point(0, 60),
 cv::Point{-30, 40}
};

int width;
int height;
int fps;

volatile bool run = true;

RemoteFrame remoteFrame;
TelemetryFrame telemetryFrame;

RTIMU_DATA imuData;
