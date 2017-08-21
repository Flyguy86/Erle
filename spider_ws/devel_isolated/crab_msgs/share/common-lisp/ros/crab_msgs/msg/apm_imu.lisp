; Auto-generated. Do not edit!


(cl:in-package crab_msgs-msg)


;//! \htmlinclude apm_imu.msg.html

(cl:defclass <apm_imu> (roslisp-msg-protocol:ros-message)
  ((gyro
    :reader gyro
    :initarg :gyro
    :type (cl:vector cl:float)
   :initform (cl:make-array 3 :element-type 'cl:float :initial-element 0.0))
   (accel
    :reader accel
    :initarg :accel
    :type (cl:vector cl:float)
   :initform (cl:make-array 3 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass apm_imu (<apm_imu>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <apm_imu>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'apm_imu)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name crab_msgs-msg:<apm_imu> is deprecated: use crab_msgs-msg:apm_imu instead.")))

(cl:ensure-generic-function 'gyro-val :lambda-list '(m))
(cl:defmethod gyro-val ((m <apm_imu>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader crab_msgs-msg:gyro-val is deprecated.  Use crab_msgs-msg:gyro instead.")
  (gyro m))

(cl:ensure-generic-function 'accel-val :lambda-list '(m))
(cl:defmethod accel-val ((m <apm_imu>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader crab_msgs-msg:accel-val is deprecated.  Use crab_msgs-msg:accel instead.")
  (accel m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <apm_imu>) ostream)
  "Serializes a message object of type '<apm_imu>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'gyro))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'accel))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <apm_imu>) istream)
  "Deserializes a message object of type '<apm_imu>"
  (cl:setf (cl:slot-value msg 'gyro) (cl:make-array 3))
  (cl:let ((vals (cl:slot-value msg 'gyro)))
    (cl:dotimes (i 3)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  (cl:setf (cl:slot-value msg 'accel) (cl:make-array 3))
  (cl:let ((vals (cl:slot-value msg 'accel)))
    (cl:dotimes (i 3)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<apm_imu>)))
  "Returns string type for a message object of type '<apm_imu>"
  "crab_msgs/apm_imu")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'apm_imu)))
  "Returns string type for a message object of type 'apm_imu"
  "crab_msgs/apm_imu")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<apm_imu>)))
  "Returns md5sum for a message object of type '<apm_imu>"
  "219dfe77f451afa726b227b93ba2a106")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'apm_imu)))
  "Returns md5sum for a message object of type 'apm_imu"
  "219dfe77f451afa726b227b93ba2a106")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<apm_imu>)))
  "Returns full string definition for message of type '<apm_imu>"
  (cl:format cl:nil "float64[3] gyro~%float64[3] accel~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'apm_imu)))
  "Returns full string definition for message of type 'apm_imu"
  (cl:format cl:nil "float64[3] gyro~%float64[3] accel~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <apm_imu>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'gyro) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'accel) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <apm_imu>))
  "Converts a ROS message object to a list"
  (cl:list 'apm_imu
    (cl:cons ':gyro (gyro msg))
    (cl:cons ':accel (accel msg))
))
