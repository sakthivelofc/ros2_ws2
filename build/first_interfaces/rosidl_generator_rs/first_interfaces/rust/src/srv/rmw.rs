#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "first_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__first_interfaces__srv__AddTwoNumbers_Request() -> *const std::ffi::c_void;
}

#[link(name = "first_interfaces__rosidl_generator_c")]
extern "C" {
    fn first_interfaces__srv__AddTwoNumbers_Request__init(msg: *mut AddTwoNumbers_Request) -> bool;
    fn first_interfaces__srv__AddTwoNumbers_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddTwoNumbers_Request>, size: usize) -> bool;
    fn first_interfaces__srv__AddTwoNumbers_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddTwoNumbers_Request>);
    fn first_interfaces__srv__AddTwoNumbers_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddTwoNumbers_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AddTwoNumbers_Request>) -> bool;
}

// Corresponds to first_interfaces__srv__AddTwoNumbers_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddTwoNumbers_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub a: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b: i64,

}



impl Default for AddTwoNumbers_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !first_interfaces__srv__AddTwoNumbers_Request__init(&mut msg as *mut _) {
        panic!("Call to first_interfaces__srv__AddTwoNumbers_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddTwoNumbers_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { first_interfaces__srv__AddTwoNumbers_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { first_interfaces__srv__AddTwoNumbers_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { first_interfaces__srv__AddTwoNumbers_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddTwoNumbers_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddTwoNumbers_Request where Self: Sized {
  const TYPE_NAME: &'static str = "first_interfaces/srv/AddTwoNumbers_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__first_interfaces__srv__AddTwoNumbers_Request() }
  }
}


#[link(name = "first_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__first_interfaces__srv__AddTwoNumbers_Response() -> *const std::ffi::c_void;
}

#[link(name = "first_interfaces__rosidl_generator_c")]
extern "C" {
    fn first_interfaces__srv__AddTwoNumbers_Response__init(msg: *mut AddTwoNumbers_Response) -> bool;
    fn first_interfaces__srv__AddTwoNumbers_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddTwoNumbers_Response>, size: usize) -> bool;
    fn first_interfaces__srv__AddTwoNumbers_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddTwoNumbers_Response>);
    fn first_interfaces__srv__AddTwoNumbers_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddTwoNumbers_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AddTwoNumbers_Response>) -> bool;
}

// Corresponds to first_interfaces__srv__AddTwoNumbers_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddTwoNumbers_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sum: i64,

}



impl Default for AddTwoNumbers_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !first_interfaces__srv__AddTwoNumbers_Response__init(&mut msg as *mut _) {
        panic!("Call to first_interfaces__srv__AddTwoNumbers_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddTwoNumbers_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { first_interfaces__srv__AddTwoNumbers_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { first_interfaces__srv__AddTwoNumbers_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { first_interfaces__srv__AddTwoNumbers_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddTwoNumbers_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddTwoNumbers_Response where Self: Sized {
  const TYPE_NAME: &'static str = "first_interfaces/srv/AddTwoNumbers_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__first_interfaces__srv__AddTwoNumbers_Response() }
  }
}






#[link(name = "first_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__first_interfaces__srv__AddTwoNumbers() -> *const std::ffi::c_void;
}

// Corresponds to first_interfaces__srv__AddTwoNumbers
#[allow(missing_docs, non_camel_case_types)]
pub struct AddTwoNumbers;

impl rosidl_runtime_rs::Service for AddTwoNumbers {
    type Request = AddTwoNumbers_Request;
    type Response = AddTwoNumbers_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__first_interfaces__srv__AddTwoNumbers() }
    }
}


