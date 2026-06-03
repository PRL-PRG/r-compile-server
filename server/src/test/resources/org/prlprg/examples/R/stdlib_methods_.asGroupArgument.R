#? stdlib
`.asGroupArgument` <- function (group) 
{
    if (is.character(group)) {
        if (identical(group, "")) 
            list()
        else as.list(group)
    }
    else group
}
