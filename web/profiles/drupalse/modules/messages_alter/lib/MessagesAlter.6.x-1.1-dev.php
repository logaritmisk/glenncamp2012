<?php

// $Id: MessagesAlter.6.x-1.1-dev.php,v 1.2 2010/07/13 04:30:52 bartonfreelance Exp $

/**
 * @file
 * Contains the MessagesAlter class
 *
 * This class gives you the ability to use better
 * contains() & remove() methods
 */

/**
 * 
 */
class MessagesAlter {

  var $version = '6.x-1.1-dev';
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
  
  // gets all the available types
  function getTypes($type = 'all') {
    
    if ($type == 'all') {
      $types = array_keys($this->messages);
      return $types;
    }
    
    return isset($this->messages[$type]) ? array($type) : array();

  }

  // another way to add messages
  function add($message, $type='status') {

    if (!isset($this->messages[$type])) {
      $this->messages[$type] = array();
    }

    $this->messages[$type][] = $message;

  }
  
  /**
   * Matches a regext that you provide.
   *
   * @return ARRAY if the messages matches your regex
   * FALSE when no match
   */
  function match($regex, $type='all') {
    
    $matches = array();
    $has_match = FALSE;

    $types = $this->getTypes($type);
    foreach ($types as $t) {

      if ($match = $this->matchByType($t, $regex)) {
        $matches[$t] = $match;
        $has_match = TRUE;
      }
      
    }
    
    return $has_match ? $matches : FALSE;
    
  }
  
  /**
   * Does a regex by message type (status, warning, error)
   *
   * Pretty much just a wrapper of preg_match
   */
  function matchByType($type, $regex) {
    
    $matches = array();
    $has_match = FALSE;
    
    if (isset($this->messages[$type])) {
  
      $count = count($this->messages[$type]);
      for ($i = 0; $i < $count; $i++) {
        
        if ($cnt = preg_match($regex, $this->messages[$type][$i], $m)) {

          /**
           * I'm returning everything because
           * I'm not exactly sure how you're going
           * to use this in your code
           */
          $matches[] = array(
            'type' => $type,
            'search' => $regex,
            'index' => $i,
            'message' => $this->messages[$type][$i],
            'count' => $cnt,
            'matches' => $m,
          );
          $has_match = TRUE;
  
        }
  
      }
    
    }
    
    return $has_match ? $matches : FALSE;
    
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
   * @return ARRAY if the messages contains the string
   * FALSE when no string exists
   * 
   */
  function contains($search, $type='all') {

    $matches = array();
    $has_match = FALSE;

    $types = $this->getTypes($type);
    foreach ($types as $t) {
      
      if ($match = $this->containsByType($t, $search)) {
        $matches[$t] = $match;
        $has_match = TRUE;
      }
      
    }
    
    return $has_match ? $matches : FALSE;

  }
  
  function containsByType($type, $search) {
    
    $matches = array();
    $has_match = FALSE;
    
    if (isset($this->messages[$type])) {
  
      $count = count($this->messages[$type]);
      for ($i = 0; $i < $count; $i++) {
        
        if (strpos($this->messages[$type][$i], $search) !== FALSE) {

          $matches[] = array(
            'type' => $type,
            'search' => $search,
            'index' => $i,
            'message' => $this->messages[$type][$i],
          );
          $has_match = TRUE;
  
        }
  
      }
    
    }
    
    return $has_match ? $matches : FALSE;
    
  }
  
  function remove($items) {

    // we can only remove something
    // if we have something
    if (is_array($items) && count($items)) {

      foreach ($items as $item_type) {
        foreach ($item_type as $item) {
          if (isset($this->messages[$item['type']][$item['index']])) {
            unset($this->messages[$item['type']][$item['index']]);
          }
        }
      }
      
      $this->remove_used = TRUE;
      
    }

  }

  function clean() {

    if ($this->remove_used) {

      // get rid of the empty status from people using the remove function
      foreach ($this->messages as $key => $val) {
        $count = count($this->messages[$key]);
        if ($count == 0) {
          unset($this->messages[$key]);
        }
        elseif ($count == 1 && !isset ($this->messages[$key][0])) {
          // the default theme_status_messages function
          // outputs the first index when there is
          // only one... so we need to make sure it gets what it wants
          // when this happens and our first index is missing
          $this->messages[$key][0] = array_pop($this->messages[$key]);
        }
      }

    }

  }

}