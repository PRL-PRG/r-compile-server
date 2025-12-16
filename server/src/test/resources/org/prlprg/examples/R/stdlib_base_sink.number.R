#? stdlib
`sink.number` <- function (type = c("output", "message")) 
{
    type <- match.arg(type)
    .Internal(sink.number(type != "message"))
}
