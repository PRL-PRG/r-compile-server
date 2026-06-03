#? stdlib
`funAPI` <- function () 
{
    if (is.null(apidata$fapi)) 
        apidata$fapi <- getFunAPI()
    apidata$fapi
}
