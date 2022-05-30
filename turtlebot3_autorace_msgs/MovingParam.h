#ifndef _ROS_turtlebot3_autorace_msgs_MovingParam_h
#define _ROS_turtlebot3_autorace_msgs_MovingParam_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace turtlebot3_autorace_msgs
{

  class MovingParam : public ros::Msg
  {
    public:
      typedef uint8_t _moving_type_type;
      _moving_type_type moving_type;
      typedef float _moving_value_angular_type;
      _moving_value_angular_type moving_value_angular;
      typedef float _moving_value_linear_type;
      _moving_value_linear_type moving_value_linear;
      enum { MOVING_TYPE_IDLE =  0 };
      enum { MOVING_TYPE_LEFT =  1 };
      enum { MOVING_TYPE_RIGHT =  2 };
      enum { MOVING_TYPE_FORWARD =  3 };
      enum { MOVING_TYPE_BACKWARD =  4 };

    MovingParam():
      moving_type(0),
      moving_value_angular(0),
      moving_value_linear(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->moving_type >> (8 * 0)) & 0xFF;
      offset += sizeof(this->moving_type);
      union {
        float real;
        uint32_t base;
      } u_moving_value_angular;
      u_moving_value_angular.real = this->moving_value_angular;
      *(outbuffer + offset + 0) = (u_moving_value_angular.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_moving_value_angular.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_moving_value_angular.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_moving_value_angular.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->moving_value_angular);
      union {
        float real;
        uint32_t base;
      } u_moving_value_linear;
      u_moving_value_linear.real = this->moving_value_linear;
      *(outbuffer + offset + 0) = (u_moving_value_linear.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_moving_value_linear.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_moving_value_linear.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_moving_value_linear.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->moving_value_linear);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->moving_type =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->moving_type);
      union {
        float real;
        uint32_t base;
      } u_moving_value_angular;
      u_moving_value_angular.base = 0;
      u_moving_value_angular.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_moving_value_angular.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_moving_value_angular.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_moving_value_angular.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->moving_value_angular = u_moving_value_angular.real;
      offset += sizeof(this->moving_value_angular);
      union {
        float real;
        uint32_t base;
      } u_moving_value_linear;
      u_moving_value_linear.base = 0;
      u_moving_value_linear.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_moving_value_linear.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_moving_value_linear.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_moving_value_linear.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->moving_value_linear = u_moving_value_linear.real;
      offset += sizeof(this->moving_value_linear);
     return offset;
    }

    virtual const char * getType() override { return "turtlebot3_autorace_msgs/MovingParam"; };
    virtual const char * getMD5() override { return "603d953881321b4196ac96fba411105f"; };

  };

}
#endif
