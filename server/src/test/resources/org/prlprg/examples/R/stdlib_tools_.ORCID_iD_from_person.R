#? stdlib
`.ORCID_iD_from_person` <- function (x) 
vapply(unclass(x), function(e) e$comment["ORCID"] %||% NA_character_, 
    "")
