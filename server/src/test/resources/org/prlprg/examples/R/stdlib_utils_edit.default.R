#? stdlib
`edit.default` <- function (name = NULL, file = "", title = NULL, editor = getOption("editor"), 
    ...) 
{
    if (is.null(title)) 
        title <- deparse1(substitute(name))
    if (is.function(editor)) 
        invisible(editor(name = name, file = file, title = title))
    else .External2(C_edit, name, file, title, editor)
}
