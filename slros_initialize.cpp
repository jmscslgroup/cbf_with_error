#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "cbf_with_error";

// For Block cbf_with_error/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_cbf_with_error_std_msgs_Float64> Sub_cbf_with_error_429;

// For Block cbf_with_error/Subscribe4
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_cbf_with_error_geometry_msgs_Twist> Sub_cbf_with_error_430;

// For Block cbf_with_error/Subscribe5
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_cbf_with_error_geometry_msgs_Twist> Sub_cbf_with_error_431;

// For Block cbf_with_error/Subscribe6
SimulinkSubscriber<std_msgs::Float64, SL_Bus_cbf_with_error_std_msgs_Float64> Sub_cbf_with_error_476;

// For Block cbf_with_error/Subscribe7
SimulinkSubscriber<std_msgs::Bool, SL_Bus_cbf_with_error_std_msgs_Bool> Sub_cbf_with_error_481;

// For Block cbf_with_error/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_cbf_with_error_std_msgs_Float64> Pub_cbf_with_error_401;

// For Block cbf_with_error/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_cbf_with_error_geometry_msgs_Twist> Pub_cbf_with_error_520;

// For Block cbf_with_error/cbf_filter/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_with_error_447;

// For Block cbf_with_error/cbf_filter/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_with_error_448;

// For Block cbf_with_error/cbf_filter/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_with_error_449;

// For Block cbf_with_error/cbf_filter/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_with_error_450;

// For Block cbf_with_error/cbf_filter/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_with_error_463;

// For Block cbf_with_error/cbf_filter/Get Parameter6
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_with_error_465;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

