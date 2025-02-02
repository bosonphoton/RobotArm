// Auto-generated. Do not edit!

// (in-package plan_execution.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let AspFluent = require('./AspFluent.js');

//-----------------------------------------------------------

class ExecutePlanFeedback {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.event_type = null;
      this.plan = null;
    }
    else {
      if (initObj.hasOwnProperty('event_type')) {
        this.event_type = initObj.event_type
      }
      else {
        this.event_type = 0;
      }
      if (initObj.hasOwnProperty('plan')) {
        this.plan = initObj.plan
      }
      else {
        this.plan = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ExecutePlanFeedback
    // Serialize message field [event_type]
    bufferOffset = _serializer.int32(obj.event_type, buffer, bufferOffset);
    // Serialize message field [plan]
    // Serialize the length for message field [plan]
    bufferOffset = _serializer.uint32(obj.plan.length, buffer, bufferOffset);
    obj.plan.forEach((val) => {
      bufferOffset = AspFluent.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ExecutePlanFeedback
    let len;
    let data = new ExecutePlanFeedback(null);
    // Deserialize message field [event_type]
    data.event_type = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [plan]
    // Deserialize array length for message field [plan]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.plan = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.plan[i] = AspFluent.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.plan.forEach((val) => {
      length += AspFluent.getMessageSize(val);
    });
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'plan_execution/ExecutePlanFeedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '94ff676cd2eeea6adc43ba9737fa2e30';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    int32 PLAN_CHANGED_EVENT = 1
    int32 ACTION_STARTED_EVENT = 2
    int32 ACTION_ENDED_EVENT = 3
    int32 event_type
    AspFluent[] plan
    
    
    ================================================================================
    MSG: plan_execution/AspFluent
    string name
    string[] variables
    uint32 timeStep
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ExecutePlanFeedback(null);
    if (msg.event_type !== undefined) {
      resolved.event_type = msg.event_type;
    }
    else {
      resolved.event_type = 0
    }

    if (msg.plan !== undefined) {
      resolved.plan = new Array(msg.plan.length);
      for (let i = 0; i < resolved.plan.length; ++i) {
        resolved.plan[i] = AspFluent.Resolve(msg.plan[i]);
      }
    }
    else {
      resolved.plan = []
    }

    return resolved;
    }
};

// Constants for message
ExecutePlanFeedback.Constants = {
  PLAN_CHANGED_EVENT: 1,
  ACTION_STARTED_EVENT: 2,
  ACTION_ENDED_EVENT: 3,
}

module.exports = ExecutePlanFeedback;
