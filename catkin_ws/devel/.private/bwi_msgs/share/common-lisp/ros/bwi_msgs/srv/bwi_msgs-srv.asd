
(cl:in-package :asdf)

(defsystem "bwi_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :bwi_msgs-msg
               :geometry_msgs-msg
               :sensor_msgs-msg
)
  :components ((:file "_package")
    (:file "ActionUpdate" :depends-on ("_package_ActionUpdate"))
    (:file "_package_ActionUpdate" :depends-on ("_package"))
    (:file "CheckBool" :depends-on ("_package_CheckBool"))
    (:file "_package_CheckBool" :depends-on ("_package"))
    (:file "DoorHandlerInterface" :depends-on ("_package_DoorHandlerInterface"))
    (:file "_package_DoorHandlerInterface" :depends-on ("_package"))
    (:file "GetNextImage" :depends-on ("_package_GetNextImage"))
    (:file "_package_GetNextImage" :depends-on ("_package"))
    (:file "ImageQuestion" :depends-on ("_package_ImageQuestion"))
    (:file "_package_ImageQuestion" :depends-on ("_package"))
    (:file "LEDClear" :depends-on ("_package_LEDClear"))
    (:file "_package_LEDClear" :depends-on ("_package"))
    (:file "LEDSetStatus" :depends-on ("_package_LEDSetStatus"))
    (:file "_package_LEDSetStatus" :depends-on ("_package"))
    (:file "LEDTestStrip" :depends-on ("_package_LEDTestStrip"))
    (:file "_package_LEDTestStrip" :depends-on ("_package"))
    (:file "LocationAction" :depends-on ("_package_LocationAction"))
    (:file "_package_LocationAction" :depends-on ("_package"))
    (:file "NextLocation" :depends-on ("_package_NextLocation"))
    (:file "_package_NextLocation" :depends-on ("_package"))
    (:file "QuestionDialog" :depends-on ("_package_QuestionDialog"))
    (:file "_package_QuestionDialog" :depends-on ("_package"))
    (:file "ResolveChangeFloor" :depends-on ("_package_ResolveChangeFloor"))
    (:file "_package_ResolveChangeFloor" :depends-on ("_package"))
    (:file "RobotTeleporterInterface" :depends-on ("_package_RobotTeleporterInterface"))
    (:file "_package_RobotTeleporterInterface" :depends-on ("_package"))
    (:file "SaveImageResponse" :depends-on ("_package_SaveImageResponse"))
    (:file "_package_SaveImageResponse" :depends-on ("_package"))
    (:file "ScavHunt" :depends-on ("_package_ScavHunt"))
    (:file "_package_ScavHunt" :depends-on ("_package"))
    (:file "SemanticParser" :depends-on ("_package_SemanticParser"))
    (:file "_package_SemanticParser" :depends-on ("_package"))
    (:file "StopBase" :depends-on ("_package_StopBase"))
    (:file "_package_StopBase" :depends-on ("_package"))
    (:file "UpdateObject" :depends-on ("_package_UpdateObject"))
    (:file "_package_UpdateObject" :depends-on ("_package"))
    (:file "UploadImage" :depends-on ("_package_UploadImage"))
    (:file "_package_UploadImage" :depends-on ("_package"))
  ))