<?php

// $Id: MessagesAlter.rookie.php,v 1.1 2010/07/08 03:15:06 bartonfreelance Exp $

/**
 * @file
 * This is the first class I made for this module.
 *
 * Don't use this class anymore if can help it.
 */

/**
 * I like objects
 */
class MessagesAlter {

  var $messages;
  var $remove_used = FALSE;

  // PHP 5.x constructor
  function __construct(&$messages) {

    $this->MessagesAlter($messages);

  }
  
  // PHP 4.x constructor
  function MessagesAlter(&$messages) {
    
    $this->messages =& $messages;  
  
  }

  // another way to add messages
  function add($message, $type='status') {

    if (!isset($this->messages[$type])) {
      $this->messages[$type] = array();
    }

    $this->messages[$type][] = $message;

  }

  /**
   * An easy way to search the messages for a string
   *
   * @param $search
   * A string to search for
   *
   * @param $type
   * The type of message you're searching
   *
   * @return INT if the messages contains the string
   * FALSE when no string exists
   * 
   */
  function contains($search, $type='status') {

    if (isset($this->messages[$type])) {

      $count = count($this->messages[$type]);
      for ($i = 0; $i < $count; $i++) {
  
        if (strpos($this->messages[$type][$i], $search) !== FALSE) {
  
          return $i;
  
        }
  
      }
    
    }

    return FALSE;

  }

  function remove($idx, $type='status') {

    if ($idx !== FALSE && isset($this->messages[$type][$idx])) {

      unset($this->messages[$type][$idx]);
      $this->remove_used = TRUE;

    }

  }

  function clean() {

    if ($this->remove_used) {

      // get rid of the empty status from people using the remove function
      foreach ($this->messages as $key => $val) {

        if (count($this->messages[$key]) == 0) {

          unset($this->messages[$key]);

        }

      }

    }

  }

}