// The core difference of catty.

pub mod catty_std {
    pub mod core {
         ///Represents a class.
          pub trait Class{
          }
         
          ///An instance of a class.
          pub type Instance = Box<dyn Class>;
    }
}
