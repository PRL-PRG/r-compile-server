#? stdlib
`.is_primitive_in_base` <- function (fname) 
{
    is.primitive(baseenv()[[fname]])
}
