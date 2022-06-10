#ifndef _ROS_pid_plot_Num_h
#define _ROS_pid_plot_Num_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace pid_plot
{

  class Num : public ros::Msg
  {
    public:
      typedef float _output_rpm_m1_type;
      _output_rpm_m1_type output_rpm_m1;
      typedef float _output_controller_m1_type;
      _output_controller_m1_type output_controller_m1;
      typedef float _input_setpoint_m1_type;
      _input_setpoint_m1_type input_setpoint_m1;
      typedef float _input_Kp_m1_type;
      _input_Kp_m1_type input_Kp_m1;
      typedef float _input_Ki_m1_type;
      _input_Ki_m1_type input_Ki_m1;
      typedef float _input_Kd_m1_type;
      _input_Kd_m1_type input_Kd_m1;
      typedef float _output_rpm_m2_type;
      _output_rpm_m2_type output_rpm_m2;
      typedef float _output_controller_m2_type;
      _output_controller_m2_type output_controller_m2;
      typedef float _input_setpoint_m2_type;
      _input_setpoint_m2_type input_setpoint_m2;
      typedef float _input_Kp_m2_type;
      _input_Kp_m2_type input_Kp_m2;
      typedef float _input_Ki_m2_type;
      _input_Ki_m2_type input_Ki_m2;
      typedef float _input_Kd_m2_type;
      _input_Kd_m2_type input_Kd_m2;

    Num():
      output_rpm_m1(0),
      output_controller_m1(0),
      input_setpoint_m1(0),
      input_Kp_m1(0),
      input_Ki_m1(0),
      input_Kd_m1(0),
      output_rpm_m2(0),
      output_controller_m2(0),
      input_setpoint_m2(0),
      input_Kp_m2(0),
      input_Ki_m2(0),
      input_Kd_m2(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_output_rpm_m1;
      u_output_rpm_m1.real = this->output_rpm_m1;
      *(outbuffer + offset + 0) = (u_output_rpm_m1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_output_rpm_m1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_output_rpm_m1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_output_rpm_m1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->output_rpm_m1);
      union {
        float real;
        uint32_t base;
      } u_output_controller_m1;
      u_output_controller_m1.real = this->output_controller_m1;
      *(outbuffer + offset + 0) = (u_output_controller_m1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_output_controller_m1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_output_controller_m1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_output_controller_m1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->output_controller_m1);
      union {
        float real;
        uint32_t base;
      } u_input_setpoint_m1;
      u_input_setpoint_m1.real = this->input_setpoint_m1;
      *(outbuffer + offset + 0) = (u_input_setpoint_m1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_input_setpoint_m1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_input_setpoint_m1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_input_setpoint_m1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->input_setpoint_m1);
      union {
        float real;
        uint32_t base;
      } u_input_Kp_m1;
      u_input_Kp_m1.real = this->input_Kp_m1;
      *(outbuffer + offset + 0) = (u_input_Kp_m1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_input_Kp_m1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_input_Kp_m1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_input_Kp_m1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->input_Kp_m1);
      union {
        float real;
        uint32_t base;
      } u_input_Ki_m1;
      u_input_Ki_m1.real = this->input_Ki_m1;
      *(outbuffer + offset + 0) = (u_input_Ki_m1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_input_Ki_m1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_input_Ki_m1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_input_Ki_m1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->input_Ki_m1);
      union {
        float real;
        uint32_t base;
      } u_input_Kd_m1;
      u_input_Kd_m1.real = this->input_Kd_m1;
      *(outbuffer + offset + 0) = (u_input_Kd_m1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_input_Kd_m1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_input_Kd_m1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_input_Kd_m1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->input_Kd_m1);
      union {
        float real;
        uint32_t base;
      } u_output_rpm_m2;
      u_output_rpm_m2.real = this->output_rpm_m2;
      *(outbuffer + offset + 0) = (u_output_rpm_m2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_output_rpm_m2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_output_rpm_m2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_output_rpm_m2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->output_rpm_m2);
      union {
        float real;
        uint32_t base;
      } u_output_controller_m2;
      u_output_controller_m2.real = this->output_controller_m2;
      *(outbuffer + offset + 0) = (u_output_controller_m2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_output_controller_m2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_output_controller_m2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_output_controller_m2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->output_controller_m2);
      union {
        float real;
        uint32_t base;
      } u_input_setpoint_m2;
      u_input_setpoint_m2.real = this->input_setpoint_m2;
      *(outbuffer + offset + 0) = (u_input_setpoint_m2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_input_setpoint_m2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_input_setpoint_m2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_input_setpoint_m2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->input_setpoint_m2);
      union {
        float real;
        uint32_t base;
      } u_input_Kp_m2;
      u_input_Kp_m2.real = this->input_Kp_m2;
      *(outbuffer + offset + 0) = (u_input_Kp_m2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_input_Kp_m2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_input_Kp_m2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_input_Kp_m2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->input_Kp_m2);
      union {
        float real;
        uint32_t base;
      } u_input_Ki_m2;
      u_input_Ki_m2.real = this->input_Ki_m2;
      *(outbuffer + offset + 0) = (u_input_Ki_m2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_input_Ki_m2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_input_Ki_m2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_input_Ki_m2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->input_Ki_m2);
      union {
        float real;
        uint32_t base;
      } u_input_Kd_m2;
      u_input_Kd_m2.real = this->input_Kd_m2;
      *(outbuffer + offset + 0) = (u_input_Kd_m2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_input_Kd_m2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_input_Kd_m2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_input_Kd_m2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->input_Kd_m2);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_output_rpm_m1;
      u_output_rpm_m1.base = 0;
      u_output_rpm_m1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_output_rpm_m1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_output_rpm_m1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_output_rpm_m1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->output_rpm_m1 = u_output_rpm_m1.real;
      offset += sizeof(this->output_rpm_m1);
      union {
        float real;
        uint32_t base;
      } u_output_controller_m1;
      u_output_controller_m1.base = 0;
      u_output_controller_m1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_output_controller_m1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_output_controller_m1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_output_controller_m1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->output_controller_m1 = u_output_controller_m1.real;
      offset += sizeof(this->output_controller_m1);
      union {
        float real;
        uint32_t base;
      } u_input_setpoint_m1;
      u_input_setpoint_m1.base = 0;
      u_input_setpoint_m1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_input_setpoint_m1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_input_setpoint_m1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_input_setpoint_m1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->input_setpoint_m1 = u_input_setpoint_m1.real;
      offset += sizeof(this->input_setpoint_m1);
      union {
        float real;
        uint32_t base;
      } u_input_Kp_m1;
      u_input_Kp_m1.base = 0;
      u_input_Kp_m1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_input_Kp_m1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_input_Kp_m1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_input_Kp_m1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->input_Kp_m1 = u_input_Kp_m1.real;
      offset += sizeof(this->input_Kp_m1);
      union {
        float real;
        uint32_t base;
      } u_input_Ki_m1;
      u_input_Ki_m1.base = 0;
      u_input_Ki_m1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_input_Ki_m1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_input_Ki_m1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_input_Ki_m1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->input_Ki_m1 = u_input_Ki_m1.real;
      offset += sizeof(this->input_Ki_m1);
      union {
        float real;
        uint32_t base;
      } u_input_Kd_m1;
      u_input_Kd_m1.base = 0;
      u_input_Kd_m1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_input_Kd_m1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_input_Kd_m1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_input_Kd_m1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->input_Kd_m1 = u_input_Kd_m1.real;
      offset += sizeof(this->input_Kd_m1);
      union {
        float real;
        uint32_t base;
      } u_output_rpm_m2;
      u_output_rpm_m2.base = 0;
      u_output_rpm_m2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_output_rpm_m2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_output_rpm_m2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_output_rpm_m2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->output_rpm_m2 = u_output_rpm_m2.real;
      offset += sizeof(this->output_rpm_m2);
      union {
        float real;
        uint32_t base;
      } u_output_controller_m2;
      u_output_controller_m2.base = 0;
      u_output_controller_m2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_output_controller_m2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_output_controller_m2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_output_controller_m2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->output_controller_m2 = u_output_controller_m2.real;
      offset += sizeof(this->output_controller_m2);
      union {
        float real;
        uint32_t base;
      } u_input_setpoint_m2;
      u_input_setpoint_m2.base = 0;
      u_input_setpoint_m2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_input_setpoint_m2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_input_setpoint_m2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_input_setpoint_m2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->input_setpoint_m2 = u_input_setpoint_m2.real;
      offset += sizeof(this->input_setpoint_m2);
      union {
        float real;
        uint32_t base;
      } u_input_Kp_m2;
      u_input_Kp_m2.base = 0;
      u_input_Kp_m2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_input_Kp_m2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_input_Kp_m2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_input_Kp_m2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->input_Kp_m2 = u_input_Kp_m2.real;
      offset += sizeof(this->input_Kp_m2);
      union {
        float real;
        uint32_t base;
      } u_input_Ki_m2;
      u_input_Ki_m2.base = 0;
      u_input_Ki_m2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_input_Ki_m2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_input_Ki_m2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_input_Ki_m2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->input_Ki_m2 = u_input_Ki_m2.real;
      offset += sizeof(this->input_Ki_m2);
      union {
        float real;
        uint32_t base;
      } u_input_Kd_m2;
      u_input_Kd_m2.base = 0;
      u_input_Kd_m2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_input_Kd_m2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_input_Kd_m2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_input_Kd_m2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->input_Kd_m2 = u_input_Kd_m2.real;
      offset += sizeof(this->input_Kd_m2);
     return offset;
    }

    virtual const char * getType() override { return "pid_plot/Num"; };
    virtual const char * getMD5() override { return "5253f53301a197ebd2a3c136dfdc866c"; };

  };

}
#endif
