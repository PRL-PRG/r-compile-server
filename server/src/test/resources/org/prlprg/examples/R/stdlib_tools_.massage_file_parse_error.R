#? stdlib
`.massage_file_parse_error` <- function (e) 
{
    msg <- conditionMessage(e)
    if (inherits(e, "parseError")) 
        sub("\\([^:]+:(.*)\\)", "(\\1)", msg)
    else sub("^[^:]+:[[:space:]]*", "", msg)
}
