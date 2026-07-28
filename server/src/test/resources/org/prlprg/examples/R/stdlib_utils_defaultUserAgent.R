#? stdlib
`defaultUserAgent` <- function () 
{
    Rver <- paste(R.version$major, R.version$minor, sep = ".")
    Rdetails <- paste(Rver, R.version$platform, R.version$arch, 
        R.version$os)
    paste0("R (", Rdetails, ")")
}
