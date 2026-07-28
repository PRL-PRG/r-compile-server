#? stdlib
`isBlankLineRd` <- function (x) 
{
    utils:::getSrcByte(x) == 1L && length(grep("^[[:blank:]]*\n", 
        x, perl = TRUE)) == length(x)
}
