#? stdlib
`resetAPI` <- function (newloc = "") 
{
    if (newloc != "") 
        apidata$wreloc <- newloc
    apidata$wrelines <- NULL
    apidata$fapi <- NULL
}
