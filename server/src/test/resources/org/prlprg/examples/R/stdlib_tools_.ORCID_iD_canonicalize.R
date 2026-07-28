#? stdlib
`.ORCID_iD_canonicalize` <- function (x) 
sub(.ORCID_iD_variants_regexp, "\\3", x)
