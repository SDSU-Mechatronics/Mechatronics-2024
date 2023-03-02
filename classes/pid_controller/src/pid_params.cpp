/*
 * @author Conner Sommerfield - Zix on Discord for questions
 * Took json file written by Tristan and translated to C++ plus
 * changed some things.
 * These are PID parameters to tune the PID on initialization
 * Read about k_p, k_i, and k_d in the pid_controller.cpp file
 * Use MAX and MIN values to clamp our values to a reasonable range
 */


#include "pid_params.hpp"
#define MAX .3
#define MIN -.3

/* 
    To make sure motor isn't running at maximum value, we want to cap our ctrl_val min/max. You can do this changing the macros up above to 
    your desired cap value.

    k_p value should be set to a very low value for orientation to keep from always blasting the motors
*/

PID_Params::PID_Params()


{
    this->yaw = 
    {
        {"kp", 0.004},
        {"ki", 0.005},
        {"kd", 0.002},
        // {"ctrl_val_offset", 10.0},
        {"ctrl_val_max", MAX},
        {"ctrl_val_min", MIN},
        {"i_max", MAX},
        {"i_min", MIN}
    };

    this->pitch = 
    {
        {"kp", 0.004},
        {"ki", 0.005},
        {"kd", 0.002},
        // {"ctrl_val_offset", 15.0},
        {"ctrl_val_max", MAX},
        {"ctrl_val_min", MIN},
        {"i_max", MAX},
        {"i_min", MIN}
    };
    

    this->roll = 
    {
        {"kp", 0.004},
        {"ki", 0.005},
        {"kd", 0.002},
        // {"ctrl_val_offset", 0.0},
        {"ctrl_val_max", MAX},
        {"ctrl_val_min", MIN},
        {"i_max", MAX},
        {"i_min", MIN}
    };
    
    this->x_pos =
    {
        {"kp", 0.25},
        {"ki", 0.01},
        {"kd", 0.01},
        // {"ctrl_val_offset", 0.0},
        {"ctrl_val_max", MAX},
        {"ctrl_val_min", MIN},
        {"i_max", MAX},
        {"i_min", MIN}
    };


    this->y_pos = 
    {
        {"kp", 0.25},
        {"ki", 0.01},
        {"kd", 0.01},
        // {"ctrl_val_offset", 16.0},
        {"ctrl_val_max", MAX},
        {"ctrl_val_min", MIN},
        {"i_max", MAX},
        {"i_min", MIN}
    };

    this->z_pos =
    {
        {"kp", 0.25},
        {"ki", 0.01},
        {"kd", 0.01},
        // {"ctrl_val_offset", 20.0},
        {"ctrl_val_max", MAX},
        {"ctrl_val_min", MIN},
        {"i_max", MAX},
        {"i_min", MIN}
    };

    this->pid_params = 
    {
        {"roll",  this->roll},
        {"pitch", this->pitch},
        {"yaw",   this->yaw},
        {"x_pos", this->x_pos},
        {"y_pos", this->y_pos},
        {"z_pos", this->z_pos},
        {"x_vel", this->x_vel},
        {"y_vel", this->y_vel},
        {"z_vel", this->z_vel},
    };
}

map<string, map<string, float>> PID_Params::get_pid_params()
    {
        return this->pid_params;
    }

