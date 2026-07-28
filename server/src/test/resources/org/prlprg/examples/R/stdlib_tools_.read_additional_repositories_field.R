#? stdlib
`.read_additional_repositories_field` <- function (txt) 
unique(unlist(strsplit(txt, ",[[:space:]]*")))
