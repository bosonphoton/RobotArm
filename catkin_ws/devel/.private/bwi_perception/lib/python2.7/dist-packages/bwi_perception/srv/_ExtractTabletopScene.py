# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from bwi_perception/ExtractTabletopSceneRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import sensor_msgs.msg
import std_msgs.msg

class ExtractTabletopSceneRequest(genpy.Message):
  _md5sum = "96cec5374164b3b3d1d7ef5d7628a7ed"
  _type = "bwi_perception/ExtractTabletopSceneRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """sensor_msgs/PointCloud2 cloud

================================================================================
MSG: sensor_msgs/PointCloud2
# This message holds a collection of N-dimensional points, which may
# contain additional information such as normals, intensity, etc. The
# point data is stored as a binary blob, its layout described by the
# contents of the "fields" array.

# The point cloud data may be organized 2d (image-like) or 1d
# (unordered). Point clouds organized as 2d images may be produced by
# camera depth sensors such as stereo or time-of-flight.

# Time of sensor data acquisition, and the coordinate frame ID (for 3d
# points).
Header header

# 2D structure of the point cloud. If the cloud is unordered, height is
# 1 and width is the length of the point cloud.
uint32 height
uint32 width

# Describes the channels and their layout in the binary data blob.
PointField[] fields

bool    is_bigendian # Is this data bigendian?
uint32  point_step   # Length of a point in bytes
uint32  row_step     # Length of a row in bytes
uint8[] data         # Actual point data, size is (row_step*height)

bool is_dense        # True if there are no invalid points

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

================================================================================
MSG: sensor_msgs/PointField
# This message holds the description of one point entry in the
# PointCloud2 message format.
uint8 INT8    = 1
uint8 UINT8   = 2
uint8 INT16   = 3
uint8 UINT16  = 4
uint8 INT32   = 5
uint8 UINT32  = 6
uint8 FLOAT32 = 7
uint8 FLOAT64 = 8

string name      # Name of field
uint32 offset    # Offset from start of point struct
uint8  datatype  # Datatype enumeration, see above
uint32 count     # How many elements in the field
"""
  __slots__ = ['cloud']
  _slot_types = ['sensor_msgs/PointCloud2']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       cloud

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ExtractTabletopSceneRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.cloud is None:
        self.cloud = sensor_msgs.msg.PointCloud2()
    else:
      self.cloud = sensor_msgs.msg.PointCloud2()

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
      buff.write(_get_struct_3I().pack(_x.cloud.header.seq, _x.cloud.header.stamp.secs, _x.cloud.header.stamp.nsecs))
      _x = self.cloud.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.cloud.height, _x.cloud.width))
      length = len(self.cloud.fields)
      buff.write(_struct_I.pack(length))
      for val1 in self.cloud.fields:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1
        buff.write(_get_struct_IBI().pack(_x.offset, _x.datatype, _x.count))
      _x = self
      buff.write(_get_struct_B2I().pack(_x.cloud.is_bigendian, _x.cloud.point_step, _x.cloud.row_step))
      _x = self.cloud.data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.Struct('<I%sB'%length).pack(length, *_x))
      else:
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.cloud.is_dense
      buff.write(_get_struct_B().pack(_x))
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
      if self.cloud is None:
        self.cloud = sensor_msgs.msg.PointCloud2()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.cloud.header.seq, _x.cloud.header.stamp.secs, _x.cloud.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.cloud.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.cloud.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.cloud.height, _x.cloud.width,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.cloud.fields = []
      for i in range(0, length):
        val1 = sensor_msgs.msg.PointField()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.name = str[start:end]
        _x = val1
        start = end
        end += 9
        (_x.offset, _x.datatype, _x.count,) = _get_struct_IBI().unpack(str[start:end])
        self.cloud.fields.append(val1)
      _x = self
      start = end
      end += 9
      (_x.cloud.is_bigendian, _x.cloud.point_step, _x.cloud.row_step,) = _get_struct_B2I().unpack(str[start:end])
      self.cloud.is_bigendian = bool(self.cloud.is_bigendian)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.cloud.data = str[start:end]
      start = end
      end += 1
      (self.cloud.is_dense,) = _get_struct_B().unpack(str[start:end])
      self.cloud.is_dense = bool(self.cloud.is_dense)
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
      buff.write(_get_struct_3I().pack(_x.cloud.header.seq, _x.cloud.header.stamp.secs, _x.cloud.header.stamp.nsecs))
      _x = self.cloud.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.cloud.height, _x.cloud.width))
      length = len(self.cloud.fields)
      buff.write(_struct_I.pack(length))
      for val1 in self.cloud.fields:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1
        buff.write(_get_struct_IBI().pack(_x.offset, _x.datatype, _x.count))
      _x = self
      buff.write(_get_struct_B2I().pack(_x.cloud.is_bigendian, _x.cloud.point_step, _x.cloud.row_step))
      _x = self.cloud.data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.Struct('<I%sB'%length).pack(length, *_x))
      else:
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.cloud.is_dense
      buff.write(_get_struct_B().pack(_x))
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
      if self.cloud is None:
        self.cloud = sensor_msgs.msg.PointCloud2()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.cloud.header.seq, _x.cloud.header.stamp.secs, _x.cloud.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.cloud.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.cloud.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.cloud.height, _x.cloud.width,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.cloud.fields = []
      for i in range(0, length):
        val1 = sensor_msgs.msg.PointField()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.name = str[start:end]
        _x = val1
        start = end
        end += 9
        (_x.offset, _x.datatype, _x.count,) = _get_struct_IBI().unpack(str[start:end])
        self.cloud.fields.append(val1)
      _x = self
      start = end
      end += 9
      (_x.cloud.is_bigendian, _x.cloud.point_step, _x.cloud.row_step,) = _get_struct_B2I().unpack(str[start:end])
      self.cloud.is_bigendian = bool(self.cloud.is_bigendian)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.cloud.data = str[start:end]
      start = end
      end += 1
      (self.cloud.is_dense,) = _get_struct_B().unpack(str[start:end])
      self.cloud.is_dense = bool(self.cloud.is_dense)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_B2I = None
def _get_struct_B2I():
    global _struct_B2I
    if _struct_B2I is None:
        _struct_B2I = struct.Struct("<B2I")
    return _struct_B2I
_struct_IBI = None
def _get_struct_IBI():
    global _struct_IBI
    if _struct_IBI is None:
        _struct_IBI = struct.Struct("<IBI")
    return _struct_IBI
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from bwi_perception/ExtractTabletopSceneResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import sensor_msgs.msg
import std_msgs.msg

class ExtractTabletopSceneResponse(genpy.Message):
  _md5sum = "63fb1944266fc7c39efe9e6ada4376ff"
  _type = "bwi_perception/ExtractTabletopSceneResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool is_plane_found
sensor_msgs/PointCloud2 cloud_plane
float32[4] cloud_plane_coef
sensor_msgs/PointCloud2[] cloud_clusters


================================================================================
MSG: sensor_msgs/PointCloud2
# This message holds a collection of N-dimensional points, which may
# contain additional information such as normals, intensity, etc. The
# point data is stored as a binary blob, its layout described by the
# contents of the "fields" array.

# The point cloud data may be organized 2d (image-like) or 1d
# (unordered). Point clouds organized as 2d images may be produced by
# camera depth sensors such as stereo or time-of-flight.

# Time of sensor data acquisition, and the coordinate frame ID (for 3d
# points).
Header header

# 2D structure of the point cloud. If the cloud is unordered, height is
# 1 and width is the length of the point cloud.
uint32 height
uint32 width

# Describes the channels and their layout in the binary data blob.
PointField[] fields

bool    is_bigendian # Is this data bigendian?
uint32  point_step   # Length of a point in bytes
uint32  row_step     # Length of a row in bytes
uint8[] data         # Actual point data, size is (row_step*height)

bool is_dense        # True if there are no invalid points

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

================================================================================
MSG: sensor_msgs/PointField
# This message holds the description of one point entry in the
# PointCloud2 message format.
uint8 INT8    = 1
uint8 UINT8   = 2
uint8 INT16   = 3
uint8 UINT16  = 4
uint8 INT32   = 5
uint8 UINT32  = 6
uint8 FLOAT32 = 7
uint8 FLOAT64 = 8

string name      # Name of field
uint32 offset    # Offset from start of point struct
uint8  datatype  # Datatype enumeration, see above
uint32 count     # How many elements in the field
"""
  __slots__ = ['is_plane_found','cloud_plane','cloud_plane_coef','cloud_clusters']
  _slot_types = ['bool','sensor_msgs/PointCloud2','float32[4]','sensor_msgs/PointCloud2[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       is_plane_found,cloud_plane,cloud_plane_coef,cloud_clusters

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ExtractTabletopSceneResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.is_plane_found is None:
        self.is_plane_found = False
      if self.cloud_plane is None:
        self.cloud_plane = sensor_msgs.msg.PointCloud2()
      if self.cloud_plane_coef is None:
        self.cloud_plane_coef = [0.] * 4
      if self.cloud_clusters is None:
        self.cloud_clusters = []
    else:
      self.is_plane_found = False
      self.cloud_plane = sensor_msgs.msg.PointCloud2()
      self.cloud_plane_coef = [0.] * 4
      self.cloud_clusters = []

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
      buff.write(_get_struct_B3I().pack(_x.is_plane_found, _x.cloud_plane.header.seq, _x.cloud_plane.header.stamp.secs, _x.cloud_plane.header.stamp.nsecs))
      _x = self.cloud_plane.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.cloud_plane.height, _x.cloud_plane.width))
      length = len(self.cloud_plane.fields)
      buff.write(_struct_I.pack(length))
      for val1 in self.cloud_plane.fields:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1
        buff.write(_get_struct_IBI().pack(_x.offset, _x.datatype, _x.count))
      _x = self
      buff.write(_get_struct_B2I().pack(_x.cloud_plane.is_bigendian, _x.cloud_plane.point_step, _x.cloud_plane.row_step))
      _x = self.cloud_plane.data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.Struct('<I%sB'%length).pack(length, *_x))
      else:
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.cloud_plane.is_dense
      buff.write(_get_struct_B().pack(_x))
      buff.write(_get_struct_4f().pack(*self.cloud_plane_coef))
      length = len(self.cloud_clusters)
      buff.write(_struct_I.pack(length))
      for val1 in self.cloud_clusters:
        _v1 = val1.header
        _x = _v1.seq
        buff.write(_get_struct_I().pack(_x))
        _v2 = _v1.stamp
        _x = _v2
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1
        buff.write(_get_struct_2I().pack(_x.height, _x.width))
        length = len(val1.fields)
        buff.write(_struct_I.pack(length))
        for val2 in val1.fields:
          _x = val2.name
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
          _x = val2
          buff.write(_get_struct_IBI().pack(_x.offset, _x.datatype, _x.count))
        _x = val1
        buff.write(_get_struct_B2I().pack(_x.is_bigendian, _x.point_step, _x.row_step))
        _x = val1.data
        length = len(_x)
        # - if encoded as a list instead, serialize as bytes instead of string
        if type(_x) in [list, tuple]:
          buff.write(struct.Struct('<I%sB'%length).pack(length, *_x))
        else:
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.is_dense
        buff.write(_get_struct_B().pack(_x))
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
      if self.cloud_plane is None:
        self.cloud_plane = sensor_msgs.msg.PointCloud2()
      if self.cloud_clusters is None:
        self.cloud_clusters = None
      end = 0
      _x = self
      start = end
      end += 13
      (_x.is_plane_found, _x.cloud_plane.header.seq, _x.cloud_plane.header.stamp.secs, _x.cloud_plane.header.stamp.nsecs,) = _get_struct_B3I().unpack(str[start:end])
      self.is_plane_found = bool(self.is_plane_found)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.cloud_plane.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.cloud_plane.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.cloud_plane.height, _x.cloud_plane.width,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.cloud_plane.fields = []
      for i in range(0, length):
        val1 = sensor_msgs.msg.PointField()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.name = str[start:end]
        _x = val1
        start = end
        end += 9
        (_x.offset, _x.datatype, _x.count,) = _get_struct_IBI().unpack(str[start:end])
        self.cloud_plane.fields.append(val1)
      _x = self
      start = end
      end += 9
      (_x.cloud_plane.is_bigendian, _x.cloud_plane.point_step, _x.cloud_plane.row_step,) = _get_struct_B2I().unpack(str[start:end])
      self.cloud_plane.is_bigendian = bool(self.cloud_plane.is_bigendian)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.cloud_plane.data = str[start:end]
      start = end
      end += 1
      (self.cloud_plane.is_dense,) = _get_struct_B().unpack(str[start:end])
      self.cloud_plane.is_dense = bool(self.cloud_plane.is_dense)
      start = end
      end += 16
      self.cloud_plane_coef = _get_struct_4f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.cloud_clusters = []
      for i in range(0, length):
        val1 = sensor_msgs.msg.PointCloud2()
        _v3 = val1.header
        start = end
        end += 4
        (_v3.seq,) = _get_struct_I().unpack(str[start:end])
        _v4 = _v3.stamp
        _x = _v4
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v3.frame_id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v3.frame_id = str[start:end]
        _x = val1
        start = end
        end += 8
        (_x.height, _x.width,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.fields = []
        for i in range(0, length):
          val2 = sensor_msgs.msg.PointField()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.name = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2.name = str[start:end]
          _x = val2
          start = end
          end += 9
          (_x.offset, _x.datatype, _x.count,) = _get_struct_IBI().unpack(str[start:end])
          val1.fields.append(val2)
        _x = val1
        start = end
        end += 9
        (_x.is_bigendian, _x.point_step, _x.row_step,) = _get_struct_B2I().unpack(str[start:end])
        val1.is_bigendian = bool(val1.is_bigendian)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        val1.data = str[start:end]
        start = end
        end += 1
        (val1.is_dense,) = _get_struct_B().unpack(str[start:end])
        val1.is_dense = bool(val1.is_dense)
        self.cloud_clusters.append(val1)
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
      buff.write(_get_struct_B3I().pack(_x.is_plane_found, _x.cloud_plane.header.seq, _x.cloud_plane.header.stamp.secs, _x.cloud_plane.header.stamp.nsecs))
      _x = self.cloud_plane.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.cloud_plane.height, _x.cloud_plane.width))
      length = len(self.cloud_plane.fields)
      buff.write(_struct_I.pack(length))
      for val1 in self.cloud_plane.fields:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1
        buff.write(_get_struct_IBI().pack(_x.offset, _x.datatype, _x.count))
      _x = self
      buff.write(_get_struct_B2I().pack(_x.cloud_plane.is_bigendian, _x.cloud_plane.point_step, _x.cloud_plane.row_step))
      _x = self.cloud_plane.data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.Struct('<I%sB'%length).pack(length, *_x))
      else:
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.cloud_plane.is_dense
      buff.write(_get_struct_B().pack(_x))
      buff.write(self.cloud_plane_coef.tostring())
      length = len(self.cloud_clusters)
      buff.write(_struct_I.pack(length))
      for val1 in self.cloud_clusters:
        _v5 = val1.header
        _x = _v5.seq
        buff.write(_get_struct_I().pack(_x))
        _v6 = _v5.stamp
        _x = _v6
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v5.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1
        buff.write(_get_struct_2I().pack(_x.height, _x.width))
        length = len(val1.fields)
        buff.write(_struct_I.pack(length))
        for val2 in val1.fields:
          _x = val2.name
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
          _x = val2
          buff.write(_get_struct_IBI().pack(_x.offset, _x.datatype, _x.count))
        _x = val1
        buff.write(_get_struct_B2I().pack(_x.is_bigendian, _x.point_step, _x.row_step))
        _x = val1.data
        length = len(_x)
        # - if encoded as a list instead, serialize as bytes instead of string
        if type(_x) in [list, tuple]:
          buff.write(struct.Struct('<I%sB'%length).pack(length, *_x))
        else:
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.is_dense
        buff.write(_get_struct_B().pack(_x))
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
      if self.cloud_plane is None:
        self.cloud_plane = sensor_msgs.msg.PointCloud2()
      if self.cloud_clusters is None:
        self.cloud_clusters = None
      end = 0
      _x = self
      start = end
      end += 13
      (_x.is_plane_found, _x.cloud_plane.header.seq, _x.cloud_plane.header.stamp.secs, _x.cloud_plane.header.stamp.nsecs,) = _get_struct_B3I().unpack(str[start:end])
      self.is_plane_found = bool(self.is_plane_found)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.cloud_plane.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.cloud_plane.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.cloud_plane.height, _x.cloud_plane.width,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.cloud_plane.fields = []
      for i in range(0, length):
        val1 = sensor_msgs.msg.PointField()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.name = str[start:end]
        _x = val1
        start = end
        end += 9
        (_x.offset, _x.datatype, _x.count,) = _get_struct_IBI().unpack(str[start:end])
        self.cloud_plane.fields.append(val1)
      _x = self
      start = end
      end += 9
      (_x.cloud_plane.is_bigendian, _x.cloud_plane.point_step, _x.cloud_plane.row_step,) = _get_struct_B2I().unpack(str[start:end])
      self.cloud_plane.is_bigendian = bool(self.cloud_plane.is_bigendian)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.cloud_plane.data = str[start:end]
      start = end
      end += 1
      (self.cloud_plane.is_dense,) = _get_struct_B().unpack(str[start:end])
      self.cloud_plane.is_dense = bool(self.cloud_plane.is_dense)
      start = end
      end += 16
      self.cloud_plane_coef = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=4)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.cloud_clusters = []
      for i in range(0, length):
        val1 = sensor_msgs.msg.PointCloud2()
        _v7 = val1.header
        start = end
        end += 4
        (_v7.seq,) = _get_struct_I().unpack(str[start:end])
        _v8 = _v7.stamp
        _x = _v8
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v7.frame_id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v7.frame_id = str[start:end]
        _x = val1
        start = end
        end += 8
        (_x.height, _x.width,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.fields = []
        for i in range(0, length):
          val2 = sensor_msgs.msg.PointField()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.name = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2.name = str[start:end]
          _x = val2
          start = end
          end += 9
          (_x.offset, _x.datatype, _x.count,) = _get_struct_IBI().unpack(str[start:end])
          val1.fields.append(val2)
        _x = val1
        start = end
        end += 9
        (_x.is_bigendian, _x.point_step, _x.row_step,) = _get_struct_B2I().unpack(str[start:end])
        val1.is_bigendian = bool(val1.is_bigendian)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        val1.data = str[start:end]
        start = end
        end += 1
        (val1.is_dense,) = _get_struct_B().unpack(str[start:end])
        val1.is_dense = bool(val1.is_dense)
        self.cloud_clusters.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_4f = None
def _get_struct_4f():
    global _struct_4f
    if _struct_4f is None:
        _struct_4f = struct.Struct("<4f")
    return _struct_4f
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_B2I = None
def _get_struct_B2I():
    global _struct_B2I
    if _struct_B2I is None:
        _struct_B2I = struct.Struct("<B2I")
    return _struct_B2I
_struct_B3I = None
def _get_struct_B3I():
    global _struct_B3I
    if _struct_B3I is None:
        _struct_B3I = struct.Struct("<B3I")
    return _struct_B3I
_struct_IBI = None
def _get_struct_IBI():
    global _struct_IBI
    if _struct_IBI is None:
        _struct_IBI = struct.Struct("<IBI")
    return _struct_IBI
class ExtractTabletopScene(object):
  _type          = 'bwi_perception/ExtractTabletopScene'
  _md5sum = '99f74d00a07a5046120147218fc37153'
  _request_class  = ExtractTabletopSceneRequest
  _response_class = ExtractTabletopSceneResponse