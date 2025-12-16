#? stdlib
`.traceClassName` <- function (className) 
{
    className[] <- paste0(className, "WithTrace")
    className
}
