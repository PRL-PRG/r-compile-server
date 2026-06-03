#? stdlib
`.massage_file_parse_error_message` <- function (x) 
sub("^[^:]+:[[:space:]]*", "", x)
