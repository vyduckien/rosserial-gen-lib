/*
 * mainpp.h
 *
 *  Created on: 2018/01/17
 *      Author: yoneken
 */

#ifndef MAINPP_H_
#define MAINPP_H_

#ifdef __cplusplus
 extern "C" {
#endif

 struct Wheel{
 	float u_prev,e,e_prev,e_prev_prev,P_control,I_control,D_control,v,u;
};

extern struct Wheel m1,m2;
extern float Setpoint_value_m1,Setpoint_value_m2;
extern float Kp_m1,Kp_m2,Ki_m1,Ki_m2,Kd_m1,Kd_m2;

void setup(void);
void loop(void);

#ifdef __cplusplus
}
#endif


#endif /* MAINPP_H_ */
