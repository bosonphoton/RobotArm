# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "multi_level_map_msgs: 4 messages, 1 services")

set(MSG_I_FLAGS "-Imulti_level_map_msgs:/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg;-Igeometry_msgs:/opt/ros/melodic/share/geometry_msgs/cmake/../msg;-Inav_msgs:/opt/ros/melodic/share/nav_msgs/cmake/../msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg;-Iactionlib_msgs:/opt/ros/melodic/share/actionlib_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(multi_level_map_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapData.msg" NAME_WE)
add_custom_target(_multi_level_map_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "multi_level_map_msgs" "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapData.msg" "nav_msgs/MapMetaData:multi_level_map_msgs/LevelMetaData:multi_level_map_msgs/MultiLevelMapLink:geometry_msgs/Pose:multi_level_map_msgs/MultiLevelMapPoint:std_msgs/Header:geometry_msgs/Point:geometry_msgs/Quaternion"
)

get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg" NAME_WE)
add_custom_target(_multi_level_map_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "multi_level_map_msgs" "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg" "geometry_msgs/Point"
)

get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg" NAME_WE)
add_custom_target(_multi_level_map_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "multi_level_map_msgs" "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg" "geometry_msgs/Pose:nav_msgs/MapMetaData:geometry_msgs/Quaternion:geometry_msgs/Point"
)

get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/srv/ChangeCurrentLevel.srv" NAME_WE)
add_custom_target(_multi_level_map_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "multi_level_map_msgs" "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/srv/ChangeCurrentLevel.srv" "geometry_msgs/PoseWithCovarianceStamped:geometry_msgs/Pose:geometry_msgs/PoseWithCovariance:std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Point"
)

get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg" NAME_WE)
add_custom_target(_multi_level_map_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "multi_level_map_msgs" "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg" "multi_level_map_msgs/MultiLevelMapPoint:geometry_msgs/Point"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapData.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/nav_msgs/cmake/../msg/MapMetaData.msg;/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg;/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/multi_level_map_msgs
)
_generate_msg_cpp(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/multi_level_map_msgs
)
_generate_msg_cpp(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/nav_msgs/cmake/../msg/MapMetaData.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/multi_level_map_msgs
)
_generate_msg_cpp(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg"
  "${MSG_I_FLAGS}"
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/multi_level_map_msgs
)

### Generating Services
_generate_srv_cpp(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/srv/ChangeCurrentLevel.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/multi_level_map_msgs
)

### Generating Module File
_generate_module_cpp(multi_level_map_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/multi_level_map_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(multi_level_map_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(multi_level_map_msgs_generate_messages multi_level_map_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapData.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_cpp _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_cpp _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_cpp _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/srv/ChangeCurrentLevel.srv" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_cpp _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_cpp _multi_level_map_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(multi_level_map_msgs_gencpp)
add_dependencies(multi_level_map_msgs_gencpp multi_level_map_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS multi_level_map_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapData.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/nav_msgs/cmake/../msg/MapMetaData.msg;/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg;/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/multi_level_map_msgs
)
_generate_msg_eus(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/multi_level_map_msgs
)
_generate_msg_eus(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/nav_msgs/cmake/../msg/MapMetaData.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/multi_level_map_msgs
)
_generate_msg_eus(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg"
  "${MSG_I_FLAGS}"
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/multi_level_map_msgs
)

### Generating Services
_generate_srv_eus(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/srv/ChangeCurrentLevel.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/multi_level_map_msgs
)

### Generating Module File
_generate_module_eus(multi_level_map_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/multi_level_map_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(multi_level_map_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(multi_level_map_msgs_generate_messages multi_level_map_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapData.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_eus _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_eus _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_eus _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/srv/ChangeCurrentLevel.srv" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_eus _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_eus _multi_level_map_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(multi_level_map_msgs_geneus)
add_dependencies(multi_level_map_msgs_geneus multi_level_map_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS multi_level_map_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapData.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/nav_msgs/cmake/../msg/MapMetaData.msg;/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg;/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/multi_level_map_msgs
)
_generate_msg_lisp(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/multi_level_map_msgs
)
_generate_msg_lisp(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/nav_msgs/cmake/../msg/MapMetaData.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/multi_level_map_msgs
)
_generate_msg_lisp(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg"
  "${MSG_I_FLAGS}"
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/multi_level_map_msgs
)

### Generating Services
_generate_srv_lisp(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/srv/ChangeCurrentLevel.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/multi_level_map_msgs
)

### Generating Module File
_generate_module_lisp(multi_level_map_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/multi_level_map_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(multi_level_map_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(multi_level_map_msgs_generate_messages multi_level_map_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapData.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_lisp _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_lisp _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_lisp _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/srv/ChangeCurrentLevel.srv" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_lisp _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_lisp _multi_level_map_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(multi_level_map_msgs_genlisp)
add_dependencies(multi_level_map_msgs_genlisp multi_level_map_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS multi_level_map_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapData.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/nav_msgs/cmake/../msg/MapMetaData.msg;/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg;/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/multi_level_map_msgs
)
_generate_msg_nodejs(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/multi_level_map_msgs
)
_generate_msg_nodejs(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/nav_msgs/cmake/../msg/MapMetaData.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/multi_level_map_msgs
)
_generate_msg_nodejs(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg"
  "${MSG_I_FLAGS}"
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/multi_level_map_msgs
)

### Generating Services
_generate_srv_nodejs(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/srv/ChangeCurrentLevel.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/multi_level_map_msgs
)

### Generating Module File
_generate_module_nodejs(multi_level_map_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/multi_level_map_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(multi_level_map_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(multi_level_map_msgs_generate_messages multi_level_map_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapData.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_nodejs _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_nodejs _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_nodejs _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/srv/ChangeCurrentLevel.srv" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_nodejs _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_nodejs _multi_level_map_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(multi_level_map_msgs_gennodejs)
add_dependencies(multi_level_map_msgs_gennodejs multi_level_map_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS multi_level_map_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapData.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/nav_msgs/cmake/../msg/MapMetaData.msg;/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg;/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/multi_level_map_msgs
)
_generate_msg_py(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/multi_level_map_msgs
)
_generate_msg_py(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/nav_msgs/cmake/../msg/MapMetaData.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/multi_level_map_msgs
)
_generate_msg_py(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg"
  "${MSG_I_FLAGS}"
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/multi_level_map_msgs
)

### Generating Services
_generate_srv_py(multi_level_map_msgs
  "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/srv/ChangeCurrentLevel.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/multi_level_map_msgs
)

### Generating Module File
_generate_module_py(multi_level_map_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/multi_level_map_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(multi_level_map_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(multi_level_map_msgs_generate_messages multi_level_map_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapData.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_py _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapPoint.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_py _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/LevelMetaData.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_py _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/srv/ChangeCurrentLevel.srv" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_py _multi_level_map_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/chels/catkin_ws/src/bwi_common/multi_level_map_msgs/msg/MultiLevelMapLink.msg" NAME_WE)
add_dependencies(multi_level_map_msgs_generate_messages_py _multi_level_map_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(multi_level_map_msgs_genpy)
add_dependencies(multi_level_map_msgs_genpy multi_level_map_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS multi_level_map_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/multi_level_map_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/multi_level_map_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(multi_level_map_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET nav_msgs_generate_messages_cpp)
  add_dependencies(multi_level_map_msgs_generate_messages_cpp nav_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/multi_level_map_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/multi_level_map_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(multi_level_map_msgs_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET nav_msgs_generate_messages_eus)
  add_dependencies(multi_level_map_msgs_generate_messages_eus nav_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/multi_level_map_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/multi_level_map_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(multi_level_map_msgs_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET nav_msgs_generate_messages_lisp)
  add_dependencies(multi_level_map_msgs_generate_messages_lisp nav_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/multi_level_map_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/multi_level_map_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(multi_level_map_msgs_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET nav_msgs_generate_messages_nodejs)
  add_dependencies(multi_level_map_msgs_generate_messages_nodejs nav_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/multi_level_map_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/multi_level_map_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/multi_level_map_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(multi_level_map_msgs_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET nav_msgs_generate_messages_py)
  add_dependencies(multi_level_map_msgs_generate_messages_py nav_msgs_generate_messages_py)
endif()
