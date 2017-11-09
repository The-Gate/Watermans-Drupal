<?php

if (isset($_POST['email'])) {
  $email_to = "firstresponse@watermans.ws";
//  $email_to = "callum@sakurabrae.co.uk";
//  $email_to = "kate.brown@thegateworldwide.com";
//  $email_to = "katebrown3@me.com";
  $email_subject = "The following enquiry was made through the Personal Injury Calculator at watermans.co.uk";

  function died($error) {
    // your error code can go here
    echo "We are very sorry, but there were error(s) found with the form you submitted. ";
    echo "These errors appear below.<br /><br />";
    echo $error . "<br /><br />";
    echo "Please go back and fix these errors.<br /><br />";
    die();
  }

  // validation expected data exists
  if (!isset($_POST['firstname']) ||
      !isset($_POST['lastname']) ||
      !isset($_POST['email']) ||
      !isset($_POST['phone']) ||
      !isset($_POST['Injury'])) {
    died('We are sorry, but there appears to be a problem with the form you submitted. Please make sure you have entered all the information correctly.');
  }
  else {
    $fullname = $_POST['firstname'] . ' ' . $_POST['lastname']; // required
    $email_from = $_POST['email']; // required
    $injury = $_POST['Injury']; // required
    $phone = $_POST['phone']; // required
    $error_message = "";
    $email_exp = '/^[A-Za-z0-9._%-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,4}$/';
    if (!preg_match($email_exp, $email_from)) {
      $error_message .= 'The Email Address you entered does not appear to be valid.<br />';
    }
    if (strlen($error_message) > 0) {
      died($error_message);
    }
    $string_exp = "/^[A-Za-z .'-]+$/";
    if (!preg_match($string_exp, $fullname)) {
      $error_message .= 'The Name you entered does not appear to be valid.<br />';
    }

    $email_message = "Form details below.\n\n";

    function clean_string($string) {
      $bad = array("content-type", "bcc:", "to:", "cc:", "href");
      return str_replace($bad, "", $string);
    }

    $email_message .= "Name: " . clean_string($fullname) . "\n";
    $email_message .= "Email: " . clean_string($email_from) . "\n";
    $email_message .= "Injury: " . clean_string($injury) . "\n";
    $email_message .= "Phone: " . clean_string($phone) . "\n";
// create email headers
    $headers = 'From: ' . $email_from . "\r\n" .
        'Reply-To: ' . $email_from . "\r\n" .
        'X-Mailer: PHP/' . phpversion();

    if (mail($email_to, $email_subject, $email_message, $headers)) {
      echo('<script type="text/javascript">this.location="/tracker/pi/thankyou.html";</script>');
    }
    else {
      echo('mail() error;');
    }
  }
}
?>
