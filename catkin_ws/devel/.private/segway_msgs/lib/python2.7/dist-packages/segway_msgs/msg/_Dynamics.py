# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from segway_msgs/Dynamics.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class Dynamics(genpy.Message):
  _md5sum = "0b23bce5066773fe1ee204d2d2317ad4"
  _type = "segway_msgs/Dynamics"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """Header header
float32 x_vel_target_mps
float32 y_vel_target_mps
float32 yaw_rate_target_rps
float32 vel_limit_mps
float32 yaw_rate_limit_rps
float32[] wheel_vel_mps
float32[] wheel_pos_m
float32 x_accel_mps2
float32 y_accel_mps2
float32 yaw_accel_mps2
float32 yaw_angle_rad
float32 odom_yaw_angle_rad

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  __slots__ = ['header','x_vel_target_mps','y_vel_target_mps','yaw_rate_target_rps','vel_limit_mps','yaw_rate_limit_rps','wheel_vel_mps','wheel_pos_m','x_accel_mps2','y_accel_mps2','yaw_accel_mps2','yaw_angle_rad','odom_yaw_angle_rad']
  _slot_types = ['std_msgs/Header','float32','float32','float32','float32','float32','float32[]','float32[]','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,x_vel_target_mps,y_vel_target_mps,yaw_rate_target_rps,vel_limit_mps,yaw_rate_limit_rps,wheel_vel_mps,wheel_pos_m,x_accel_mps2,y_accel_mps2,yaw_accel_mps2,yaw_angle_rad,odom_yaw_angle_rad

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Dynamics, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.x_vel_target_mps is None:
        self.x_vel_target_mps = 0.
      if self.y_vel_target_mps is None:
        self.y_vel_target_mps = 0.
      if self.yaw_rate_target_rps is None:
        self.yaw_rate_target_rps = 0.
      if self.vel_limit_mps is None:
        self.vel_limit_mps = 0.
      if self.yaw_rate_limit_rps is None:
        self.yaw_rate_limit_rps = 0.
      if self.wheel_vel_mps is None:
        self.wheel_vel_mps = []
      if self.wheel_pos_m is None:
        self.wheel_pos_m = []
      if self.x_accel_mps2 is None:
        self.x_accel_mps2 = 0.
      if self.y_accel_mps2 is None:
        self.y_accel_mps2 = 0.
      if self.yaw_accel_mps2 is None:
        self.yaw_accel_mps2 = 0.
      if self.yaw_angle_rad is None:
        self.yaw_angle_rad = 0.
      if self.odom_yaw_angle_rad is None:
        self.odom_yaw_angle_rad = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.x_vel_target_mps = 0.
      self.y_vel_target_mps = 0.
      self.yaw_rate_target_rps = 0.
      self.vel_limit_mps = 0.
      self.yaw_rate_limit_rps = 0.
      self.wheel_vel_mps = []
      self.wheel_pos_m = []
      self.x_accel_mps2 = 0.
      self.y_accel_mps2 = 0.
      self.yaw_accel_mps2 = 0.
      self.yaw_angle_rad = 0.
      self.odom_yaw_angle_rad = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_5f().pack(_x.x_vel_target_mps, _x.y_vel_target_mps, _x.yaw_rate_target_rps, _x.vel_limit_mps, _x.yaw_rate_limit_rps))
      length = len(self.wheel_vel_mps)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.Struct(pattern).pack(*self.wheel_vel_mps))
      length = len(self.wheel_pos_m)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.Struct(pattern).pack(*self.wheel_pos_m))
      _x = self
      buff.write(_get_struct_5f().pack(_x.x_accel_mps2, _x.y_accel_mps2, _x.yaw_accel_mps2, _x.yaw_angle_rad, _x.odom_yaw_angle_rad))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 20
      (_x.x_vel_target_mps, _x.y_vel_target_mps, _x.yaw_rate_target_rps, _x.vel_limit_mps, _x.yaw_rate_limit_rps,) = _get_struct_5f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.wheel_vel_mps = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.wheel_pos_m = s.unpack(str[start:end])
      _x = self
      start = end
      end += 20
      (_x.x_accel_mps2, _x.y_accel_mps2, _x.yaw_accel_mps2, _x.yaw_angle_rad, _x.odom_yaw_angle_rad,) = _get_struct_5f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_5f().pack(_x.x_vel_target_mps, _x.y_vel_target_mps, _x.yaw_rate_target_rps, _x.vel_limit_mps, _x.yaw_rate_limit_rps))
      length = len(self.wheel_vel_mps)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.wheel_vel_mps.tostring())
      length = len(self.wheel_pos_m)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.wheel_pos_m.tostring())
      _x = self
      buff.write(_get_struct_5f().pack(_x.x_accel_mps2, _x.y_accel_mps2, _x.yaw_accel_mps2, _x.yaw_angle_rad, _x.odom_yaw_angle_rad))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 20
      (_x.x_vel_target_mps, _x.y_vel_target_mps, _x.yaw_rate_target_rps, _x.vel_limit_mps, _x.yaw_rate_limit_rps,) = _get_struct_5f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.wheel_vel_mps = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.wheel_pos_m = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      _x = self
      start = end
      end += 20
      (_x.x_accel_mps2, _x.y_accel_mps2, _x.yaw_accel_mps2, _x.yaw_angle_rad, _x.odom_yaw_angle_rad,) = _get_struct_5f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_5f = None
def _get_struct_5f():
    global _struct_5f
    if _struct_5f is None:
        _struct_5f = struct.Struct("<5f")
    return _struct_5f
