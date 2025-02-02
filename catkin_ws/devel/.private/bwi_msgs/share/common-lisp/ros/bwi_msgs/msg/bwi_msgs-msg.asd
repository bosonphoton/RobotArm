
(cl:in-package :asdf)

(defsystem "bwi_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :actionlib_msgs-msg
               :bwi_planning_common-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "AvailableRobot" :depends-on ("_package_AvailableRobot"))
    (:file "_package_AvailableRobot" :depends-on ("_package"))
    (:file "AvailableRobotArray" :depends-on ("_package_AvailableRobotArray"))
    (:file "_package_AvailableRobotArray" :depends-on ("_package"))
    (:file "LEDActionResult" :depends-on ("_package_LEDActionResult"))
    (:file "_package_LEDActionResult" :depends-on ("_package"))
    (:file "LEDAnimations" :depends-on ("_package_LEDAnimations"))
    (:file "_package_LEDAnimations" :depends-on ("_package"))
    (:file "LEDControlAction" :depends-on ("_package_LEDControlAction"))
    (:file "_package_LEDControlAction" :depends-on ("_package"))
    (:file "LEDControlActionFeedback" :depends-on ("_package_LEDControlActionFeedback"))
    (:file "_package_LEDControlActionFeedback" :depends-on ("_package"))
    (:file "LEDControlActionGoal" :depends-on ("_package_LEDControlActionGoal"))
    (:file "_package_LEDControlActionGoal" :depends-on ("_package"))
    (:file "LEDControlActionResult" :depends-on ("_package_LEDControlActionResult"))
    (:file "_package_LEDControlActionResult" :depends-on ("_package"))
    (:file "LEDControlFeedback" :depends-on ("_package_LEDControlFeedback"))
    (:file "_package_LEDControlFeedback" :depends-on ("_package"))
    (:file "LEDControlGoal" :depends-on ("_package_LEDControlGoal"))
    (:file "_package_LEDControlGoal" :depends-on ("_package"))
    (:file "LEDControlResult" :depends-on ("_package_LEDControlResult"))
    (:file "_package_LEDControlResult" :depends-on ("_package"))
    (:file "LEDStatus" :depends-on ("_package_LEDStatus"))
    (:file "_package_LEDStatus" :depends-on ("_package"))
    (:file "LEDTestType" :depends-on ("_package_LEDTestType"))
    (:file "_package_LEDTestType" :depends-on ("_package"))
    (:file "LogicalNavAction" :depends-on ("_package_LogicalNavAction"))
    (:file "_package_LogicalNavAction" :depends-on ("_package"))
    (:file "LogicalNavActionFeedback" :depends-on ("_package_LogicalNavActionFeedback"))
    (:file "_package_LogicalNavActionFeedback" :depends-on ("_package"))
    (:file "LogicalNavActionGoal" :depends-on ("_package_LogicalNavActionGoal"))
    (:file "_package_LogicalNavActionGoal" :depends-on ("_package"))
    (:file "LogicalNavActionResult" :depends-on ("_package_LogicalNavActionResult"))
    (:file "_package_LogicalNavActionResult" :depends-on ("_package"))
    (:file "LogicalNavFeedback" :depends-on ("_package_LogicalNavFeedback"))
    (:file "_package_LogicalNavFeedback" :depends-on ("_package"))
    (:file "LogicalNavGoal" :depends-on ("_package_LogicalNavGoal"))
    (:file "_package_LogicalNavGoal" :depends-on ("_package"))
    (:file "LogicalNavResult" :depends-on ("_package_LogicalNavResult"))
    (:file "_package_LogicalNavResult" :depends-on ("_package"))
    (:file "LogicalNavigationState" :depends-on ("_package_LogicalNavigationState"))
    (:file "_package_LogicalNavigationState" :depends-on ("_package"))
    (:file "ScavStatus" :depends-on ("_package_ScavStatus"))
    (:file "_package_ScavStatus" :depends-on ("_package"))
    (:file "StopBaseStatus" :depends-on ("_package_StopBaseStatus"))
    (:file "_package_StopBaseStatus" :depends-on ("_package"))
    (:file "WeekTime" :depends-on ("_package_WeekTime"))
    (:file "_package_WeekTime" :depends-on ("_package"))
  ))