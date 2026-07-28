#? stdlib
`formatUL` <- function (x, label = "*", offset = 0, width = 0.9 * getOption("width")) 
{
    if (!length(x)) 
        return(character())
    .format_rl_table(label, x, offset, width)
}
