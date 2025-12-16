#? stdlib
`extSoftVersion` <- function () 
.Internal(eSoftVersion())

# Examples
extSoftVersion()
## the PCRE version
sub(" .*", "", extSoftVersion()["PCRE"])

