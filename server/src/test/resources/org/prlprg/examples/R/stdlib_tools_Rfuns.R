#? stdlib
`Rfuns` <- function () 
{
    if (is.null(apidata$rfuns)) 
        apidata$rfuns <- getRfuns()
    apidata$rfuns
}
