function copyToClipboard(element,button) {
    var $temp = $("<textarea>");
   // $("body").append($temp);
    $(button).after($temp);
    $temp.val($(element).text().replace(/  /g,"")).select();
    document.execCommand("copy");
    $temp.remove();
  }

  