#? stdlib
`ngettext` <- function (n, msg1, msg2, domain = NULL) 
.Internal(ngettext(n, msg1, msg2, domain))
