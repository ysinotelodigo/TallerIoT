function copyToClipboard(element) {
    var $temp = $("<textarea>");
    $("body").append($temp);
    $temp.val($(element).text().replace(/  /g,"")).select();
    document.execCommand("copy");
    $temp.remove();
  }

  