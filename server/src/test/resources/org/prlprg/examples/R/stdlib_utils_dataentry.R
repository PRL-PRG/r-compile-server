#? stdlib
`dataentry` <- function (data, modes) 
{
    check_screen_device("dataentry()")
    if (!is.list(data) || !length(data) || !all(vapply(data, 
        is.vector, NA))) 
        stop("invalid 'data' argument")
    if (!is.list(modes) || (length(modes) && !all(vapply(modes, 
        is.character, NA)))) 
        stop("invalid 'modes' argument")
    if (grepl("darwin", R.version$os)) 
        check_for_XQuartz(file.path(R.home("modules"), "R_de.so"))
    .External2(C_dataentry, data, modes)
}

# Examples
# call data entry with variables x and y


