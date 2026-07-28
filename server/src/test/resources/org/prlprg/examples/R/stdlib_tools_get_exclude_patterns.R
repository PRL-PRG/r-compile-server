#? stdlib
`get_exclude_patterns` <- function () 
c("^\\.Rbuildignore$", "(^|/)\\.DS_Store$", "^\\.(RData|Rhistory)$", 
    "~$", "\\.bak$", "\\.swp$", "(^|/)\\.#[^/]*$", "(^|/)#[^/]*#$", 
    "^TITLE$", "^data/00Index$", "^inst/doc/00Index\\.dcf$", 
    "^config\\.(cache|log|status)$", "(^|/)autom4te\\.cache$", 
    "^src/.*\\.d$", "^src/Makedeps$", "^src/so_locations$", "^inst/doc/Rplots\\.(ps|pdf)$")
