;; Auto-generated. Do not edit!


(when (boundp 'segway_msgs::Faultlog)
  (if (not (find-package "SEGWAY_MSGS"))
    (make-package "SEGWAY_MSGS"))
  (shadow 'Faultlog (find-package "SEGWAY_MSGS")))
(unless (find-package "SEGWAY_MSGS::FAULTLOG")
  (make-package "SEGWAY_MSGS::FAULTLOG"))

(in-package "ROS")
;;//! \htmlinclude Faultlog.msg.html


(defclass segway_msgs::Faultlog
  :super ros::object
  :slots (_data ))

(defmethod segway_msgs::Faultlog
  (:init
   (&key
    ((:data __data) (make-array 0 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _data __data)
   self)
  (:data
   (&optional __data)
   (if __data (setq _data __data)) _data)
  (:serialization-length
   ()
   (+
    ;; uint32[] _data
    (* 4    (length _data)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32[] _data
     (write-long (length _data) s)
     (dotimes (i (length _data))
       (write-long (elt _data i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32[] _data
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _data (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _data i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get segway_msgs::Faultlog :md5sum-) "a1376ac15481ebcd67c3fe86a75a7d55")
(setf (get segway_msgs::Faultlog :datatype-) "segway_msgs/Faultlog")
(setf (get segway_msgs::Faultlog :definition-)
      "uint32[] data

")



(provide :segway_msgs/Faultlog "a1376ac15481ebcd67c3fe86a75a7d55")

