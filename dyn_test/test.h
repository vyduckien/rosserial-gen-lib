#ifndef _ROS_dyn_test_test_h
#define _ROS_dyn_test_test_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace dyn_test
{

  class test : public ros::Msg
  {
    public:
      typedef int32_t _foo_type;
      _foo_type foo;

    test():
      foo(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_foo;
      u_foo.real = this->foo;
      *(outbuffer + offset + 0) = (u_foo.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_foo.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_foo.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_foo.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->foo);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_foo;
      u_foo.base = 0;
      u_foo.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_foo.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_foo.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_foo.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->foo = u_foo.real;
      offset += sizeof(this->foo);
     return offset;
    }

    virtual const char * getType() override { return "dyn_test/test"; };
    virtual const char * getMD5() override { return "e9272ae06deed5cb5071ef624381b158"; };

  };

}
#endif
