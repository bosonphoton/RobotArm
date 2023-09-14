# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from plan_execution/ExecutePlanFeedback.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import plan_execution.msg

class ExecutePlanFeedback(genpy.Message):
  _md5sum = "94ff676cd2eeea6adc43ba9737fa2e30"
  _type = "plan_execution/ExecutePlanFeedback"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
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
"""
  # Pseudo-constants
  PLAN_CHANGED_EVENT = 1
  ACTION_STARTED_EVENT = 2
  ACTION_ENDED_EVENT = 3

  __slots__ = ['event_type','plan']
  _slot_types = ['int32','plan_execution/AspFluent[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       event_type,plan

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ExecutePlanFeedback, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.event_type is None:
        self.event_type = 0
      if self.plan is None:
        self.plan = []
    else:
      self.event_type = 0
      self.plan = []

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
      _x = self.event_type
      buff.write(_get_struct_i().pack(_x))
      length = len(self.plan)
      buff.write(_struct_I.pack(length))
      for val1 in self.plan:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        length = len(val1.variables)
        buff.write(_struct_I.pack(length))
        for val2 in val1.variables:
          length = len(val2)
          if python3 or type(val2) == unicode:
            val2 = val2.encode('utf-8')
            length = len(val2)
          buff.write(struct.Struct('<I%ss'%length).pack(length, val2))
        _x = val1.timeStep
        buff.write(_get_struct_I().pack(_x))
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
      if self.plan is None:
        self.plan = None
      end = 0
      start = end
      end += 4
      (self.event_type,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.plan = []
      for i in range(0, length):
        val1 = plan_execution.msg.AspFluent()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.variables = []
        for i in range(0, length):
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2 = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2 = str[start:end]
          val1.variables.append(val2)
        start = end
        end += 4
        (val1.timeStep,) = _get_struct_I().unpack(str[start:end])
        self.plan.append(val1)
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
      _x = self.event_type
      buff.write(_get_struct_i().pack(_x))
      length = len(self.plan)
      buff.write(_struct_I.pack(length))
      for val1 in self.plan:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        length = len(val1.variables)
        buff.write(_struct_I.pack(length))
        for val2 in val1.variables:
          length = len(val2)
          if python3 or type(val2) == unicode:
            val2 = val2.encode('utf-8')
            length = len(val2)
          buff.write(struct.Struct('<I%ss'%length).pack(length, val2))
        _x = val1.timeStep
        buff.write(_get_struct_I().pack(_x))
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
      if self.plan is None:
        self.plan = None
      end = 0
      start = end
      end += 4
      (self.event_type,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.plan = []
      for i in range(0, length):
        val1 = plan_execution.msg.AspFluent()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.variables = []
        for i in range(0, length):
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2 = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2 = str[start:end]
          val1.variables.append(val2)
        start = end
        end += 4
        (val1.timeStep,) = _get_struct_I().unpack(str[start:end])
        self.plan.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i