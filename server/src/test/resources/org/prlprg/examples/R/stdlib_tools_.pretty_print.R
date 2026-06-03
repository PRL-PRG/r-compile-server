#? stdlib
`.pretty_print` <- function (x, collapse = " ") 
writeLines(.strwrap22(x, collapse = collapse))
