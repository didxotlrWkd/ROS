;; Auto-generated. Do not edit!


(when (boundp 'book_find::FindBookFeedback)
  (if (not (find-package "BOOK_FIND"))
    (make-package "BOOK_FIND"))
  (shadow 'FindBookFeedback (find-package "BOOK_FIND")))
(unless (find-package "BOOK_FIND::FINDBOOKFEEDBACK")
  (make-package "BOOK_FIND::FINDBOOKFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude FindBookFeedback.msg.html


(defclass book_find::FindBookFeedback
  :super ros::object
  :slots (_distance ))

(defmethod book_find::FindBookFeedback
  (:init
   (&key
    ((:distance __distance) 0.0)
    )
   (send-super :init)
   (setq _distance (float __distance))
   self)
  (:distance
   (&optional __distance)
   (if __distance (setq _distance __distance)) _distance)
  (:serialization-length
   ()
   (+
    ;; float64 _distance
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _distance
       (sys::poke _distance (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _distance
     (setq _distance (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get book_find::FindBookFeedback :md5sum-) "acff7fda0c683c872875f5c4b069f124")
(setf (get book_find::FindBookFeedback :datatype-) "book_find/FindBookFeedback")
(setf (get book_find::FindBookFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# feedback
float64 distance


")



(provide :book_find/FindBookFeedback "acff7fda0c683c872875f5c4b069f124")

