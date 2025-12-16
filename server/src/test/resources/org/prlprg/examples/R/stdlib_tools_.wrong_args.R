#? stdlib
`.wrong_args` <- function (args, msg) 
{
    len <- length(args)
    if (!len) 
        character()
    else if (len == 1L) 
        paste("argument", sQuote(args), msg)
    else paste("arguments", paste0(c(rep.int("", len - 1L), "and "), 
        sQuote(args), c(rep.int(", ", len - 1L), ""), collapse = ""), 
        msg)
}
