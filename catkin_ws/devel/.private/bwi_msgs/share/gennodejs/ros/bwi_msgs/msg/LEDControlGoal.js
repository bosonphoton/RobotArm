// Auto-generated. Do not edit!

// (in-package bwi_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let LEDAnimations = require('./LEDAnimations.js');

//-----------------------------------------------------------

class LEDControlGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.type = null;
      this.timeout = null;
    }
    else {
      if (initObj.hasOwnProperty('type')) {
        this.type = initObj.type
      }
      else {
        this.type = new LEDAnimations();
      }
      if (initObj.hasOwnProperty('timeout')) {
        this.timeout = initObj.timeout
      }
      else {
        this.timeout = {secs: 0, nsecs: 0};
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type LEDControlGoal
    // Serialize message field [type]
    bufferOffset = LEDAnimations.serialize(obj.type, buffer, bufferOffset);
    // Serialize message field [timeout]
    bufferOffset = _serializer.duration(obj.timeout, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type LEDControlGoal
    let len;
    let data = new LEDControlGoal(null);
    // Deserialize message field [type]
    data.type = LEDAnimations.deserialize(buffer, bufferOffset);
    // Deserialize message field [timeout]
    data.timeout = _deserializer.duration(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 9;
  }

  static datatype() {
    // Returns string type for a message object
    return 'bwi_msgs/LEDControlGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7c6f8d9418a5dae69a9e986bc8673f77';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #goal definition
    bwi_msgs/LEDAnimations type
    duration timeout
    
    ================================================================================
    MSG: bwi_msgs/LEDAnimations
    # LED Animations
    
    # Action Variables
    uint8 LEFT_TURN = 1
    uint8 RIGHT_TURN = 2
    uint8 REVERSE = 3
    uint8 BLOCKED = 4
    uint8 UP = 5
    uint8 DOWN = 6
    uint8 NEED_ASSIST = 7
    
    # Selects which animation to execute
    
    uint8 led_animations
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new LEDControlGoal(null);
    if (msg.type !== undefined) {
      resolved.type = LEDAnimations.Resolve(msg.type)
    }
    else {
      resolved.type = new LEDAnimations()
    }

    if (msg.timeout !== undefined) {
      resolved.timeout = msg.timeout;
    }
    else {
      resolved.timeout = {secs: 0, nsecs: 0}
    }

    return resolved;
    }
};

module.exports = LEDControlGoal;
