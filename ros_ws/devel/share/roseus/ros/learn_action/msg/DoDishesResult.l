;; Auto-generated. Do not edit!


(when (boundp 'learn_action::DoDishesResult)
  (if (not (find-package "LEARN_ACTION"))
    (make-package "LEARN_ACTION"))
  (shadow 'DoDishesResult (find-package "LEARN_ACTION")))
(unless (find-package "LEARN_ACTION::DODISHESRESULT")
  (make-package "LEARN_ACTION::DODISHESRESULT"))

(in-package "ROS")
;;//! \htmlinclude DoDishesResult.msg.html


(defclass learn_action::DoDishesResult
  :super ros::object
  :slots (_total_dishes_cleaned ))

(defmethod learn_action::DoDishesResult
  (:init
   (&key
    ((:total_dishes_cleaned __total_dishes_cleaned) 0)
    )
   (send-super :init)
   (setq _total_dishes_cleaned (round __total_dishes_cleaned))
   self)
  (:total_dishes_cleaned
   (&optional __total_dishes_cleaned)
   (if __total_dishes_cleaned (setq _total_dishes_cleaned __total_dishes_cleaned)) _total_dishes_cleaned)
  (:serialization-length
   ()
   (+
    ;; uint32 _total_dishes_cleaned
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32 _total_dishes_cleaned
       (write-long _total_dishes_cleaned s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32 _total_dishes_cleaned
     (setq _total_dishes_cleaned (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get learn_action::DoDishesResult :md5sum-) "58faa44dda59c6545bea63ff57491cbe")
(setf (get learn_action::DoDishesResult :datatype-) "learn_action/DoDishesResult")
(setf (get learn_action::DoDishesResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define the result
uint32 total_dishes_cleaned

")



(provide :learn_action/DoDishesResult "58faa44dda59c6545bea63ff57491cbe")

